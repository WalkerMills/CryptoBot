from . import store

import base64
import gzip
import hashlib
import hmac
import io
import json
import requests
import ssl
import sys
import time
import urllib

__all__ = ['MtGoxClient', 'RequestError']


class RequestError(Exception):

    def __init__(self, msg):
        self.msg = str(msg)

    def __str__(self):
        return 'Mt. Gox API request failed with error: {}'.format(self.msg)


class MtGoxClient(object):
    """Mt. Gox (Python 2) API.

    This interface uses the Mt. Gox v2 API. More detailed (unofficial)
    documentation of the Mt. Gox API is available at:

        https://bitbucket.org/nitrous/mtgox-api/overview

    Please see the above for the exact contents of request responses.

    """

    # Resource
    RES = 'BTC'
    # Auxiliary currency
    AUX = 'USD'
    # Currency pair
    PAIR = RES + AUX
    # Default API key name
    NAME = 'bitbot'
    ATTEMPTS = 10

    def __init__(self, user, name=NAME, currency=PAIR):
        self._api_url = 'https://data.mtgox.com/api/2/'
        self._user_db = store.UserDB()
        self.currency = currency
        self.user = user
        self.name = name
        self.key = self.get_keys(name=self.name)[0]['key']

    def store_keys(self, *args, **kwargs):
        self._user_db.store_keys(self.user, *args, **kwargs)

    def delete_keys(self, *args, **kwargs):
        self._user_db.delete_keys(self.user, *args, **kwargs)

    def get_keys(self, *args, **kwargs):
        return self._user_db.get_keys(self.user, *args, **kwargs)

    @staticmethod
    def get_tonce():
        """Generate a tonce for authenticating POST requests.

        Returns:
            Unix time at microsecond resolution, used as nonce/tonce
            value

        """

        return str(int(time.time() * 1e6))

    def sign(self, path, data):
        """Generate the hashed signature for the v2 Mt. Gox API.

        This function generates the hashed signature (rest sign) used
        to authenticate POST requests to the v2 Mt. Gox HTTP API. See

            https://en.bitcoin.it/wiki/MtGox/API/HTTP/v2 

        for details on the new hashing method

        Arguments:
            path -- API path for the HTTP request
            data -- URL encoded parameters for the HTTP request

        Returns:
            Hashed signature

        """

        keys = self.get_keys(name=self.name)[0]
        mac = hmac.new(base64.b64decode(keys['ciphertext']), 
                       path + chr(0) + data, hashlib.sha512)
        return base64.b64encode(str(mac.digest()))

    def request(self, path, params=dict(), POST=False):
        """Make an HTTP request to the v2 Mt. Gox API.

        This function handles any HTTP request to the Mt. Gox API. It
        defaults to an authenticated POST request; set the GET
        parameter to True to send an (unauthenticated) GET request. It
        also takes a dictionary of parameters to be URL encoded and
        sent in the request.

        Arguments:
            path -- API path for the HTTP request
            params -- A dictionary of parameters to be URL encoded and
                sent in the HTTP request
            GET -- If True, send a GET request

        Returns:
            The response to the request sent

        """

        headers = {
            'User-Agent': 'BitBot',
            'Accept-Encoding': 'GZIP'
        }

        if not POST:
            response = requests.get(self._api_url + path, params=params,
                                    headers=headers)
        else:
            # Add the authentication information to the request headers
            post_data = urllib.urlencode(params)
            headers.update({
                'Rest-Key': self.key,
                'Rest-Sign': self.sign(path, post_data),
                'Content-Type': 'application/x-www-form-urlencoded'
            })

            response = requests.post(self._api_url + path, data=params, 
                                     headers=headers)


        out = response.json()
        if response.status_code in (403, 500):
            sys.stderr.write('Error code {}\n'.format(response.status_code))

        if out['result'] != 'success':
            raise RequestError(out['error'])

        return out

    def persistent_request(self, attempts=ATTEMPTS, *args, **kwargs):
        """Try a request more than once if unsuccessful.

        If an error is caught, print it to stderr; retry the request up
        to `attempts` times. Any arguments other than attempts are
        passed to request.

        Keyword Arguments:
            attempts -- the number of times to try the request

        Returns:
            Request results from Mt. Gox

        """

        for i in range(attempts):
            try:
                return self.request(*args, **kwargs)

            except RequestError as e:
                sys.stderr.write('{}\n'.format(e))
            except ssl.SSLError as e:
                sys.stderr.write('SSL error: {}\n'.format(e))
            except BaseException as e:
                sys.stderr.write('Fatal unknown error, please report to '
                                 'developer: {}\n'.format(e))
                sys.stderr.flush()

                raise e
            else:
                sys.stdout.write('Retrying request\n')
                sys.stdout.flush()
            finally:
                sys.stderr.flush()

    def get_info(self, currency=PAIR, attempts=ATTEMPTS):
        """Get user information.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            User information in JSON format

        """

        return self.persistent_request(attempts, currency + '/money/info', 
                                       params = {u'nonce': self.get_tonce()},
                                       POST=True)

    def get_idkey(self, currency=PAIR, attempts=1):
        """Get an idKey.

        idKeys are used to subscribe to a user's private updates in the
        websocket API. Each idKey is valid for 24 hours

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            An idKey in JSON format

        """

        return self.persistent_request(1, currency + '/money/idkey', 
                                       params = {u'nonce': self.get_tonce()},
                                       POST=True)

    def get_orders(self, currency=PAIR, attempts=ATTEMPTS):
        """Get order history.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Order history on Mt. Gox in JSON format

        """

        return self.persistent_request(1, currency + '/money/orders', 
                                       params = {u'nonce': self.get_tonce()},
                                       POST=True)

    def get_order(self, oid, currency=PAIR, attempts=1):
        """Get details about an order.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Order details from Mt. Gox in JSON format

        """
        
        orders = (order for order in self.get_orders(currency)['data'])

        try:
            order = next(orders)
            while order['oid'] != oid:
                order = next(orders)
        except StopIteration:
            raise ValueError('No order found with OID {}'.format(oid))

        return order

    def get_currency_info(self, currency=PAIR, attempts=ATTEMPTS):
        """Get currency details.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Currency details from Mt. Gox in JSON format

        """

        return self.persistent_request(attempts, currency + '/money/currency')

    def get_ticker(self, currency=PAIR, attempts=ATTEMPTS):
        """Get ticker information.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Ticker information from Mt. Gox in JSON format

        """

        return self.persistent_request(attempts, currency + '/money/ticker')

    def get_ticker_fast(self, currency=PAIR, attempts=ATTEMPTS):
        """Get fast ticker information.

        Solves the problem of ticker lag (supposedly), but contains less
        information.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Fast ticker information from Mt. Gox in JSON format

        """

        return self.persistent_request(attempts, 
                                       currency + '/money/ticker_fast')

    @staticmethod
    def _check_order_type(type_):
        """Check type for transaction."""

        if type_ not in ('bid', 'ask'):
            raise ValueError('Error: quote type must be either bid or ask; {}'
                             ' is not an acceptable value'.format(type_))

    def get_quote(self, type_, amount, currency=PAIR, attempts=ATTEMPTS):
        """Get a quote for a bid or ask transaction.

        Arguments:
            type_ -- the order type, either \'bid\' or \'ask\'
            amount -- amount of BTC to get a buy or sell quote for

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Quote results from Mt. Gox in JSON format

        """

        self._check_order_type(type_)
        return self.persistent_request(attempts, 
            currency + '/money/order/quote', 
            params={'type': type_, 'amount': amount})

    def add_order(self, type_, amount_int, price_int, currency=PAIR, 
                  attempts=1):
        """Create a currency trade order.

        Arguments:
            type_ -- the order type, either \'bid\' or \'ask\'
            amount_int -- amount of BTC to buy or sell, as an integer
            price_int -- price per BTC in the auxiliary currency as an
                integer

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Order ID from Mt. Gox in JSON format

        """

        self._check_order_type(type_)
        return self.persistent_request(attempts, 
            currency + '/money/order/add', 
            params={'type': type_, 'amount_int': amount_int, 
                    'price_int': price_int})
    
    def market_order(self, type_, amount_int, currency=PAIR, attempts=1):
        """Create a market trade order.

        Place a currency trade order at market price

        Arguments:
            type_ -- the order type, either \'bid\' or \'ask\'
            amount_int -- amount of BTC to buy or sell, as an integer

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Order ID from Mt. Gox in JSON format

        """

        _check_order_type(type_)
        return self.persistent_request(attempts, 
            currency + '/money/order/add', 
            params={'type': type_, 'amount_int': amount_int}, POST=True)

    def cancel_order(self, oid, currency=PAIR, attempts=ATTEMPTS):
        """Cancel a market trade order.

        The purpose of part of the return value, the QID, is unknown.
        See documentation at:

            https://bitbucket.org/nitrous/mtgox-api/overview

        Arguments:
            oid -- the ID of the order to cancel

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Order ID and QID from Mt. Gox in JSON format

        """

        _check_order_type(type_)
        return self.persistent_request(attempts, 
            currency + '/money/order/cancel', params={'oid': oid}, POST=True)

    def get_result(self, type_, oid, currency=PAIR, attempts=ATTEMPTS):
        """Get information on a trade order.

        Arguments:
            type_ -- the order type, either \'bid\' or \'ask\'
            oid -- the ID of the order to cancel

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Order details from Mt. Gox in JSON format

        """

        _check_order_type(type_)
        return self.persistent_request(attempts,
            currency + '/money/order/result', 
            params={'type': type_, 'oid': oid}, POST=True)

    def get_lag(self, currency=PAIR, attempts=ATTEMPTS):
        """Return lag time for executing orders in microseconds.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Lag information from Mt. Gox in JSON format            

        """

        return self.persistent_request(attempts, currency + '/money/order/lag')

    def fetch_trades(self, tid=None, currency=PAIR, attempts=ATTEMPTS):
        """Get up to 1000 trades after the tid specified.

        The first trades used sequential integers for their tid value,
        up to 218868. After this, Unix microstamps were used, starting
        with 1309108565842636. If no tid is given, the last 1000 trades
        are returned.

        Keyword Arguments:
            tid -- the tid after which to retrieve trades
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Trade information from Mt, Gox in JSON format

        """

        if tid:
            params = {'since': tid}
        else:
            params = dict()

        return self.persistent_request(attempts, 
                                       currency + '/money/trades/fetch',
                                       params)

    # TODO: implement a throttle for get_depth and get_full_depth requests
    def get_depth(self, currency=PAIR, attempts=1):
        """Get recent depth information from Mt. Gox.

        This data is very large, and it is possible that excessive
        requests will result in banning (see get_full_depth documentation
        for details)

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Recent depth information from Mt. Gox in JSON format.

        """

        return self.persistent_request(attempts, 
                                       currency + '/money/depth/fetch')

    def get_full_depth(self, currency=PAIR, attempts=1):
        """Get a complete copy of Mt. Gox's full depth data.

        The result of this command can be at least as big as 1MB, so
        there is a rate limit of up to 5 requests per hour. If you
        exceed this limit, you risk being banned.

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Recent depth information from Mt. Gox in JSON format.

        """

        return self.persistent_request(attempts, 
                                       currency + '/money/depth/full')

    def get_wallet_history(self, wallet_currency=RES, page=None, 
                           currency=PAIR, attempts=ATTEMPTS):
        """Get the transaction history of a specified currency wallet.

        Arguments:
            wallet_currency -- the currency wallet to retrieve

        Keyword Arguments:
            page -- the page of history data
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            Transaction history from Mt. Gox in JSON format.

        """

        params = {'currency': wallet_currency}
        if page != None:
            params['page'] = page
        params[u'nonce'] = self.get_tonce()

        return self.persistent_request(attempts, 
                                       currency + '/money/wallet/history',
                                       params=params, POST=True)

    def get_address(self, account, currency=PAIR, attempts=ATTEMPTS):
        """Get a unique bitcoin deposit adress for a given account.

        The address generated is new each time.

        Arguments:
            account -- a Mt. Gox account number

        Keyword Arguments:
            currency -- the currency pair to fetch information for 
                (defaults to BTCUSD)
            attempts -- the number of times to try the request

        Returns:
            A new deposit address from Mt. Gox in JSON format            

        """

        return self.persistent_request(attempts, 
                                       currency + '/money/bitcoin/get_address',
                                       params={'account': account}, POST=True)

    def get_hotp(self, attempts=ATTEMPTS):
        """Get a new HOTP key.

        The uses of this key are unclear; it may have some use for 
        developers

        Keyword Arguments:
            attempts -- the number of times to try the request

        Returns:
            A new HOTP key from Mt. Gox in JSON format

        """

        return self.persistent_request(attempts, 'security/hotp/gen', 
                                       POST=True)

    def list_public(self, attempts=ATTEMPTS):
        """List public depth, ticker and trade channels.

        This method lists all channels supported by the streaming API,
        but many currencies not available for trading over Mt. Gox are
        included

        Keyword Arguments:
            attempts -- the number of times to try the request

        Returns:
            All channels supported by the streaming API in JSON format

        """

        return self.persistent_request(attempts, 'stream/list_public', 
                                       params = {u'nonce': self.get_tonce()},
                                       POST=True)



class MtGoxUser(MtGoxClient):
    
    def __init__(self, user):
        super(MtGoxUser, self).__init__(user)


class MtGoxBot(MtGoxClient):
    
    def __init__(self, user):
        super(MtGoxBot, self).__init__(user)
from . import models

import abc
import hashlib
import sys

from Crypto import Random
from Crypto.Cipher import AES


class BaseDB(object):
    __metaclass__ = abc.ABCMeta

    def __init__(self, model):
        self.model = model

    @abc.abstractmethod
    def store(self, *args, **kwargs):
        return

    @abc.abstractmethod
    def delete(self, *args, **kwargs):
        return

    @abc.abstractmethod
    def get(self, *args, **kwargs):
        return


class KeystoreDB(BaseDB):

    def __init__(self, model=models.APIKey):
        super(KeystoreDB, self).__init__(model)

    @staticmethod
    def _get_iv(quantum=False):
        """Return a string of 16 random characters.

        Normally, just use PyCrypto's builtin functions to generate an
        IV. If the quantum flag is set to True, then fetch a block of
        random binary text from the quantum random number generator on
        the ANU servers, and turn it into a string of characters by
        casting eight digit (binary) substrings as characters. See

            http://qrng.anu.edu.au/FAQ.php

        for more details on the quantum random number generator

        Keyword Arguments:
            quantum -- set to True to use quantum random numbers (you
                may experience noticeable lag from the ANU server)

        Returns:
            An random IV (string of length 16)

        """

        if quantum:
            from bs4 import BeautifulSoup

            import urllib.request, urllib.error, urllib.parse
            import re

            soup = BeautifulSoup(urllib.request.urlopen(
                'https://qrng.anu.edu.au/RawBin.php'))
            rows = soup('table')[0]

            for row in rows.strings:
                text = re.sub('\n', '', row.string)
                if text != '':
                    break

            random = ''.join(chr(int(text[i * 8: (i + 1) * 8], 2))
                             for i in range(AES.block_size))
            random = random.encode('utf-8')

            return random[:AES.block_size]
        else:
            r = Random.new()
            IV = r.read(AES.block_size)
            r.close()

            return IV

    @classmethod
    def _encrypt(cls, text, key, quantum=False):
        """Encrypt a string using the given key.

        Arguments:
            text -- a string to encrypt
            key -- the encryption key

        Returns:
            Encrypted version of text

        """

        # Hash the key to make it 32 bytes long
        key = hashlib.sha256(bytes(key)).digest()

        # Generate a new random initialization vector
        IV = cls._get_iv(quantum)

        # Initialize the cipher
        cipher = AES.new(key, AES.MODE_CBC, IV=IV)

        # Pad out the text length to the next highest multiple of 16
        while len(text) % 16 != 0:
            text += '\0'

        # Store IV with encrypted text
        return IV + cipher.encrypt(text)

    @staticmethod
    def _decrypt(data, key):
        """Decrypt a data block using the given key.

        Arguments:
            data -- the data to decrypt
            key -- the encryption key

        Returns:
            Decrypted version of data

        """

        # Hash the encryption key
        key = hashlib.sha256(bytes(key)).digest()

        # Parse the IV and ciphertext from the encrypted data block
        IV = data[:16]
        ciphertext = data[16:]

        # Initialize the cipher
        cipher = AES.new(key, AES.MODE_CBC, IV=IV)

        # Return the decrypted text
        return cipher.decrypt(ciphertext)

    def store(self, user, values):
        encrypted = list(
            (name, key, self._encrypt(secret, user.password))
            for (name, (key, secret)) in values.items())
        for key in encrypted:
            row, created = self.model.objects.get_or_create(username=user,
                                                            name=key[0],
                                                            key=key[1],
                                                            ciphertext=key[2])
            if created:
                row.save()

    def delete(self, user, **filters):
        rows = self.model.objects.filter(username=user.username, 
                                         **filters)
        rows.delete()

    def get(self, user, **filters):
        rows = self.model.objects.filter(username=user.username,
                                         **filters)
        values = rows.values()
        for v in values:
            v['ciphertext'] = self._decrypt(v['ciphertext'], user.password)

        return [v for v in values]


class UserDB(BaseDB):

    def __init__(self, model=models.User):
        super(UserDB, self).__init__(model)
        self.keystore = KeystoreDB()

    def store(self, values):
        user, created = self.model.objects.get_or_create(**values)
        if created:
            user.save()

    def delete(self, **filters):
        rows = self.model.objects.filter(**filters)
        rows.delete()

    def get(self, **filters):
        rows = self.model.objects.filter(**filters)
        return [v for v in rows.values()]

    def store_keys(self, *args, **kwargs):
        self.keystore.store(*args, **kwargs)

    def delete_keys(self, *args, **kwargs):
        self.keystore.delete(*args, **kwargs)

    def get_keys(self, *args, **kwargs):
        return self.keystore.get(*args, **kwargs)
<<<<<<< Updated upstream
=======


class TradeDB(BaseDB):

    def __init__(self, model=models.Trade):
        super(TradeDB, self).__init__(model)
        self.fields = ('time', 'price', 'amount')

    def store_csv(self, csvfile):
        with open(csvfile, 'rb') as f:
            reader = csv.reader(f, delimiter=',')
            for line in reader:
                values = dict(itertools.izip(self.fields, line))
                super(TradeDB, self).store(values)

    def update_csv(self, csvfile):
        maximum = self.model.objects.all().aggregate(Max('time'))
        maximum = int(maximum['time__max'])

        with open(csvfile, 'rb') as f:
            reader = csv.reader(f, delimiter=',')
            for line in reader:
                if line[0] < maximum:
                    continue

                values = dict(itertools.izip(self.fields, line))
                super(TradeDB, self).store(values)
>>>>>>> Stashed changes

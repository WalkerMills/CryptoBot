from . import models

import csv
import hashlib
import inspect
import itertools
import sys

from Crypto import Random
from Crypto.Cipher import AES
from django.db.models import Max


class BaseDB(object):

    def __init__(self, model):
        self.model = model

    def store(self, values):
        row, created = self.model.objects.get_or_create(**values)
        if created:
            row.save()

    def delete(self, **filters):
        rows = self.model.objects.filter(**filters)
        rows.delete()

    def get(self, **filters):
        rows = self.model.objects.filter(**filters)
        return [v for v in rows.values()]


    class Factory(object):

        export = ('store', 'delete', 'get')

        def __init__(self, base):
            self.base = base

        def create(self):
            # Create an instance of the class to generate
            instance = self.base()

            # Populate the instance with methods to manipulate data in other
            # databases through their interface class
            for cls_ in instance.extends:
                # Name of the class to extend
                name = cls_.__name__.lower()

                # Put an instance of that class into our wrapping instance (so
                # that the methods we need persist)
                obj = cls_()
                setattr(instance, name + '_db', obj)

                # Get the instances of the methods we want to expose
                public = filter(lambda x: x[0] in self.export,
                    inspect.getmembers(obj, predicate=inspect.ismethod))

                # Add those methods to our wrapping instance
                for method, inst in public:
                    setattr(instance, method + '_' + name, inst)

            return instance


class Key(BaseDB):

    extends = ()

    def __init__(self, model=models.Key):
        super(Key, self).__init__(model)

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

    @staticmethod
    def _encrypt(text, key, quantum=False):
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
        IV = Key._get_iv(quantum)

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
            row, created = \
                self.model.objects.get_or_create(username=user,
                                                 name=key[0],
                                                 key=key[1],
                                                 ciphertext=key[2])
            if created:
                row.save()

    def delete(self, user, **filters):
        super(Key, self).delete(username=user.username)

    def get(self, user, **filters):
        rows = self.model.objects.filter(username=user.username,
                                         **filters)
        values = rows.values()
        for v in values:
            v['ciphertext'] = self._decrypt(v['ciphertext'], user.password)

        return [v for v in values]


class Trade(BaseDB):

    extends = (Key,)

    def __init__(self, model=models.Trade):
        super(Trade, self).__init__(model)

    def store_csv(self, csvfile):
        with open(csvfile, 'rb') as f:
            reader = csv.reader(f, delimiter=',')
            for line in reader:
                values = dict(itertools.izip(self.fields, line))
                super(Trade, self).store(values)

    def update_csv(self, csvfile):
        maximum = self.model.objects.all().aggregate(Max('time'))
        maximum = int(maximum['time__max'])

        with open(csvfile, 'rb') as f:
            reader = csv.reader(f, delimiter=',')
            for line in reader:
                if line[0] < maximum:
                    continue

                values = dict(itertools.izip(self.fields, line))
                super(Trade, self).store(values)


class User(BaseDB):

    extends = (Key, Trade)

    def __init__(self, model=models.User):
        super(User, self).__init__(model)


class Bot(BaseDB):

    extends = (Key, Trade, User)

    def __init__(self, model=models.Bot):
        super(Bot, self).__init__(model)

def key():
    return BaseDB.Factory(Key).create()

def trade():
    return BaseDB.Factory(Trade).create()

def user():
    return BaseDB.Factory(User).create()

def bot():
    return BaseDB.Factory(Bot).create()




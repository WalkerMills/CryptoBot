import base64

from django.db import models
from django.contrib.auth.models import User

# All user (exchange) API keys
class Key(models.Model):
    # Key name
    name = models.CharField(max_length=24)

    # Key hash value
    value = models.CharField(max_length=36)

    # Private key
    ciphertext = models.BinaryField(max_length=48)

# Relates users to keys via unique id's
class Uses(models.Model):
    # User id
    uid = models.ForeignKey(User, to_field='id')

    # Key id
    kid = models.ForeignKey(Key, to_field='id')



# All existing bots
class Bot(models.Model):
    # Bot name
    name = models.CharField(max_length=24)

    # User id; name, uid combinations should be unique
    uid = models.ForeignKey(User, to_field='id')

    # Anticipated work for this bot
    work = models.IntegerField()

# All existing rules for bots
class Rule(models.Model):
    # Bot id
    bid = models.ForeignKey(Bot, to_field='id')

    _params = models.TextField(db_column='params', blank=True)

    def set_params(self, params):
        self._params = base64.encodestring(params)

    def get_params(self):
        return base64.decodestring(self._params)

    params = property(get_params, set_params)

# All nodes in the computing cluster for running bots
class Host(models.Model):
    # IP address or domain name
    addr = models.CharField(max_length=24)

    # Total aggregate workload on the host
    workload = models.IntegerField()

# Relates bots to their hosts
class Runs(models.Model):
    # Host id
    hid = models.ForeignKey(Host, to_field='id')

    # Bot id
    bid = models.ForeignKey(Bot, to_field='id')

    # Bot's process id on the host
    pid = models.IntegerField()


# Stores trade data from Bitcoin exchanges
class Trade(models.Model):
    # (Unix) timestamp
    time = models.IntegerField()

    # Price (in USD) per bitcoin
    price = models.DecimalField(max_digits=17, decimal_places=12)

    # Amount of Bitcoin
    amount = models.DecimalField(max_digits=20, decimal_places=12)

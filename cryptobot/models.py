from django.db import models
from django.contrib.auth.models import User


class Key(models.Model):
    name = models.CharField(max_length=32)
    key = models.CharField(max_length=36)
    ciphertext = models.BinaryField(max_length=48)

class Uses(models.Model):
    username_id = models.ForeignKey(User, to_field='username')
    key_id = models.ForeignKey(Key, to_field='id')


class Bot(models.Model):
    name = models.CharField(max_length=32)

class Owns(models.Model):
    username_id = models.ForeignKey(User, to_field='username')
    bot_id = models.ForeignKey(Bot, to_field='id')


class Host(models.Model):
    domain = models.IPAddressField()

class Runs(models.Model):
    bot_id = models.ForeignKey(Bot, to_field='id')
    host_id = models.ForeignKey(Host, to_field='id')


class Trade(models.Model):
    time = models.DecimalField(max_digits=10, decimal_places=0)
    price = models.DecimalField(max_digits=17, decimal_places=12)
    amount = models.DecimalField(max_digits=20, decimal_places=12)


from django.db import models
from django.contrib.auth.models import User

class APIKey(models.Model):
    username = models.ForeignKey(User, to_field='username')
    name = models.CharField(max_length=32)
    key = models.CharField(max_length=36)
    ciphertext = models.BinaryField(max_length=48)


    class Meta:
        unique_together = (('username', 'name'),)


class Trade(models.Model):
    time = models.DecimalField(max_digits=10, decimal_places=0)
    price = models.DecimalField(max_digits=17, decimal_places=12)
    amount = models.DecimalField(max_digits=20, decimal_places=12)


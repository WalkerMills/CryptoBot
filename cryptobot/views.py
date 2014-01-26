from . import mtgox
from . import models
from . import store

import inspect
import io
import json
import os
import sys

from django import forms
from django.http import HttpResponse, HttpResponseRedirect
from django.contrib.auth import logout
from django.contrib.auth.decorators import login_required
from django.contrib.auth.forms import UserCreationForm
from django.shortcuts import render

from registrationform import RegisterForm

USER = 'test'
PASS = 'foo'
KEYFILE = os.path.join(os.path.dirname(__file__), 'tmp/keys.txt')
NAME = u'cryptobot'

def get_keys(path):
    with io.open(path) as f:
        keys = dict((name, (key, secret)) for [name, key, secret] in
                    [unicode(line).split(u' ') for line in f])
    return keys

def json_print(json_str):
    return json.dumps(json_str, sort_keys=True, indent=4,
                      separators=(',', ': '))

def init(user, keys):
    user_db = store.UserDB()
    user_db.store_keys(user, keys)

def register_user(request):
    if request.method == 'POST':
        form = RegisterForm(request.POST)
        if form.is_valid():
            new_user = form.save()
            return HttpResponseRedirect("/register_success/")
    else:
        form = RegisterForm()

    return render(request, "cryptobot/register.html", {'form': form})

def register_success(request):
    form = RegisterForm()
    return render(request, "cryptobot/register_success.html")

@login_required(login_url='/login/')
def index(request):
    return render(request, "cryptobot/account_home.html")

@login_required(login_url='/login/')
def trade(request):
    return render(request, "cryptobot/trade.html")

@login_required(login_url='/login/')
def bots(request):
    return render(request, "cryptobot/bots.html")

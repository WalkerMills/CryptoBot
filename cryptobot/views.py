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

<<<<<<< HEAD
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

=======
>>>>>>> 4c099fd2cd0d7b02aeb00b70dca715e64f26d5cd
@login_required(login_url='/login/')
def index(request):
    user = request.user

    keys = get_keys(KEYFILE)

    initialized = False
    while not initialized:
        try:
            client = mtgox.MtGoxClient(user, name=NAME)
            initialized = True
        except IndexError:
            user_db = store.UserDB()
            user_db.store_keys(user, keys)

    stream = io.StringIO()

    # Test storing and deleting keys
    try:
        client.delete_keys(name__in=keys)
    except KeyError:
        pass
    finally:
        client.store_keys(keys)
        client.delete_keys(name__exact=NAME)
        client.store_keys({NAME: keys[NAME]})

    # Check that the keystore actually works
    values = client.get_keys(name__exact=NAME)
    for v in values:
        stream.write(u'Successfully stored API key {} for user {}\n\n'.format(
            v['name'], v['username_id']))

    # Test Mt. Gox API

    # Get all methods of MtGoxClient
    methods = inspect.getmembers(client, predicate=inspect.ismethod)

    # Filter out all private methods
    public = dict(filter(lambda x: x[0].startswith('_') == False, methods))
    stream.write(u'Public API methods:\n{}\n\n'.format(', '.join(public)))

    # Tuple containing names of methods to test
    check = (
        ('get_info', (), {}),
        ('get_idkey', (), {}),
        ('get_orders', (), {}),
        ('get_currency_info', (), {}),
        ('get_ticker', (), {}),
        ('get_ticker_fast', (), {}),
        ('get_lag', (), {}),
        ('get_hotp', (), {}),
        ('list_public', (), {}),
        ('get_quote', ('bid', 1000000), {}),
        ('get_quote', ('ask', 1000000), {}),
        ('get_wallet_history', (), {}),
        ('fetch_trades', (), {'tid': int(client.get_tonce()) - 10})
    )
    stream.write(u'Checking:\n{}\n\n'.format(', '.join(c[0] for c in check)))

    unchecked = set(public).difference(set(c[0] for c in check))
    stream.write(u'Unchecked:\n{}\n\n'.format(', '.join(u for u in unchecked)))

    # Run each method
    for name, api_args, api_kwargs in check:
        sys.stderr.write(u'{}\n'.format(name))
        sys.stderr.flush()
        stream.write(u'Checking {}:\n\n'.format(name))
        # Pretty print method return value
        stream.write(u'{}\n\n'.format(json_print(public[name](*api_args,
                                                              **api_kwargs))))

    output = stream.getvalue()
    stream.close()

    return HttpResponse(output, content_type='text/plain')

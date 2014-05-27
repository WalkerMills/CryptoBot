from . import mtgox
from . import models
from . import store
from .lib import interface

import ast

from django import forms
from django.http import HttpResponse, HttpResponseRedirect
from django.contrib.auth import logout
from django.contrib.auth.decorators import login_required
from django.contrib.auth.forms import UserCreationForm
from django.shortcuts import render
from django.http import HttpResponse

from registrationform import RegisterForm


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


class BotForm(forms.Form):
    name = forms.CharField(max_length=24, required=True)
    action = forms.TypedChoiceField(widget=forms.Select, required=True, 
        choices=(
            (0, "Watch"), 
            (1, "Buy"), 
            (2, "Sell")
        ),
        coerce=lambda i: interface.identity(interface.action_t(i)),
        empty_value=None
    )
    amount = forms.FloatField(required=True)
    indicators = forms.MultipleChoiceField(widget=forms.CheckboxSelectMultiple,
        required=True, choices=(
            (("SMA", 10), "10 Day SMA"),
            (("SMA", 21), "21 Day SMA")
        )
    )
    start = forms.IntegerField(required=True)
    end = forms.IntegerField(required=True)

@login_required(login_url='/login/')
def bots(request):
    if request.method == 'POST':
        form = BotForm(request.POST)
        if form.is_valid():
            name = form.cleaned_data['name']
            action = form.cleaned_data['action']
            indicators = form.cleaned_data['indicators']
            start = form.cleaned_data['start']
            end = form.cleaned_data['end']

            b = interface.bot(request.user.id, str(name))
            r = interface.sma(action, 0.0)

            for i in indicators:
                type_, period = ast.literal_eval(i)
                if type_ == "SMA":
                    r.add_indicator(period)
            r.update_indices(start, end)

            b.insert_rule(r)
            b.run(False)

            return HttpResponse("ran bot {} for uid {}".format(
                name, request.user.id))
    else:
        form = BotForm()

    return render(request, "cryptobot/bots.html", {"botform": form})

@login_required(login_url='/login/')
def mtgox_trade(request):
    if request.method == 'POST':
        tobuy = request.POST['tobuy']
        marketorder = request.POST['marketorder']
        curr1 = request.POST['curr1']
        exchange = request.POST['exchange']
        curr2 = request.POST['curr2']

        tobuy = (tobuy == 'true')
        marketorder = (marketorder == 'true')
        curr1 = float(curr1)
        exchange = float(exchange)
        curr2 = float(curr2)

        mesg = ""
        if tobuy and marketorder:
            mesg = "the user bought " + str(curr2) + " bitcoin for " + str(curr1) + " dollars"
        elif not tobuy and marketorder:
            mesg = "the user sold " + str(curr1) + " bitcoin for " + str(curr2) + " dollars"
        elif tobuy and not marketorder:
            mesg = "the user put in a buy order of " + str(curr2) + " bitcoin at " + str(1.0/exchange) + " bitcoin per dollar"
        else:
            mesg = "the user put in a sell order of " + str(curr1) + " bitcoin at " + str(exchange) + " dollars per bitcoin"

        response = HttpResponse()
        response.write(mesg)
        return response

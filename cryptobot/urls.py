from django.conf.urls import patterns, url

from cryptobot import views

urlpatterns = patterns('',
    url(r'^splash/', views.index, name='splash'),
    url(r'^trade/', views.trade, name='trade'),
    url(r'^bots/', views.bots, name='bots'),
)

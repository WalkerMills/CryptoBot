from django.conf.urls import patterns, include, url
from web import settings

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    url(r'^$', 'django.contrib.auth.views.login',
        {'template_name': 'cryptobot/home.html'}),
    url(r'^login/', 'django.contrib.auth.views.login',
        {'template_name': 'cryptobot/login.html'}),
    url(r'^logout/', 'django.contrib.auth.views.logout',
        {'template_name': 'cryptobot/logout.html'}),
    url(r'^register_success/', 'cryptobot.views.register_success'),
    url(r'^register/', 'cryptobot.views.register_user'),
    url(r'^accounts/', include('cryptobot.urls', namespace='cryptobot')),
    url(r'^admin/', include(admin.site.urls)),
    url(r'^trades_to_django/', 'cryptobot.views.mtgox_trade'),
    url(r'^static/(?P<path>.*)$', 'django.views.static.serve',
        {'document_root': settings.STATIC_ROOT}),
)

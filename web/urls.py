from django.conf.urls import patterns, include, url

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'web.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),

    url(r'^cryptobot/', include('cryptobot.urls')),
    url(r'^admin/', include(admin.site.urls)),
    url(r'^cryptobot/login/$', 'django.contrib.auth.views.login',
        {'template_name': 'cryptobot/login.html'}),
)

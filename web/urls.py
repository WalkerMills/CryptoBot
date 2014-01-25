from django.conf.urls import patterns, include, url

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'web.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),

    url(r'^$', 'django.contrib.auth.views.login',
        {'template_name': 'cryptobot/home.html'}),
    url(r'^login/', 'django.contrib.auth.views.login',
        {'template_name': 'cryptobot/login.html'}),
    url(r'^logout/', 'django.contrib.auth.views.logout',
        {'template_name': 'cryptobot/logout.html'}),
    url(r'^accounts/profile/', include('cryptobot.urls')),
    url(r'^admin/', include(admin.site.urls)),
)

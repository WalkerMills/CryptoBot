from django.conf.urls import patterns, include, url

from django.contrib import admin
admin.autodiscover()

urlpatterns = patterns('',
    # Examples:
    # url(r'^$', 'web.views.home', name='home'),
    # url(r'^blog/', include('blog.urls')),

    url(r'^bitbot/', include('bitbot.urls')),
    url(r'^admin/', include(admin.site.urls)),
    url(r'^bitbot/login/$', 'django.contrib.auth.views.login',
        {'template_name': 'bitbot/login.html'}),
)

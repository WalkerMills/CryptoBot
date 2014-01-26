#! /usr/bin/env python2

import os
import sys
sys.path.append('/usr/local/django')
sys.path.append('/usr/local/django/cryptobot')

os.environ['DJANGO_SETTINGS_MODULE'] = 'web.settings'

import django.core.handlers.wsgi

application = django.core.handlers.wsgi.WSGIHandler()

# import sys
# import settings
# 
# import django.core.management
# django.core.management.setup_environ(settings)
# utility = django.core.management.ManagementUtility()
# command = utility.fetch_command('runserver')
# 
# command.validate()
# 
# import django.conf
# import django.utils
# 
# django.utils.translation.activate(django.conf.settings.LANGUAGE_CODE)
# 
# import django.core.handlers.wsgi
# 
# application = django.core.handlers.wsgi.WSGIHandler()

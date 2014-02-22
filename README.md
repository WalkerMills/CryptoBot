# CryptoBot

Algorithmic cryptocurrency trading platform

## Dependencies

CryptoBot depends on some C++ libraries/tools (installed through your OS package manager) and some Python modules (installed through pip, the Python package manager); also requires Make >= 3.8. Servers require additional dependencies, but the settings for the Django project handle connections to the remote server(s) from development machines, so they don't need to be installed on all clients. On Arch Linux,

```
\$ git clone git@github.com:WalkerMills/CryptoBot.git cryptobot
\$ cd cryptobot

\# pacman -S cython python2-pip
\# yaourt -S ta-lib thrift thrift-cpp
\# pip2 install bcrypt cffi django pycrypto requests

\# pacman -U deps/nuodb*.tar.xz
\# source /etc/profile
\# ldconfig
```

### thrift-cpp doesn't build correctly

thrift-cpp build appears to be broken; you'll get an error about missing some object files, because the build is looking in the wrong directory. This can be solved with a symlink:

```
\$ cd /tmp/yaourt-tmp-$(whoami)/aur-thrift-cpp/src/thrift*/test/cpp
\$ rm -rf .libs
\$ ln -s . .libs
\$ cd ../../../../
\$ makepkg

\# pacman -U ./thrift-cpp*.tar.xz
```

It requires NuoDB, Thrift, and Cython to compile from source; to run a server, you also need Apache, mod_wsgi, Memcached, and there are additional configuration steps.

### Servers

This installation assumes that the git root for CryptoBot is located at /usr/local/django/cryptobot

```
\# pacman -S apache mod_wsgi2 memcached
\# pip2 install python-memcached
```

And add the following to /etc/httpd/conf/httpd.conf

```
LoadModule wsgi_module modules/mod_wsgi.so

\# ...

WSGIScriptAlias / /usr/local/django/cryptobot/apache/django.wsgi

<Directory /usr/local/django/cryptobot/apache>
    Order allow,deny
    Allow from all
</Directory>
```

Now, enable and start the Apache and Memcached daemons

```
\# systemctl enable httpd
\# systemctl enable memcached
```



#! /usr/bin/env python2

from . import store

import os
import SocketServer
import resource
import sys

class ForkingRequestHandler(SocketServer.StreamRequestHandler):

    def handle(self):
        self.data = self.rfile.readline().strip()
        sys.stderr.write("{} wrote: {}".format(self.client_address[0], 
                                               self.data))
        sys.stderr.flush()

        words = self.data.split()
        if len(words) != 2:
            return

        username, bot_name = words
        



class ForkingServer(SocketServer.ForkingMixIn, SocketServer.UnixStreamServer):
    
    def __init__(self, server_address):
        self._daemonize()

        if os.access(server_address, 0):
            os.remove(server_address)

        SocketServer.UnixStreamServer.__init__(self, server_address, 
                                               ForkingRequestHandler)

    def _daemonize(self):
        UMASK = 0
        WORKDIR = '/'
        MAXFD = 1024
        if hasattr(os, 'devnull'):
            REDIRECT_TO = os.devnull
        else:
            REDIRECT_TO = '/dev/null'

        if os.fork() != 0:
            os._exit(0)

        os.setsid()

        if os.fork() != 0:
            os._exit(0)
        
        maxfd = resource.getrlimit(resource.RLIMIT_NOFILE)[1]
        if maxfd == resource.RLIM_INFINITY:
            maxfd = MAXFD
        for fd in range(0, maxfd):
            try:
                os.close(fd)
            except OSError:
                pass

        os.open(REDIRECT_TO, os.O_RDWR)
        os.dup2(0, 1)
        os.dup2(0, 2)

def main():
    import threading

    server_address = '/tmp/cryptobot.sock'
    server = ForkingServer(server_address)
    
    t = threading.Thread(target=server.serve_forever)
    t.setDaemon(True)
    try:
        t.start()
    except:
        server.socket.close()
        sys.exit(1)

if __name__ == '__main__':
    main()



import SocketServer
import os
import os.path
import resource
import sys
import time

class RequestHandler(SocketServer.StreamRequestHandler):

    def handle(self):
        request = self.rfile.readline()
        if request:
            try:
                self.process_request(request)
            except Exception, e:
                self.server.log('exception: %s' % str(e))
                self.wfile.write('Error: %s\n' % str(e))
        else:
            self.server.log('error: unable to read request')
            self.wfile.write('Error: unable to read request')


    def process_request(self, request):
        words = request.split()
        if len(words) == 0:
            self.server.log('error: empty request')
            self.wfile.write('Error: empty request\n')
            return

        command = words[0]
        args = words[1:]

        methodname = 'do_' + command
        if not hasattr(self, methodname):
            self.server.log('error: invalid command')
            self.wfile.write('Error: "%s" is not a valid command\n' % command)
            return
        method = getattr(self, methodname)
        method(*args)

class Server(ServerBase):

    """Server implementation

    """

    def __init__(self, server_address):
        """Constructor"""
        self._daemonize()

        if ServerBase == SocketServer.UnixStreamServer:
            # Delete the socket file if it already exists
            if os.access(server_address, 0):
                os.remove(server_address)

        ServerBase.__init__(self, server_address, RequestHandler)


    def log(self, format, *args):
        """Write a message to the server log file"""
        try:
            message = format % args
            timestamp = time.strftime('%Y-%m-%d %H:%M:%S')
            f = open(server_log, 'a+')
            f.write('%s %s\n' % (timestamp, message))
            f.close()
        except Exception, e:
            print str(e)


    def serve_until_stopped(self):
        """Serve requests until self.stop() is called.

        This is an alternative to BaseServer.serve_forever()
        """

        self._stopped = False
        while not self.__stopped:
            self.handle_request()


    def stop(self):
        self._stopped = True


    def _daemonize(self):
        """Create daemon process.

        Based upon recipe provided at
        http://aspn.activestate.com/ASPN/Cookbook/Python/Recipe/278731
        """

        UMASK = 0
        WORKDIR = '/'
        MAXFD = 1024
        if hasattr(os, 'devnull'):
            REDIRECT_TO = os.devnull
        else:
            REDIRECT_TO = '/dev/null'

        try :
            if os.fork() != 0:
                os._exit(0)

            os.setsid()

            if os.fork() != 0:
                os._exit(0)

            os.chdir(WORKDIR)
            os.umask(UMASK)
        except OSError, e:
            self.log('exception: %s %s', e.strerror, e.errno)
            raise Exception, "%s [%d]" % (e.strerror, e.errno)
        except Exception, e:
            self.log('exception: %s', str(e))
        
        maxfd = resource.getrlimit(resource.RLIMIT_NOFILE)[1]
        if maxfd == resource.RLIM_INFINITY:
            maxfd = MAXFD
        for fd in range(0, maxfd):
            try:
                os.close(fd)
            except OSError:
                pass

        os.open(REDIRECT_TO, os.O_RDWR)
        os.dup2(0, 1)
        os.dup2(0, 2)


def run_server(options, args):
    svr = Server(server_address)
    svr.serve_until_stopped()
    svr.server_close()

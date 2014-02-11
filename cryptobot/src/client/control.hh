#ifndef __CONTROL_HH__
#define __CONTROL_HH__

#include <deque>
#include <string>

#include <thrift/protocol/TCompactProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

#include "Bot.h"
#include "django_db.hh"


namespace control {
    // host class acts as an RPC client factory
    class host {
    private:
        std::string domain;
        int port;
        boost::shared_ptr<apache::thrift::transport::TSocket> socket;
        boost::shared_ptr<apache::thrift::transport::TTransport> transport;
        boost::shared_ptr<apache::thrift::protocol::TProtocol> protocol;
        bool connected;

        void initialize();
        void connect();
        void disconnect();

    public:
        host(std::string domain);
        host(std::string domain, int port);
        ~host();

        bool active();
        server::BotClient *client();
    };

    // network wraps host, and upon receiving a connection request, uses the
    // highest priority host object to generate an RPC client
    class network {
    private:
        std::deque<host *> hosts;
        db::bot bot_db;

    public:
        network();
        ~network();

        void add_host(host *h);
        void remove_host(std::string domain);

        server::BotClient *route();
    };
}

#endif // __CONTROL_HH__
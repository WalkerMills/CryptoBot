#ifndef __CONTROL_HH__
#define __CONTROL_HH__

#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

#include "Bot.h"
#include "nuodbi.hh"
#include "server.hh"


namespace control {


// host class acts as an RPC client factory
class host {
private:
    int port;
    boost::shared_ptr<apache::thrift::transport::TSocket> socket;
    boost::shared_ptr<apache::thrift::transport::TTransport> transport;
    boost::shared_ptr<apache::thrift::protocol::TProtocol> protocol;
    bool connected;

    void initialize();
    void connect();
    void disconnect();

public:
    char *domain;

    host(char *domain);
    host(char *domain, int port);
    ~host();

    bool active();
    server::BotClient *client();
};

// network wraps host, and upon receiving a connection request, uses the
// highest priority host object to generate an RPC client
class network {
private:
    db::host *host_db;

public:
    network();
    ~network();

    void add_host(char *domain);
    void remove_host(char *domain);

    host *route();
};

}

#endif // __CONTROL_HH__
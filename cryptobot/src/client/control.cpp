#include <cstdlib>
#include <cstring>

#include "control.hh"


using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;

using namespace control;


// Host interface
host::host(char *domain) {
    this->domain = new char[strlen(domain) + 1];
    strcpy(this->domain, domain);
    this->port = TPORT;
    this->initialize();
    this->connected = false;
}

host::host(char *domain, int port) {
    this->domain = new char[strlen(domain) + 1];
    strcpy(this->domain, domain);
    this->port = port;
    this->initialize();
    this->connected = false;
}

host::~host() {
    this->disconnect();

    delete this->domain;
}

void host::initialize() {
    this->socket = 
        boost::shared_ptr<TSocket>(new TSocket(this->domain, this->port));
    this->transport = 
        boost::shared_ptr<TTransport>(new TFramedTransport(this->socket));
    this->protocol = 
        boost::shared_ptr<TProtocol>(new TBinaryProtocol(this->transport));
}

void host::connect() {
    if ( ! this->connected ) {
        this->transport->open();
        this->connected = true;
    }
}

void host::disconnect() {
    if ( this->connected ) {
        this->transport->close();
        this->connected = false;
    }
}

bool host::active() {
    return this->connected;
}

server::BotClient *host::client() {
    server::BotClient *client = new server::BotClient(this->protocol);
    this->connect();

    return client;
}


// Computing cluster interface
network::network() {
    this->host_db = new db::host();
}

network::~network() {
    delete this->host_db;
}

host *network::route() {
    char *domain = host_db->next();
    host *h = new host(domain);

    delete domain;
    return h;
}
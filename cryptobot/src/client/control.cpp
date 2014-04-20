#include "control.hh"
#include "server.hh"

using namespace control;


host::host(char *domain) {
    this->domain = domain;
    this->port = TPORT;
    this->initialize();
    this->connected = false;
}

host::host(char *domain, int port) {
    this->domain = domain;
    this->port = port;
    this->initialize();
    this->connected = false;
}

host::~host() {
    this->disconnect();

    delete this->protocol;
    delete this->transport;
    delete this->socket;
}

void host::initialize() {
    this->socket = new TSocket(this->domain, this->port);
    this->transport = new TFramedTransport(socket);
    this->protocol = new TCompactProtocol(transport);
}

void host::connect() {
    if ( ! this->connected ) {
        this->transport->open();
    }
}

void host::disconnect() {
    if ( this->connected ) {
        this->transport->close();
    }
}

bool host::active() {
    return this->connected;
}

server::BotClient *host::client() {
    server::BotClient *client = new server::BotClient(this->transport);
    this->connect();

    return client
}

network::network() {
    this->host_db = new db::host();
}

network::~network() {
    delete this->host_db;
}

server::BotClient *network::route() {
    char *domain = host_db->next();
    host *h = new host(domain);

    return h->client();
}
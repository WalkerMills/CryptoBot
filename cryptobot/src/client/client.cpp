#include <thrift/protocol/TCompactProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

#include "Bot.h"

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;


int main(int argc, char **argv) {
    int port = 9090;
    char *host;

    if ( argc > 1 ) {
        host = argv[1];
    } else {
        host = "localhost";
    }

    boost::shared_ptr<TSocket> socket(new TSocket(host, port));
    boost::shared_ptr<TTransport> transport(new TFramedTransport(socket));
    boost::shared_ptr<TProtocol> protocol(new TCompactProtocol(transport));

    server::BotClient client(protocol);
    transport->open();
    client.run(-1, false);
    transport->close();

    transport->open();
    client.stop(-1);
    transport->close();


    return 0;
}
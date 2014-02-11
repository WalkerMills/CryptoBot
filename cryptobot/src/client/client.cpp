#include "Bot.h"

#include <thrift/protocol/TCompactProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;


int main(int argc, char **argv) {
    int port = 9090;

    boost::shared_ptr<TSocket> socket(new TSocket("localhost", port));
    boost::shared_ptr<TTransport> transport(new TFramedTransport(socket));
    boost::shared_ptr<TProtocol> protocol(new TCompactProtocol(transport));

    server::BotClient client(protocol);
    transport->open();
    client.create_bot("test", "test_bot");
    transport->close();

    return 0;
}
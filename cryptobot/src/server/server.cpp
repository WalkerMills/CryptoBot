#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

#include "../gen/Bot.h"
#include "server.hh"

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::server;
using namespace ::apache::thrift::transport;

using boost::shared_ptr;

using namespace ::server;

BotHandler::BotHandler() { }

void BotHandler::create_bot(const std::string& username, 
                            const std::string& name) {
    // Your implementation goes here
    printf("create_bot\n");
}

void BotHandler::delete_bot(const std::string& username, 
                            const std::string& name) {
    // Your implementation goes here
    printf("delete_bot\n");
}

void BotHandler::run_bot(const std::string& username, 
                         const std::string& name) {
    // Your implementation goes here
    printf("run_bot\n");
}

void BotHandler::stop_bot(const std::string& username, 
                          const std::string& name) {
    // Your implementation goes here
    printf("stop_bot\n");
}


int main(int argc, char **argv) {
    int port = 9090;
    shared_ptr<BotHandler> handler(new BotHandler());
    shared_ptr<TProcessor> processor(new BotProcessor(handler));
    shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
    shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
    shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

    TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
    server.serve();
    return 0;
}

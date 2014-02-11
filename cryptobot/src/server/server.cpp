#include <thrift/concurrency/ThreadManager.h>
#include <thrift/concurrency/PosixThreadFactory.h>
#include <thrift/protocol/TCompactProtocol.h>
#include <thrift/server/TNonblockingServer.h>

#include "Bot.h"
#include "server.hh"

using namespace ::apache::thrift;
using namespace ::apache::thrift::concurrency;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::server;

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
    shared_ptr<BotHandler> handler(new BotHandler());
    shared_ptr<TProcessor> processor(new BotProcessor(handler));
    shared_ptr<TProtocolFactory> protocolFactory(
        new TCompactProtocolFactory());

    // using thread pool with maximum 15 threads to handle incoming requests
    shared_ptr<ThreadManager> threadManager = ThreadManager::newSimpleThreadManager(15);
    shared_ptr<PosixThreadFactory> threadFactory = shared_ptr<PosixThreadFactory>(new PosixThreadFactory());
    threadManager->threadFactory(threadFactory);
    threadManager->start();
    TNonblockingServer server(processor, protocolFactory, TPORT, 
                              threadManager);
    server.serve();
    return 0;
}

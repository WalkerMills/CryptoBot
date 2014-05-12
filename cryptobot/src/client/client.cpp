#include <thrift/protocol/TCompactProtocol.h>
#include <thrift/transport/TBufferTransports.h>
#include <thrift/transport/TSocket.h>

#include "bots.hh"
#include "Bot.h"
#include "worker.hh"

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;


int main(int argc, char **argv) {
    bots::bot *b = new bots::bot(0, "foo");
    bots::rule *r = new bots::rule(bots::watch, 0.0, "SMA");
    b->insert_rule(r);
    b->run(false);
    b->stop();

    delete b;

    return 0;
}
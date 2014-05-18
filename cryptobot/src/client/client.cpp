#include <chrono>
#include <thread>

#include "bots.hh"
#include "rules.hh"
#include "Bot.h"


int main(int argc, char **argv) {
    bots::bot *b = new bots::bot(0, "foo");
    bots::rule *r = new bots::rule(WATCH, 0.0, "SMA");
    b->insert_rule(r);
    b->run(false);
    std::this_thread::sleep_for(std::chrono::seconds(2));
    b->stop();

    delete b;

    return 0;
}
#include <chrono>
#include <thread>

#include "bots.hh"
#include "rules.hh"
#include "Bot.h"


int main(int argc, char **argv) {
    bots::bot *b = new bots::bot(0, "foo");
    bots::sma *r = new bots::sma(WATCH, 0.0);
    r->add_sma(10);
    r->start = 1;
    r->end = 93496;
    b->insert_rule(r);
    b->run(false);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    b->stop();

    delete b;

    return 0;
}
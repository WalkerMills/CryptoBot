#include <chrono>
#include <thread>

#include "bots.hh"
#include "rules.hh"
#include "Bot.h"


int main(int argc, char **argv) {
    bots::bot *b = new bots::bot(0, "foo");
    bots::sma *r = new bots::sma(WATCH, 0.0);

    r->add_sma(10);
    r->add_sma(21); 
    ta::SMA *ind1 = r->get_indicator(0);
    ta::SMA *ind2 = r->get_indicator(1);
    ind1->update_index(1389067200, 1391993100);
    ind2->update_index(1389067200, 1391993100);

    b->insert_rule(r);
    b->run(false);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    b->stop();
    delete b;

    return 0;
}
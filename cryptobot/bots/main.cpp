#include "bots.hh"

#define NAME "test_bot"

int main() {
    bots::user *u = new bots::user("test");

    u->create_bot(NAME);
    u->run_bot(NAME);
    u->stop_bot(NAME);
    u->delete_bot(NAME);
}
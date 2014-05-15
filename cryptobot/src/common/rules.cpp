#include <chrono>
#include <string>
#include <thread>

#include "reflection.hh"
#include "rules.hh"


namespace bots {

rule::rule() {
    this->indicator = NULL;
}

rule::rule(action_t action, double amount, std::string indicator) {
    this->action = action;
    this->amount = amount;

    this->indicator = reflect(indicator);
}

rule::~rule() {
    delete this->indicator;
}


bool rule::test() {
    // TODO: test can retrieve market data
    // std::cout << "ping" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));

    return false;
}

void rule::trade() {
    // TODO: trade makes a trade
}

}

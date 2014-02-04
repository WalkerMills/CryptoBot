#include <unistd.h>

#include "bots.hh"


rule::rule(action_t action, double amount) {
    this->action = action;
    this->amount = amount;
}

bool rule::test() {
    return true;
}

void rule::trade() {
    if (this->test()) {
        return;
    } else {
        return;
    }
}

bot::bot(std::string name) {
    this->name = name;
    this->rules = new std::vector<rule *>();
}

bot::~bot() {
    delete this->rules;
}

void bot::insert_rule(rule *r) {
    this->rules->push_back(r);
}

void bot::delete_rule(int index) {
    this->rules->erase(this->rules->begin() + index);
}

void bot::run() {
    while ( true ) {
        for (int i = 0; i < this->rules->size(); i++) {
            this->rules->at(i)->trade();
        }

        sleep(2 * 1000);
    }
}

user::user(std::string username) {
    this->username = username;
    this->bots = new std::map<std::string, bot *>();
}

user::~user() {
    delete this->bots;
}

void user::insert_bot(bot *b) {
    std::pair<std::map<std::string, bot *>::iterator, bool> ret; 
    ret = this->bots->emplace(b->name, b);
    
    if ( !ret.second ) {
        ret.first->second = b;
    }
}

void user::delete_bot(std::string name) {
    this->bots->erase(name);
}

void user::run_bot(std::string name) {
    this->bots->at(name)->run();
}

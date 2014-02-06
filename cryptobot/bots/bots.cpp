#include <unistd.h>
#include <signal.h>

#include "bots.hh"
#include "django_db.hh"

#define HOST "107.170.247.187"
#define PID -1

using namespace bots;


db::trade *user::trade_db = new db::trade();
db::bot *user::bot_db = new db::bot();

rule::rule(action_t action, double amount) {
    this->action = action;
    this->amount = amount;

    this->indicators = new std::vector<ta::ta *>();
}

rule::~rule() {
    delete this->indicators;
}

bool rule::test() {
    // TODO: test can retrieve market data
    return true;
}

void rule::trade() {
    // TODO: trade takes action based on test (customize rules by 
    // subclassing rule)
    if (this->test()) {
        return;
    } else {
        return;
    }
}

bot::bot(std::string owner, std::string name) {
    this->owner = owner;
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

        sleep(5 * 1000);
    }
}

user::user(std::string username) {
    this->username = username;
    this->bots = new std::map<std::string, bot *>();
}

user::~user() {
    delete this->bots;
}

std::string user::get_host() {
    return this->bot_db->get_host();
}

void user::insert_bot(bot *b) {
    std::pair<std::map<std::string, bot *>::iterator, bool> ret; 
    ret = this->bots->emplace(b->name, b);

    if ( !ret.second ) {
        ret.first->second = b;
    }

    this->bot_db->insert(this->username, b->name, false, HOST, PID);
}

void user::create_bot(std::string name) {
    bot *b = new bot(this->username, name);
    this->insert_bot(b);
}

void user::delete_bot(std::string name) {
    this->bots->erase(name);
    this->bot_db->erase(this->username, name);
}

void user::run_bot(std::string name) {
    int pid = fork();

    if ( pid == 0 ) {
        this->bots->at(name)->run();
    } else {
        this->bot_db->start(this->username, name, pid);
    }
}

void user::stop_bot(std::string name) {
    mysqlpp::StoreQueryResult res = this->bot_db->get(this->username, name);

    kill(res[0]["pid"], SIGKILL);
    this->bot_db->stop(this->username, name);
}

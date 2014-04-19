#include <unistd.h>
#include <signal.h>
#include <sys/types.h>

#include "bots.hh"
#include "django_db.hh"

#define HOST "107.170.247.187"
#define PID -1

using namespace bots;


rule::rule(action_t action, double amount) {
    this->action = action;
    this->amount = amount;

    this->indicators = new std::vector<ta::ta *>();
}

rule::~rule() {
    delete this->indicators;
}

void rule::add_ind(std::string function) {
    pointer = ta::ta *get(function);
    this->indicators->push_back(pointer);
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
    this->trade_db = new db::trade();
    this->bot_db = new db::bot();

}

user::~user() {
    delete this->bots;
    delete this->trade_db;
    delete this->bot_db;
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
    this->run_bot(b->name);
    this->stop_bot(b->name);
}

void user::create_bot(std::string name) {
    bot *b = new bot(this->username, name);

    this->insert_bot(b);
}

void user::delete_bot(std::string name) {
    this->kill_bot(name);
    this->bots->erase(name);
    this->bot_db->erase(this->username, name);
}

void user::run_bot(std::string name) {
    mysqlpp::StoreQueryResult res = this->bot_db->get(this->username, name);
    mysqlpp::String pid_col = res[0]["pid"];

    if ( this->active(name) ) {
        return;
    }

    std::cerr << "PID is currently " << pid_col << std::endl;
    if ( pid_col == mysqlpp::null ) {
        pid_t forked = fork();

        if ( forked == 0 ) {
            this->bots->at(name)->run();
        } else {
            std::cerr << "Spawned new process " << forked << std::endl;
            this->bot_db->start(this->username, name, forked);
        }
    } else {
        pid_t pid = pid_col;
        std::cerr << "Sending SIGCONT to " << pid << std::endl;
        kill(pid, SIGCONT);

        this->bot_db->start(this->username, name, pid);
    }
}

void user::stop_bot(std::string name) {
    mysqlpp::StoreQueryResult res = this->bot_db->get(this->username, name);
    mysqlpp::String pid_col = res[0]["pid"];

    pid_t pid = pid_col;
    std::cerr << "Sending SIGSTOP to " << pid << std::endl;
    kill(pid, SIGSTOP);

    this->bot_db->stop(this->username, name);
}

void user::kill_bot(std::string name) {
    mysqlpp::StoreQueryResult res = this->bot_db->get(this->username, name);
    mysqlpp::String pid_col = res[0]["pid"];

    pid_t pid = pid_col;
    std::cerr << "Sending SIGKILL to " << pid << std::endl;
    kill(pid, SIGKILL);

    this->bot_db->stop(this->username, name);
}

bool user::active(std::string name) {
    mysqlpp::StoreQueryResult res = this->bot_db->get(this->username, name);

    if ( res ) {
        bool state = res[0]["active"];
        return state;
    }

    return false;
}

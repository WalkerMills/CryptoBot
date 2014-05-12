#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cstring>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <unistd.h>

#include "bots.hh"
#include "control.hh"
#include "reflection.hh"
#include "nuodbi.hh"

using namespace bots;

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
    std::cout << "ping" << std::endl;
    usleep(3000);

    return false;
}

void rule::trade() {
    // TODO: trade makes a trade
}

bot::bot() {

}

// Interface constructor for existing bots
bot::bot(int bid) {
    // Initialize database connections and store id
    this->bot_db = new db::bot();
    this->trade_db = new db::trade();
    this->rule_db = new db::rule();

    this->id = bid;

    // Find this bot's entry
    NuoDB::ResultSet *result = bot_db->get(this->id);

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no bot found with id " << id << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Cache this bot's information
    this->uid = result->getInt(3);
    std::string tmp = result->getString(2);
    this->name = new char[tmp.size() + 1];
    strcpy(this->name, tmp.c_str());

    // Retrieve this bot's rules and update its work 
    this->get_rules();
    this->update_work();

    // Clean up
    result->close();
}

// Interface constructor for new bots
bot::bot(int uid, char *name) {
    // Initialize database connections
    this->bot_db = new db::bot();
    this->trade_db = new db::trade();
    this->rule_db = new db::rule();

    // Initialize bot attributes
    this->uid = uid;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->work = 0;
    this->rules = new std::vector<rule *>();

    // Create a new entry for this bot
    this->id = bot_db->create_or_update(this->uid, this->name, this->work);
}

bot::~bot() {
    delete this->rules;
    delete this->bot_db;
    delete this->trade_db;
    delete this->name;
}

void bot::update_work() {
    // TODO: calculate work based on a bot's rules
}

void bot::store_rules() {
    // Serialize rules vector into a string
    std::ostringstream oss;
    boost::archive::text_oarchive oa(oss);
    oa & BOOST_SERIALIZATION_NVP(*(this->rules));
    const std::string &tmp = oss.str();
    
    // Write archive as binary data to NuoDB
    this->rule_db->create_or_update(this->id, tmp);
}

void bot::get_rules() {
    // Read our archive bytestring into an input stream
    std::string tmp = rule_db->params(this->id);
    std::istringstream iss(tmp);
    boost::archive::text_iarchive ia(iss);

    // Delete any rules, if they exist
    if ( this->rules ) {
        delete this->rules;
    }

    // Read this bot's rules from the archive
    std::vector<bots::rule *> out;
    ia >> BOOST_SERIALIZATION_NVP(out);
    this->rules = new std::vector<bots::rule *>(out);
}

void bot::insert_rule(rule *r) {
    // Update our rules, calculate the new work value
    this->rules->push_back(r);
    this->update_work();

    // Write through to the database
    this->store_rules();
}

void bot::delete_rule(int index) {
    // Update our rules, calculate the new work value
    this->rules->erase(this->rules->begin() + index);
    this->update_work();

    // Write through to the database    
    this->store_rules();
}

void bot::run(bool trade) {
    control::network *cluster = new control::network();
    control::host *node = cluster->route();
    server::BotClient *client = node->client();

    client->run(this->id, trade);

    delete client;
    delete node;
    delete cluster;
}

void bot::stop() {
    control::network *cluster = new control::network();
    control::host *node = cluster->route();
    server::BotClient *client = node->client();

    client->stop(this->id);

    delete client;
    delete node;
    delete cluster;
}

// TODO: implement user class + hook it into Django/NuoDB
user::user(int uid) {
}

user::~user() {
}

void user::create(std::string name) {
}

void user::remove(std::string name) {
}

void user::run(std::string name) {
}

void user::stop(std::string name) {
}

bool user::active(std::string name) {
    return false;
}

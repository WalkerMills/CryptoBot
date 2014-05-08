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
    } else {
        // Cache this bot's information
        this->uid = result->getInt(3);
        std::string tmp = result->getString(2);
        this->name = new char[tmp.size() + 1];
        strcpy(this->name, tmp.c_str());

        // Retrieve this bot's rules and update its work 
        this->get_rules();
        this->update_work();
    }

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
    this->work = -1;
    this->rules = NULL;

    // Create a new entry for this bot
    NuoDB::ResultSet *result = 
        bot_db->create(this->uid, this->name, this->work);

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no bot found with uid " << uid 
                  << " named " << name << std::endl;
        exit(EXIT_FAILURE); 
    } else {
        // Store the auto-generated id
        this->id = result->getInt(1);
    }

    // Clean up
    result->close();
}

bot::~bot() {
    delete this->rules;
    delete this->bot_db;
    delete this->trade_db;
    delete this->name;
    delete this->rules;
}

void bot::update_work() {
    // TODO: calculate work based on a bot's rules
}

void bot::store_rules() {
    // Store the rules vector in the archive
    std::ostringstream oss;
    boost::archive::text_oarchive oa(oss);
    oa & this->rules;
    
    // Read the underlying stream buffer
    std::stringbuf *buf = oss.rdbuf();

    // Read the size of the stream and rewind
    std::streamsize size = buf->pubseekoff(0, oss.end);
    buf->pubseekoff(0, oss.beg);
    
    // Read the contents of the buffer into a string
    char *contents = new char[size];
    buf->sgetn(contents, size);

    // Write archive as binary data to NouDB
    int result = this->rule_db->insert(this->id, contents, size);

    if ( result == 0 ) {
        std::cerr << "Error: no rules found for bot with id " << this->id
                  << std::endl;
        exit(EXIT_FAILURE);
    }
}

void bot::get_rules() {
    // Find this bot's row
    NuoDB::ResultSet *result = rule_db->get(this->id);

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no rules found for bot with id " << this->id
                  << std::endl;
        exit(EXIT_FAILURE);
    } else {
        // Read our archive bytestring into an input stream
        std::string tmp = result->getString(2);
        std::istringstream iss(tmp);
        boost::archive::text_iarchive ia(iss);

        // Delete any rules, if they exist
        if ( this->rules ) {
            delete this->rules;
        }

        // Read this bot's rules from the archive
        ia & this->rules;
    }
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
    server::BotClient *client = cluster->route();

    client->run(this->id, trade);

    delete client;
    delete cluster;
}

void bot::stop() {
    control::network *cluster = new control::network();
    server::BotClient *client = cluster->route();

    client->stop(this->id);

    delete client;
    delete cluster;
}

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

#include <chrono>
#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <cstdlib>
#include <cstring>

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/vector.hpp>

#include "bots.hh"
#include "control.hh"
#include "reflection.hh"
#include "rules.hh"
#include "nuodbi.hh"


namespace bots {

bot::bot() {

}

// Interface constructor for existing bots
bot::bot(int bid) {
    // Initialize database connections and store id
    this->bot_db = new db::bot();
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
    this->rule_db = new db::rule();

    // Initialize bot attributes
    this->uid = uid;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->work = 0;
    this->rules = new std::vector<rule *>();

    // Create a new entry for this bot
    this->id = bot_db->get_or_create(this->uid, this->name, this->work);
}

bot::~bot() {
    delete this->rules;
    delete this->bot_db;
    delete this->rule_db;
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

    // Get the id of our node
    db::host *host_db = new db::host();
    const int hid = host_db->primary(node->domain);
    delete host_db;

    // Run this bot, if it's not already active
    db::runs *runs_db = new db::runs();
    try {
        // Create a new entry in the runs database
        runs_db->insert(hid, this->id, 0);

        // Run this bot
        client->run(this->id, trade);
    } catch ( NuoDB::SQLException &e ) {
        if ( e.getSqlcode() == -27 ) {
            std::cerr << "Warning: bot " << this->id << " is already running" 
                      << std::endl;
        }
    }
    delete runs_db;
    delete client;
    delete node;
    delete cluster;
}

void bot::stop() {
    // Find the id of this bot's (worker's) host
    db::runs *runs_db = new db::runs();
    const int hid = runs_db->hid(this->id);
    delete runs_db;

    // Find the corresponding domain name
    db::host *host_db = new db::host();
    char *domain = host_db->addr(hid);
    delete host_db;

    if ( domain == NULL ) {
        std::cerr << "Warning: no domain found for host " << hid << std::endl;
    }

    // Stop this bot
    control::host *node = new control::host(domain);
    server::BotClient *client = node->client();
    std::cerr << "Sending stop command to " << domain << " for bot " 
              << this->id << std::endl;
    client->stop(this->id);
    delete domain;
    delete client;
    delete node;
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

}

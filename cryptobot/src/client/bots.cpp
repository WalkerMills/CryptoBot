#include <iostream>
#include <cstdlib>
#include <cstring>

#include <jansson.h>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

#include "bots.hh"
#include "control.hh"
#include "nuodbi.hh"
#include "reflection.hh"

using namespace bots;


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


bot::bot(int bid) {
    this->rules = new std::vector<rule *>();
    this->id = bid;
    this->bot_db = new db::bot();
    this->trade_db = new db::trade();

    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = bot_db->connection->prepareStatement("SELECT * FROM ? WHERE id=?");
    stmt->setString(1, bot_db->name);
    stmt->setInt(2, this->id);
    result = bot_db->update(stmt);

    if ( result == 0 ) {
        std::cerr << "Error: no bot found with id " << id << std::endl;
        exit(EXIT_FAILURE); 
    } else {
        // TODO: load rules from serialized storage
    }

    delete bot_db;
}

bot::bot(int uid, char *name) {
    this->rules = new std::vector<rule *>();
    this->bot_db = new db::bot();
    this->trade_db = new db::trade();
    this->rule_db = new db::rule();

    bot_db->insert(uid, name, this->work());

    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = bot_db->connection->prepareStatement(
        "SELECT id FROM ? WHERE uid=? AND name=?");
    stmt->setString(1, BOT);
    stmt->setInt(2, uid);
    stmt->setString(3, name);
    result = bot_db->query(stmt);

    if ( ! result->next() ) {
        std::cerr << "Error: no bot found with uid " << uid 
                  << " named " << name << std::endl;
        exit(EXIT_FAILURE); 
    } else {
        this->id = result->getInt(1);
    }

    result->close();
    delete bot_db;
}

bot::~bot() {
    delete this->rules;
    delete this->bot_db;
    delete this->trade_db;
}

void bot::update_work() {
    // TODO: calculate work based on a bot's rules
}

void bot::get_rule(int bid) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = rule_db->connection->prepareStatement(
        "SELECT id FROM ? WHERE bid=?");
    stmt->setString(1, BOT);
    stmt->setInt(2, bid);
    result = rule_db->query(stmt);
    char rulelist[10] = { 0 };

    if ( result->next() ) {
        strcpy(rulelist, result->getString(1));
    } else {
        std::cerr << "Error: no bot found with bid" << bid; 
        exit(EXIT_FAILURE);
    }

    json_t *rs;
    json_error_t error;

    rs = json_loads(rulelist, 0, &error);
    if (json_array_size(rs) == 1) {
        json_t *data, *function, *params;
        data = json_array_get(rs, 0);
        
        if ( !json_is_object(data)) {
            std::cerr << "Error: data is not an object";
            exit(EXIT_FAILURE);
        }

        function = json_object_get(rs, "function");
        params = json_object_get(rs, "params");

        std::cout << "function name" << json_string_value(function)
                  << "parameters" << json_string_value(params);
    } 

}

void bot::insert_rule(rule *r) {
    this->rules->push_back(r);
}

void bot::delete_rule(int index) {
    this->rules->erase(this->rules->begin() + index);
}

int bot::uid() {
    db::bot *bot_db = new db::bot();
    NuoDB::ResultSet *result = bot_db->get(this->id);
    int user;

    if ( ! result->next() ) {
        user = -1;
    } else {
        user = result->getInt(2);
    }

    result->close();
    delete bot_db;
    return user;
}

char *bot::name() {
    db::bot *bot_db = new db::bot();
    NuoDB::ResultSet *result = bot_db->get(this->id);
    char *bot_name;

    if ( ! result->next() ) {
        bot_name = NULL;
    } else {
        bot_name = new char[strlen(result->getString(3)) + 1];
        strcpy(bot_name, result->getString(3));
    }

    result->close();
    delete bot_db;
    return bot_name;
}

int bot::work() {
    db::bot *bot_db = new db::bot();
    NuoDB::ResultSet *result = bot_db->get(this->id);
    int work;

    if ( ! result->next() ) {
        work = -1;
    } else {
        work = result->getInt(4);
    }

    result->close();
    delete bot_db;
    return work;
}

void bot::run() {
    control::network *cluster = new control::network();
    server::BotClient *client = cluster->route();

    client->run(this->id);
}

void bot::stop() {
    control::network *cluster = new control::network();
    server::BotClient *client = cluster->route();

    client->stop(this->id);
}

char *bot::host() {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    char *hostname;
    db::base *base_db = new db::base();

    stmt = base_db->connection->prepareStatement(
        "SELECT addr FROM ? JOIN ? ON (?.id = hid) WHERE bid=?");
    stmt->setString(1, HOST);
    stmt->setString(2, RUNS);
    stmt->setString(3, HOST);
    stmt->setInt(4, this->id);
    result = base_db->query(stmt);

    if ( ! result->next() ) {
        hostname = NULL;
    } else {
        hostname = new char[strlen(result->getString(1)) + 1];
        strcpy(hostname, result->getString(1));
    }

    result->close();
    delete base_db;
    return hostname;
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

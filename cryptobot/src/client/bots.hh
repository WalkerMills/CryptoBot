#ifndef __BOTS_HH__
#define __BOTS_HH__

#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>

#include <boost/serialization/access.hpp>
#include <boost/serialization/vector.hpp>

#include "nuodbi.hh"
#include "ta.hh"

namespace bots {

enum action_t {buy, sell, watch};

class rule {
private:
    friend class boost::serialization::access;

    template<class archive>
    void serialize(archive &ar, const unsigned version) {
        ar & action & amount & indicator;
    }

public:
    action_t action;
    double amount;
    ta::ta *indicator;

    rule();
    rule(action_t action, double amount, std::string indicator);
    ~rule();

    virtual bool test();
    virtual void trade();
};

class bot {
private:
    db::bot *bot_db;
    db::trade *trade_db;
    db::rule *rule_db;

    void update_work();
    void store_rules();
    void get_rules();

public:
    int id;
    char *name;
    int uid;
    int work;
    std::vector<rule *> *rules;

    bot();
    bot(int bid);
    bot(int uid, char *name);
    ~bot();

    void insert_rule(rule *r);
    void delete_rule(int index);

    void run(bool trade);
    void stop();
};

// TODO: user routes bot control through control::network
class user {
private:
    int id;
    db::bot *bot_db;

    void insert(bot *b);

public:
    std::map<char *, bot *> *bots;

    user(int uid);
    user(std::string username);
    ~user();

    void create(std::string name);
    void remove(std::string name);

    void run(std::string name);
    void stop(std::string name);

    bool active(std::string name);
};

}

#endif

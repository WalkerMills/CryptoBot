#ifndef __BOTS_HH__
#define __BOTS_HH__

#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>

#include <boost/serialization/vector.hpp>

#include "nuodbi.hh"
#include "ta.hh"

namespace bots {

enum action_t {buy, sell, watch};

class rule {
public:
    action_t action;
    double amount;
    ta::ta *indicator;

    rule(action_t action, double amount, std::string indicator);
    ~rule();

    virtual bool test() = 0;
    virtual void trade() = 0;
};

class bot {
private:
    friend class boost::serialization::access;

    db::bot *bot_db;
    db::trade *trade_db;
    db::rule *rule_db;

    template<class archive>
    void serialize(archive &ar, const std::vector<rule *> &rules, 
              const unsigned version) {
        ar & rules;
    }

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

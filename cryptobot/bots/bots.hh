#ifndef __BOTS_HH__
#define __BOTS_HH__

#include <map>
#include <string>
#include <vector>

#include "ta.hh"


enum action_t {buy, sell};


class rule {
public:
    action_t action;
    double amount;

    rule(action_t action, double amount);

    virtual bool test();
    virtual void trade();
};


class bot {
public:
    std::string name;
    std::vector<rule *> *rules;

    bot(std::string name);
    ~bot();

    void insert_rule(rule *r);
    void delete_rule(int index);

    void run();
};


class user {
public:
    std::string username;
    std::map<std::string, bot *> *bots;

    user(std::string username);
    ~user();

    void insert_bot(bot *b);
    void delete_bot(std::string name);

    void run_bot(std::string name);
};

#endif
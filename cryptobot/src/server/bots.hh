#ifndef __BOTS_HH__
#define __BOTS_HH__

#include <map>
#include <string>
#include <vector>

#include "django_db.hh"
#include "ta.hh"

namespace bots {

class rule {
private:
    enum action_t {buy, sell};

public:
    action_t action;
    double amount;
    std::vector<ta::ta *> *indicators;

    rule(action_t action, double amount);
    ~rule();

    virtual bool test() = 0;
    virtual void trade() = 0;
};

class bot {
public:
    std::string owner;
    std::string name;
    std::vector<rule *> *rules;

    bot(std::string owner, std::string name);
    ~bot();

    void insert_rule(rule *r);
    void delete_rule(int index);

    void run();
};

// TODO: user routes bot control through control::network
class user {
private:
    // TODO: control::network will use db::bot interface
    db::bot *bot_db;

    std::string get_host();

public:
    std::string username;
    std::map<std::string, bot *> *bots;

    user(std::string username);
    ~user();

    void insert_bot(bot *b);
    void create_bot(std::string name);
    void delete_bot(std::string name);

    void run_bot(std::string name);
    void stop_bot(std::string name);

    void kill_bot(std::string name);

    bool active(std::string name);
};

}

#endif

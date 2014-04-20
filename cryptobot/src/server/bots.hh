#ifndef __BOTS_HH__
#define __BOTS_HH__

#include <map>
#include <string>
#include <vector>

#include "nuodbi.hh"
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

    void add_ind(std::string function);

    virtual bool test() = 0;
    virtual void trade() = 0;
};

class bot {
private:
    db::bot *bot_db;
    db::trade *trade_db;

    void update_work();

public:
    std::vector<rule *> *rules;
    int id;

    bot();
    bot(int bid);
    bot(int uid, char *name);
    ~bot();

    void insert_rule(rule *r);
    void delete_rule(int index);

    int uid();
    char *name();
    int work();
    
    void run();
    void stop();
    char *host();
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

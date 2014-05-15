#ifndef __BOTS_HH__
#define __BOTS_HH__

#include <map>
#include <string>
#include <vector>

#include "nuodbi.hh"
#include "rules.hh"

namespace bots {

class bot {
private:
    db::bot *bot_db;
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

#endif // __BOTS_HH__

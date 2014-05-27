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

    bool active();
    void run(bool trade);
    void stop();
};

}

#endif // __BOTS_HH__

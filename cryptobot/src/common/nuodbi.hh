/*
 * NuoDB interface for the CryptoBot project
 */

#ifndef __NUODBI_HH__
#define __NUODBI_HH__

#include <string>

#include <nuodb/NuoDB.h>

#define TRADE "cryptobot_trade"
#define BOT "cryptobot_bot"
#define OWNS "cryptobot_owns"
#define HOST "cryptobot_host"
#define RUNS "cryptobot_runs"
#define RULE "cryptobot_rule"

namespace db {


class base {
private:
    static constexpr char *name = "djangoDB";
    static constexpr char *addr = "www.cryptobot.me";
    static constexpr char *username = "admin";
    static constexpr char *password = "NoFags";
    static constexpr int properties = 0;

public:
    NuoDB::Connection *connection;

    base();
    ~base();

    int update(NuoDB::PreparedStatement *stmt);
    NuoDB::ResultSet *query(NuoDB::PreparedStatement *stmt);

    NuoDB::ResultSet *get(char *table, int id);
    int erase(char *table, int id);
    char *host();
};

class table : public base {
public:
    char *name;

    table(char *name) : base() {
        this->name = name;
    }

    NuoDB::ResultSet *get(int id);
    int erase(int id);

};

class trade : public table {
public:
    trade() : table(TRADE) { }

    int insert(int tid, double price, double amount);
};


class bot : public table {
public:
    bot() : table(BOT) { }

    int insert(int uid, char *name, int work);
};

class rule : public table {
public:
    rule() : table(RULE) {}

    int insert(int bid, const char *rule);
};

class host : public table {
public:
    host() : table(HOST) { }

    int insert(char *addr, int load);
    char *next();
};

class runs : public table {
public:
    runs() : table(RUNS) { }

    int insert(int hid, int bid, int pid);
};

}

#endif // __NUODBI_HH__
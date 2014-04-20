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

namespace db {


class base {
private:
    static constexpr char *name = "djangoDB";
    static constexpr char *addr = "107.170.247.187";
    static constexpr char *username = "dba";
    static constexpr char *password = "dba";
    static constexpr int properties = 1;
    static constexpr char *opt = "schema";
    static constexpr char *arg = "user";

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
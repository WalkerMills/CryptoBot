/*
 * NuoDB interface for the CryptoBot project
 */

#ifndef __NUODBI_HH__
#define __NUODBI_HH__

#include <string>

#include <nuodb/NuoDB.h>

#define USER "auth_user"

#define TRADE "cryptobot_trade"
#define PRICE "cryptobot_price"
#define PRICE_15 "cryptobot_price_15"
#define PRICE_30 "cryptobot_price_30"
#define PRICE_60 "cryptobot_price_60"
#define RULE "cryptobot_rule"
#define HOST "cryptobot_host"
#define RUNS "cryptobot_runs"
#define BOT "cryptobot_bot"

namespace db {


// Database class; contains NuoDB connection
class base {
private:
    static constexpr char *name = "djangodb";
    static constexpr char *hostname = "www.cryptobot.me";
    static constexpr char *username = "admin";
    static constexpr char *password = "NoFags";
    static constexpr int properties = 1;
    static constexpr char *opt = "schema";
    static constexpr char *arg = "django";

public:
    NuoDB::Connection *connection;

    base();
    ~base();

    // Helper functions for safe execution of statements over the connection
    NuoDB::PreparedStatement *prepare(const char *sql, int keys = 0);
    // NuoDB::PreparedStatement *prepare(const char *sql);
    int update(NuoDB::PreparedStatement *stmt);
    NuoDB::ResultSet *query(NuoDB::PreparedStatement *stmt);

    // SELECT from a table by id
    NuoDB::ResultSet *get(char *table, int id);

    // DELETE from a table by id
    int erase(char *table, int id);

    // Return the database hostname
    char *host();
};

// Table class; specializes database connection with a fixed table name
class table : public base {
public:
    char *model;

    table(char *model);
    ~table();

    NuoDB::ResultSet *get(int id);
    int erase(int id);

};

class user : public table {
public:
    user() : table(USER) { }

    int primary(const char *username);

    char *username(const int uid);
};

class trade : public table {
public:
    trade() : table(TRADE) { }
    trade(char *model) : table(model) { }

    int primary(const int tid, const double price, const double amount);
    int insert(const int tid, const double price, const double amount);
    int get_or_create(const int tid, const double price, const double amount);
    int create_or_update(const int tid, const double price, 
                         const double amount);
};

class price : public trade {
public:
    price() : trade(PRICE) { }
    price(char *model) : trade(model) { }

    int primary(const int tid);
    NuoDB::ResultSet *get_range(const int begID, const int endID);
    double get_amount(const int tid); 
    double get_stddev(const int unix_tid); 
    NuoDB::ResultSet *get_similar(const double var);
};

class price_15 : public price {
public:
    price_15() : price(PRICE_15) { }
};

class price_30 : public price {
public:
    price_30() : price(PRICE_30) { }
};

class price_60 : public price {
public:
    price_60() : price(PRICE_60) { }
};


class bot : public table {
public:
    bot() : table(BOT) { }

    int primary(const int uid, const char *name);
    int insert(const int uid, const char *name, const int work);
    int get_or_create(const int uid, const char *name, const int work);
    int create_or_update(const int uid, const char *name, const int work);
};

class rule : public table {
public:
    rule() : table(RULE) {}

    int primary(const int bid);
    int insert(const int bid, const std::string rules);
    int get_or_create(const int bid, const std::string rules);
    int create_or_update(const int bid, const std::string rules);

    std::string params(const int bid);
};

class host : public table {
public:
    host() : table(HOST) { }

    int primary(const char *addr);
    int insert(const char *addr, const int load);
    int get_or_create(const char *addr, const int load);
    int create_or_update(const char *addr, const int load);

    char *next();
    char *addr(const int hid);
};

class runs : public table {
public:
    runs() : table(RUNS) { }

    int primary(const int bid);
    int insert(const int hid, const int bid, const int pid);
    int get_or_create(const int hid, const int bid, const int pid);
    int create_or_update(const int hid, const int bid, const int pid);

    int hid(const int bid);
    int pid(const int bid);
};

}

#endif // __NUODBI_HH__
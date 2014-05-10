/*
 * NuoDB interface for the CryptoBot project
 */

#ifndef __NUODBI_HH__
#define __NUODBI_HH__

#include <string>

#include <nuodb/NuoDB.h>

#define TRADE "cryptobot_trade"
#define BOT "cryptobot_bot"
#define RULE "cryptobot_rule"
#define HOST "cryptobot_host"
#define RUNS "cryptobot_runs"

namespace db {


// Database class; contains NuoDB connection
class base {
private:
    static constexpr char *name = "djangodb";
    static constexpr char *addr = "www.cryptobot.me";
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
    static int update(NuoDB::Connection *conn, NuoDB::PreparedStatement *stmt);
    static NuoDB::ResultSet *query(NuoDB::Connection *conn, 
                                   NuoDB::PreparedStatement *stmt);

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

class trade : public table {
public:
    trade() : table(TRADE) { }

    int insert(int tid, double price, double amount);
    int create(int tid, double price, double amount);
};


class bot : public table {
public:
    bot() : table(BOT) { }

    int insert(int uid, char *name, int work);
    int create(int uid, char *name, int work);
};

class rule : public table {
public:
    rule() : table(RULE) {}

    int insert(int bid, std::string);
    int create(int bid, std::string);
};

class host : public table {
public:
    host() : table(HOST) { }

    int insert(char *addr, int load);
    int create(char *addr, int load);
    char *next();
};

class runs : public table {
public:
    runs() : table(RUNS) { }

    int insert(int hid, int bid, int pid);
    int create(int hid, int bid, int pid);
};

}

#endif // __NUODBI_HH__
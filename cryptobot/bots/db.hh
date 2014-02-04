#ifndef __DB_HH__
#define __DB_HH__

#include <string>

#include <mysql++.h>


class db {
private:
    static std::string db_name;
    static std::string server;
    static std::string username;
    static std::string password;

public:
    mysqlpp::Connection *conn;

    db();
    ~db();

    mysqlpp::StoreQueryResult store(std::string command);
    mysqlpp::SimpleResult execute(std::string command);
};

class user_db : public db {

};

class trade_db : public db {

};

class bot_db : public db {

};

#endif

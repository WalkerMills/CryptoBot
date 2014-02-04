#ifndef __DB_HH__
#define __DB_HH__

#include <mysql++.h>


class db {
private:
    static char *db_name;
    static char *server;
    static char *username;
    static char *password;
    static unsigned int port;

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

#endif // __DB_HH__

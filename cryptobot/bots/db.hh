#ifndef __DB_HH__
#define __DB_HH__

#include <string>
#include <ctime>

#include <mysql++.h>

namespace db {

class base_db {
private:
    static constexpr char *db_name = "django_db";
    static constexpr char *server = "107.170.247.187";
    static constexpr char *username = "django";
    static constexpr char *password = "testpass";
    static constexpr unsigned int port = 3306;

public:
    mysqlpp::Connection *conn;

    base_db();
    ~base_db();

    mysqlpp::StoreQueryResult store(std::string command);
    mysqlpp::SimpleResult execute(std::string command);
};

class trade : private base_db {
private:
    static constexpr char *model = "cryptobot_trade";

public:
    mysqlpp::SimpleResult insert(time_t time, double price, double amount);

    mysqlpp::StoreQueryResult get(int id);
    mysqlpp::StoreQueryResult get(time_t time, double price, double amount);
    mysqlpp::SimpleResult erase(int id);
    mysqlpp::SimpleResult erase(time_t time, double price, double amount);

    mysqlpp::SimpleResult csv_update(std::string file);
};

class bot : private base_db {
private:
    static constexpr char *model = "cryptobot_bot";

public:
    mysqlpp::SimpleResult insert(std::string username, std::string name,
                                 bool active, std::string host, 
                                 int pid);
    mysqlpp::StoreQueryResult get(std::string username, std::string name);
    mysqlpp::SimpleResult erase(std::string username, std::string name);

    mysqlpp::SimpleResult start(std::string username, std::string name, 
                                int pid);
    mysqlpp::SimpleResult stop(std::string username, std::string name);
};

}

#endif // __DB_HH__

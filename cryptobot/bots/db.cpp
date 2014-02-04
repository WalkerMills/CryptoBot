#include <iostream>
#include <sstream>
#include <cstdlib>

#include "db.hh"

using namespace db;


// constexpr char *base_db::db_name = "django_db";
// constexpr char *base_db::server = "107.170.247.187";
// constexpr char *base_db::username = "django";
// constexpr char *base_db::password = "testpass";
// constexpr unsigned int base_db::port = 3306;

// constexpr std::string trade::model = "cryptobot_trade";
// constexpr std::string bot::model = "cryptobot_bot";

base_db::base_db() {
    this->conn = new mysqlpp::Connection(false);

    bool status = this->conn->connect(this->db_name, this->server, 
                                      this->username, this->password,
                                      this->port);
    if ( !status ) {
        std::cerr << "Error: DB connection failed: " << this->conn->error() 
                  << std::endl;
        exit(EXIT_FAILURE);
    }
}

base_db::~base_db() {
    this->conn->disconnect();
}

mysqlpp::StoreQueryResult base_db::store(std::string command) {
    mysqlpp::Query query = this->conn->query(command);
    mysqlpp::StoreQueryResult res = query.store();

    if ( !res ) {
        std::cerr << "Command \'" << query.str() << "\' failed: " 
                 << query.error() << std::endl;
        exit(EXIT_FAILURE);
    }

    return res;
}

mysqlpp::SimpleResult base_db::execute(std::string command) {
    mysqlpp::Query query = this->conn->query(command);
    mysqlpp::SimpleResult res = query.execute();

    if ( !res ) {
        std::cerr << "Command \'" << query.str() << "\' failed: " 
                  << query.error() << std::endl;
        exit(EXIT_FAILURE);
    }

    return res;
}

mysqlpp::SimpleResult bot::insert(std::string username, std::string name, 
                                  bool active, std::string host, 
                                  unsigned int pid) {
    std::stringstream query;
    std::string boolean = active ? "TRUE" : "FALSE";

    query << "INSERT INTO " << this->model << "VALUES (\'" << username 
          << "\', \'" << name << "\', \'" << boolean << "\', \'" << host 
          << "\', \'" << pid << "\');";
    return this->execute(query.str());
}

mysqlpp::StoreQueryResult bot::get(std::string username, std::string name) {
    std::stringstream query;

    query << "SELECT * FROM " <<  this->model << "WHERE username=" << username 
          << ", name=" << name << ";";
    return this->store(query.str());
}

mysqlpp::SimpleResult bot::remove(std::string username, std::string name) {
    std::stringstream query;

    query << "DELETE FROM " <<  this->model << "WHERE username=" << username 
          << ", name=" << name << ";";
    return this->execute(query.str());
}

mysqlpp::SimpleResult bot::start(std::string username, std::string name) {
    std::stringstream query;

    query << "UPDATE " << this->model << " SET active=TRUE WHERE username=" 
          << username << ", name=" << name << ";";
    return this->execute(query.str());
}

mysqlpp::SimpleResult bot::stop(std::string username, std::string name) {
    std::stringstream query;

    query << "UPDATE " << this->model << " SET active=FALSE WHERE username=" 
          << username << ", name=" << name << ";";
    return this->execute(query.str());
}



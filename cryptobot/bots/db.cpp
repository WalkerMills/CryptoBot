#include <iostream>
#include <sstream>
#include <cstdlib>

#include "db.hh"

using namespace db;


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
                                  int pid) {
    std::stringstream query;
    std::string boolean = active ? "TRUE" : "FALSE";


    query << "INSERT INTO " << this->model << "VALUES (\'" << username 
          << "\', \'" << name << "\', \'" << boolean << "\', \'" << host 
          << "\', ";

    if ( pid != -1 ) { 
        query << "\'" << pid << "\'";
    } else {
        query << "NULL";
    }
    query << ");";
    return this->execute(query.str());
}

mysqlpp::StoreQueryResult bot::get(std::string username, std::string name) {
    std::stringstream query;

    query << "SELECT * FROM " <<  this->model << "WHERE username=" << username 
          << ", name=" << name << ";";
    return this->store(query.str());
}

mysqlpp::SimpleResult bot::erase(std::string username, std::string name) {
    std::stringstream query;

    query << "DELETE FROM " <<  this->model << "WHERE username=" << username 
          << ", name=" << name << ";";
    return this->execute(query.str());
}

mysqlpp::SimpleResult bot::start(std::string username, std::string name,
                                 int pid) {
    std::stringstream query;

    query << "UPDATE " << this->model << " SET active=TRUE, pid=" << pid 
          << " WHERE username=" << username << ", name=" << name << ";";
    return this->execute(query.str());
}

mysqlpp::SimpleResult bot::stop(std::string username, std::string name) {
    std::stringstream query;

    query << "UPDATE " << this->model << " SET active=FALSE, pid=NULL "
             "WHERE username=" << username << ", name=" << name << ";";
    return this->execute(query.str());
}



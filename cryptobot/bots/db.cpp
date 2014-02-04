#include <iostream>
#include <cstdlib>

#include "db.hh"

char *db::db_name = "django_db";
char *db::server = "107.170.247.187";
char *db::username = "django";
char *db::password = "testpass";
unsigned int db::port = 3306;

db::db() {
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

db::~db() {
    this->conn->disconnect();
}

mysqlpp::StoreQueryResult db::store(std::string command) {
    mysqlpp::Query query = this->conn->query(command);
    mysqlpp::StoreQueryResult res = query.store();

    if ( !res ) {
        std::cerr << "Command \'" << query.str() << "\' failed: " 
                 << query.error() << std::endl;
        exit(EXIT_FAILURE);
    }

    return res;
}

mysqlpp::SimpleResult db::execute(std::string command) {
    mysqlpp::Query query = this->conn->query(command);
    mysqlpp::SimpleResult res = query.execute();

    if ( !res ) {
        std::cerr << "Command \'" << query.str() << "\' failed: " 
                  << query.error() << std::endl;
        exit(EXIT_FAILURE);
    }

    return res;
}


#include <iostream>
#include <cstdlib>

#include "db.hh"

std::string db::db_name = "django_db";
std::string db::server = "107.170.247.187";
std::string db::username = "django";
std::string db::password = 'testpass';

db::db() {
    this->conn = new mysqlpp:Connection(false);

    status = this->conn->connect(this->db_name, this->server, this->username,
                                 this->password);
    if ( !status ) {
        cerr << "Error: DB connection failed: " << this->conn->error() << endl;
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
        cerr << "Command \'" << query.str() << "\' failed: " << query.error()
             << endl;
        exit(EXIT_FAILURE);
    }

    return res;
}

mysqlpp::SimpleResult db::execute(std::string command) {
    mysqlpp::Query query = this->conn->query(command);
    mysqlpp::SimpleResult res = query.execute();

    if ( !res ) {
        cerr << "Command \'" << query.str() << "\' failed: " << query.error()
             << endl;
        exit(EXIT_FAILURE);
    }

    return res;
}


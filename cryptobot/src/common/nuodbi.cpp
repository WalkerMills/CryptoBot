#include <iostream>
#include <cstdlib>
#include <cstring>

#include "nuodbi.hh"

using namespace db;

base::base() {
    std::string db_name = this->name;
    db_name.append("@");
    db_name.append(this->addr);

    this->connection = NuoDB::Connection::create(
        db_name.c_str(), this->username, this->password, this->properties);
}

base::~base() {
    this->connection->close();
}

inline int base::update(NuoDB::PreparedStatement *stmt) {
    int result;

    try {
        result = stmt->executeUpdate();

        this->connection->commit();
        stmt->close();
    } catch (NuoDB::SQLException &e) {
        this->connection->rollback();
        throw;
    }

    return result;
}

inline NuoDB::ResultSet *base::query(NuoDB::PreparedStatement *stmt) {
    NuoDB::ResultSet *result;

    try {
        result = stmt->executeQuery();

        this->connection->commit();
        stmt->close();
    } catch (NuoDB::SQLException &e) {
        this->connection->rollback();
        throw;
    }

    return result;
}

NuoDB::ResultSet *base::get(char *table, int id) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = this->connection->prepareStatement("SELECT * FROM ? WHERE id=?");
    stmt->setString(1, table);
    stmt->setInt(2, id);

    result = this->query(stmt);
    return result;
}

int base::erase(char *table, int id) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement("DELETE FROM ? WHERE id=?");
    stmt->setString(1, table);
    stmt->setInt(2, id);

    result = this->update(stmt);
    return result;
}

char *base::host() {
    return this->addr;
}


NuoDB::ResultSet *table::get(int id) {
    return base::get(this->name, id);
}

int table::erase(int id) {
    return base::erase(this->name, id);
}


int trade::insert(int tid, double price, double amount) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->name);
    stmt->setInt(2, tid);
    stmt->setDouble(3, price);
    stmt->setDouble(4, amount);

    result = this->update(stmt);
    return result;
}


int bot::insert(int uid, char *name, int work) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->name);
    stmt->setInt(2, uid);
    stmt->setString(3, name);
    stmt->setInt(4, work);

    result = this->update(stmt);
    return result;
}


int host::insert(char *addr, int load) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?)");
    stmt->setString(1, this->name);
    stmt->setString(2, addr);
    stmt->setInt(3, load);

    result = this->update(stmt);
    return result;
}

char *host::next() {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    char *hostname;

    stmt = this->connection->prepareStatement(
        "SELECT addr FROM ? GROUP BY addr HAVING workload=MIN(workload)");
    stmt->setString(1, this->name);
    result = this->query(stmt);

    if ( ! result->next() ) {
        std::cerr << "Error: no hosts found" << std::endl;
        exit(EXIT_FAILURE);
    } else {
        hostname = new char[strlen(result->getString(1)) + 1];
        strcpy(hostname, result->getString(1));
    }

    result->close();
    return hostname;
}


int runs::insert(int hid, int bid, int pid) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->name);
    stmt->setInt(2, hid);
    stmt->setInt(3, bid);
    stmt->setInt(4, pid);

    result = this->update(stmt);
    return result;
}


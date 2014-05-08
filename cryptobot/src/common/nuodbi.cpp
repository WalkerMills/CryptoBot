#include <iostream>
#include <cstdlib>
#include <cstring>

#include "nuodbi.hh"

using namespace db;

base::base() {
    // Concatenate name@addr for the NuoDB connection
    std::string db_name = this->name;
    db_name.append("@");
    db_name.append(this->addr);

    // Open the NuoDB connection
    this->connection = NuoDB::Connection::create(
        db_name.c_str(), this->username, this->password, this->properties);
}

base::~base() {
    // Close the NuoDB connection
    this->connection->close();
}

// Safe NuoDB update execution helper; returns number of rows
int base::update(NuoDB::Connection *conn, NuoDB::PreparedStatement *stmt) {
    int result;

    // Safely execute our update
    try {
        // Execute
        result = stmt->executeUpdate();

        // Commit changes and clean up the statement
        conn->commit();
        stmt->close();

    // If it fails, roll back the changes, and throw the error
    } catch (NuoDB::SQLException &e) {
        conn->rollback();
        throw;
    }

    return result;
}

// Safe NuoDB query execution helper; returns resulting rows
NuoDB::ResultSet *base::query(NuoDB::Connection *conn, 
                              NuoDB::PreparedStatement *stmt) {
    NuoDB::ResultSet *result;

    // Safely execute our query
    try {
        // Query
        result = stmt->executeQuery();

        // Commit changes and clean up the statement
        conn->commit();
        stmt->close();

    // If it fails, roll back the changes, and throw the error
    } catch (NuoDB::SQLException &e) {
        conn->rollback();
        throw;
    }

    return result;
}

// Select a row from a table by id; returns row
NuoDB::ResultSet *base::get(char *table, int id) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Select row from <table> with an id of <id>
    stmt = this->connection->prepareStatement("SELECT * FROM ? WHERE id=?");
    stmt->setString(1, table);
    stmt->setInt(2, id);

    // Safely execute query and return the result
    result = this->query(this->connection, stmt);
    return result;
}

// Delete a row from a table by id; returns number of rows
int base::erase(char *table, int id) {
    NuoDB::PreparedStatement *stmt;
    int result;

    // Delete row from <table> with an id of <id>
    stmt = this->connection->prepareStatement("DELETE FROM ? WHERE id=?");
    stmt->setString(1, table);
    stmt->setInt(2, id);

    // Safely execute update and return the result
    result = this->update(this->connection, stmt);
    return result;
}

// Return the host of this database
char *base::host() {
    return this->addr;
}

table::table(char *model) : base() {
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

table::~table() {
    delete this->model;
}

// Get a row from this table 
NuoDB::ResultSet *table::get(int id) {
    return base::get(this->model, id);
}

int table::erase(int id) {
    return base::erase(this->model, id);
}


int trade::insert(int tid, double price, double amount) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->model);
    stmt->setInt(2, tid);
    stmt->setDouble(3, price);
    stmt->setDouble(4, amount);

    result = this->update(this->connection, stmt);
    return result;
}

NuoDB::ResultSet *trade::create(int tid, double price, double amount) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->model);
    stmt->setInt(2, tid);
    stmt->setDouble(3, price);
    stmt->setDouble(4, amount);

    result = this->query(this->connection, stmt);
    return result;
}


int bot::insert(int uid, char *name, int work) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->model);
    stmt->setInt(2, uid);
    stmt->setString(3, name);
    stmt->setInt(4, work);

    result = this->update(this->connection, stmt);
    return result;
}

NuoDB::ResultSet *bot::create(int uid, char *name, int work) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->model);
    stmt->setInt(2, uid);
    stmt->setString(3, name);
    stmt->setInt(4, work);

    result = this->query(this->connection, stmt);
    return result;
}


int rule::insert(int bid, char *params, size_t size) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?)");
    stmt->setString(1, this->model);
    stmt->setInt(2, bid);
    stmt->setBytes(3, size, params);

    result = this->update(this->connection, stmt);
    return result;
}

NuoDB::ResultSet *rule::create(int bid, char *params, size_t size) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?)");
    stmt->setString(1, this->model);
    stmt->setInt(2, bid);
    stmt->setBytes(3, size, params);

    result = this->query(this->connection, stmt);
    return result;
}


int host::insert(char *addr, int load) {
    NuoDB::PreparedStatement *stmt;
    int result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?)");
    stmt->setString(1, this->model);
    stmt->setString(2, addr);
    stmt->setInt(3, load);

    result = this->update(this->connection, stmt);
    return result;
}

NuoDB::ResultSet *host::create(char *addr, int load) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?)");
    stmt->setString(1, this->model);
    stmt->setString(2, addr);
    stmt->setInt(3, load);

    result = this->query(this->connection, stmt);
    return result;
}

char *host::next() {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    char *hostname;

    stmt = this->connection->prepareStatement(
        "SELECT addr FROM ? GROUP BY addr HAVING workload=MIN(workload)");
    stmt->setString(1, this->model);
    result = this->query(this->connection, stmt);

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
    stmt->setString(1, this->model);
    stmt->setInt(2, hid);
    stmt->setInt(3, bid);
    stmt->setInt(4, pid);

    result = this->update(this->connection, stmt);
    return result;
}

NuoDB::ResultSet *runs::create(int hid, int bid, int pid) {
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    stmt = this->connection->prepareStatement(
        "INSERT INTO ? VALUES (?, ?, ?)");
    stmt->setString(1, this->model);
    stmt->setInt(2, hid);
    stmt->setInt(3, bid);
    stmt->setInt(4, pid);

    result = this->query(this->connection, stmt);
    return result;
}


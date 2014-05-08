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
        db_name.c_str(), this->username, this->password, this->properties,
        this->opt, this->arg);
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

    // If it fails, roll back the changes, and throw the error
    } catch (NuoDB::SQLException &e) {
        std::cerr << "Error: SQL error " << e.getSqlcode() << " "
                  << e.getText() << std::endl;
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

    // If it fails, roll back the changes, and throw the error
    } catch (NuoDB::SQLException &e) {
        std::cerr << "Error: SQL error " << e.getSqlcode() << " "
                  << e.getText() << std::endl;
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
    stmt->close();
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
    stmt->close();
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
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " TRADE " (tid, price, amount) VALUES (?, ?, ?)");
    stmt->setInt(1, tid);
    stmt->setDouble(2, price);
    stmt->setDouble(3, amount);

    int result = this->update(this->connection, stmt);
    stmt->close();

    return result;
}

int trade::create(int tid, double price, double amount) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " TRADE " (tid, price, amount) VALUES (?, ?, ?)",
        NuoDB::RETURN_GENERATED_KEYS);
    stmt->setInt(1, tid);
    stmt->setDouble(2, price);
    stmt->setDouble(3, amount);


    this->update(this->connection, stmt);
    NuoDB::ResultSet *result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no trade found with at time " << tid 
                  << " for " << amount << " BTC" << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    int bid = result->getInt(1);
    result->close();

    return bid;
}


int bot::insert(int uid, char *name, int work) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " BOT " (uid_id, name, work) VALUES (?, ?, ?)");
    stmt->setInt(1, uid);
    stmt->setString(2, name);
    stmt->setInt(3, work);

    int result = this->update(this->connection, stmt);
    stmt->close();

    return result;
}

int bot::create(int uid, char *name, int work) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " BOT " (uid_id, name, work) VALUES (?, ?, ?)",
        NuoDB::RETURN_GENERATED_KEYS);
    stmt->setInt(1, uid);
    stmt->setString(2, name);
    stmt->setInt(3, work);

    this->update(this->connection, stmt);
    NuoDB::ResultSet *result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no bot found with uid " << uid 
                  << " named " << name << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    int bid = result->getInt(1);
    result->close();

    return bid;
}


int rule::insert(int bid, char *params, unsigned size) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " RULE " (bid_id, params) VALUES (?, ?)");
    stmt->setInt(1, bid);
    stmt->setBytes(2, size, params);

    int result = this->update(this->connection, stmt);
    stmt->close();

    return result;
}

int rule::create(int bid, char *params, unsigned size) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " RULE " (bid_id, params) VALUES (?, ?)",
        NuoDB::RETURN_GENERATED_KEYS);
    stmt->setInt(1, bid);
    stmt->setBytes(2, size, params);

    this->update(this->connection, stmt);
    NuoDB::ResultSet *result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no rules found for bot with id " << bid 
                  << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    int rid = result->getInt(1);
    result->close();

    return rid;
}


int host::insert(char *addr, int load) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " HOST " (addr, workload) VALUES (?, ?)",
        NuoDB::RETURN_GENERATED_KEYS);
    stmt->setString(1, addr);
    stmt->setInt(2, load);

    int result = this->update(this->connection, stmt);
    stmt->close();

    return result;
}

int host::create(char *addr, int load) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " HOST " (addr, workload) VALUES (?, ?)",
        NuoDB::RETURN_GENERATED_KEYS);
    stmt->setString(1, addr);
    stmt->setInt(2, load);

    this->update(this->connection, stmt);
    NuoDB::ResultSet *result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no host named " << addr << " found with workload "
                  << load << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    int hid = result->getInt(1);
    result->close();

    return hid;
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
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " RUNS " (hid_id, bid_id, pid) VALUES (?, ?, ?)");
    stmt->setInt(1, hid);
    stmt->setInt(2, bid);
    stmt->setInt(3, pid);

    int result = this->update(this->connection, stmt);
    stmt->close();

    return result;
}

int runs::create(int hid, int bid, int pid) {
    NuoDB::PreparedStatement *stmt = this->connection->prepareStatement(
        "INSERT INTO " RUNS " (hid_id, bid_id, pid) VALUES (?, ?, ?)",
        NuoDB::RETURN_GENERATED_KEYS);
    stmt->setInt(1, hid);
    stmt->setInt(2, bid);
    stmt->setInt(3, pid);

    this->update(this->connection, stmt);
    NuoDB::ResultSet *result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no bot found with hid " << hid << ", bid "
                  << bid << ", " << pid << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    int rid = result->getInt(1);
    result->close();

    return rid;
}


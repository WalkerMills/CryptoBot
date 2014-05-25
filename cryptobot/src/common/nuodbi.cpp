#include <iostream>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include <cstring>

#include "nuodbi.hh"

using namespace db;


// Database interface base class methods
base::base() {
    // Concatenate name@addr for the NuoDB connection
    std::string db_name = this->name;
    db_name.append("@");
    db_name.append(this->hostname);

    // Open the NuoDB connection
    this->connection = NuoDB::Connection::create(
        db_name.c_str(), this->username, this->password, this->properties,
        this->opt, this->arg);
}

base::~base() {
    // Close the NuoDB connection
    this->connection->close();
}

// Safe NuoDB statement preparation; returns prepared statement
NuoDB::PreparedStatement *base::prepare(const char *sql, int keys) {
    NuoDB::PreparedStatement *stmt;

    // Safely prepare our SQL command
    try {
        // Prepare SQL command
        if ( ! keys ) {
            stmt = this->connection->prepareStatement(sql);
        } else {
            // Pass auto-generated keys flag if given
            stmt = this->connection->prepareStatement(sql, keys);
        }

    // If it fails, print some information and throw the error
    } catch ( NuoDB::SQLException &e ) {
        std::cerr << "Error: SQL error " << e.getSqlcode() << " "
                  << e.getText() << std::endl;
        throw;
    }

    return stmt;
}

// Safe NuoDB update execution helper; returns number of rows
int base::update(NuoDB::PreparedStatement *stmt) {
    int result;

    // Safely execute our update
    try {
        // Update
        result = stmt->executeUpdate();

        // Commit changes and clean up the statement
        this->connection->commit();

    // If it fails, roll back the changes, and throw the error
    } catch ( NuoDB::SQLException &e ) {
        std::cerr << "Error: SQL error " << e.getSqlcode() << " "
                  << e.getText() << std::endl;
        this->connection->rollback();
        throw;
    }

    return result;
}

// Safe NuoDB query execution helper; returns resulting rows
NuoDB::ResultSet *base::query(NuoDB::PreparedStatement *stmt) {
    NuoDB::ResultSet *result;

    // Safely execute our query
    try {
        // Query
        result = stmt->executeQuery();

        // Commit changes and clean up the statement
        this->connection->commit();

    // If it fails, roll back the changes, and throw the error
    } catch ( NuoDB::SQLException &e ) {
        std::cerr << "Error: SQL error " << e.getSqlcode() << " "
                  << e.getText() << std::endl;
        this->connection->rollback();
        throw;
    }

    return result;
}

// Select a row from a table by id; returns row
NuoDB::ResultSet *base::get(char *table, int id) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Prepare our query
    ss << "SELECT * FROM " << table << " WHERE id=" << id;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query and return the result
    result = this->query(stmt);
    stmt->close();

    return result;
}

// Delete a row from a table by id; returns number of rows
int base::erase(char *table, int id) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    int result;

    // Prepare our query
    ss << "DELETE FROM " << table << " WHERE id=" << id;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute update and return the result
    result = this->update(stmt);
    stmt->close();

    return result;
}

// Return the host of this database
char *base::host() {
    return this->hostname;
}


// Relation interface base class methods
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


// Trade relation interface methods
int trade::primary(const int tid, const double price, const double amount) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Prepare our query
    ss << "SELECT id FROM " << this->model << " WHERE tid=" << tid 
       << " AND price=" << price << " AND amount=" << amount;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    id = result->getInt(1);
    result->close();

    return id;
}

int trade::insert(const int tid, const double price, const double amount) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    int result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (tid, price, amount) VALUES ("
       << tid << ", " << price << ", " << amount << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute update and return the result
    result = this->update(stmt);
    stmt->close();

    return result;
}

int trade::get_or_create(const int tid, const double price, 
                         const double amount) {
    // Check if this entry already exists
    int id = this->primary(tid, price, amount);
    if ( id ) return id;

    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (tid, price, amount) VALUES ("
       << tid << ", " << price << ", " << amount << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute our update and return the id of the result
    this->update(stmt);
    result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no trade found with at time " << tid 
                  << " for " << amount << " BTC" << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    id = result->getInt(1);
    result->close();

    return id;
}

int trade::create_or_update(const int tid, const double price,
                            const double amount) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    int id;

    // Check if this entry already exists
    id = this->primary(tid, price, amount);

    // Prepare our query
    if ( id ) {
        ss << "REPLACE INTO " << this->model << " (id, tid, price, amount) " 
              "VALUES (" << id << ", " << tid << ", " << price << ", " 
           << amount << ")";
    } else {
        ss << "INSERT INTO " << this->model << " (tid, price, amount) VALUES ("
           << tid << ", " << price << ", " << amount << ") "
              "ON DUPLICATE KEY UPDATE tid=VALUES(tid), price=VALUES(price), "
              "amount=VALUES(amount)";
    }
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute our update and return the id of the result
    this->update(stmt);

    // If this row is new, return the generated id
    if ( ! id ) {
        NuoDB::ResultSet *result = stmt->getGeneratedKeys();

        // Check our results
        if ( ! result->next() ) {
            std::cerr << "Error: no trade found with at time " << tid 
                      << " for " << amount << " BTC" << std::endl;
            exit(EXIT_FAILURE); 
        }

        // Store the auto-generated id and clean up
        id = result->getInt(1);
        result->close();
    }
    stmt->close();

    return id;
}


// Price relation interface methods
int price::primary(const int tid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Prepare our query
    ss << "SELECT id FROM " << this->model << " WHERE tid=" << tid;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    id = result->getInt(1);
    result->close();

    return id;
}

NuoDB::ResultSet *price::get_range(const int begID, const int endID) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Prepare our query
    ss << "SELECT tid, price FROM " << this->model << " WHERE tid >= " 
       << begID << " AND tid <= " << endID;

    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Execute the update and return the rows we want
    result = this->query(stmt);
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: No trades found in range  " << begID 
                  << " to " << endID << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Pass the array
    return result;
}

double price::get_stddev(const int tid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    ss << "SELECT stddev FROM " << this->model << " WHERE tid=" 
       << tid;

    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    result = this->query(stmt);
    stmt->close();

    if ( ! result->next() ) {
        std::cerr << "Error: No time period found with this unix timestamp" 
                  << std::endl;
        exit(EXIT_FAILURE);
    }

    double stddev = result->getDouble(1);
    std::cout << "This is the stddev of the row: " << stddev << std::endl;

    return stddev;
}

double price::get_amount(const int tid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    ss << "SELECT amount FROM " << this->model << " WHERE tid=" 
       << tid;

    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    result = this->query(stmt);
    stmt->close();

    if ( ! result->next() ) {
        std::cerr << "Error: No time period found with this unix timestamp" 
                  << std::endl;
        exit(EXIT_FAILURE);
    }

    double stddev = result->getDouble(1);
    std::cout << "This is the amount of the row: " << stddev << std::endl;

    return stddev;
}

NuoDB::ResultSet *price::get_similar(const double var) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    double upper = var * 1.005;
    double lower = var * 0.995;
    
    ss << "SELECT tid, amount FROM " << this->model << " WHERE stddev >= " << lower 
       << " AND stddev <= " << upper;

    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    result = this->query(stmt);
    stmt->close();

    if ( ! result->next() ) {
        std::cerr << "Error: No results found within given stddev range"  
                  << std::endl;
        exit(EXIT_FAILURE);
    }

    return result;
}


// Bot relation interface methods
int bot::primary(const int uid, const char *name) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Prepare our query
    ss << "SELECT id FROM " << this->model << " WHERE uid_id=" << uid 
       << " AND name=\'" << name << "\'";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    id = result->getInt(1);
    result->close();

    return id;
}

int bot::insert(const int uid, const char *name, const int work) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    int result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (uid_id, name, work) VALUES ("
       << uid << ", \'" << name << "\', " << work << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute update and return the result
    result = this->update(stmt);
    stmt->close();

    return result;
}

int bot::get_or_create(const int uid, const char *name, const int work) {
    // Check if this entry already exists
    int id = this->primary(uid, name);
    std::cout << "got id " << id << " for bot (" << uid << ", " << name << ")" 
              << std::endl;
    if ( id ) return id;

    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (uid_id, name, work) VALUES ("
       << uid << ", \'" << name << "\', " << work << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute our update and return the id of the result
    this->update(stmt);
    result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no bot found with uid " << uid 
                  << " named " << name << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    id = result->getInt(1);
    result->close();

    return id;
}

int bot::create_or_update(const int uid, const char *name, const int work) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Check if this entry already exists
    id = this->primary(uid, name);

    // Prepare our query
    if ( id ) {
        ss << "REPLACE INTO " << this->model << " (id, uid_id, name, work) " 
              "VALUES (" << id << ", " << uid << ", \'" << name << "\', " 
           << work << ")";
    } else {
        ss << "INSERT INTO " << this->model << " (uid_id, name, work) VALUES ("
           << uid << ", \'" << name << "\', " << work << ")"
              "ON DUPLICATE KEY UPDATE work=VALUES(work)";
    }
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute our update and return the id of the result
    this->update(stmt);

    // If this row is new, return the generated id
    if ( ! id ) {
        result = stmt->getGeneratedKeys();

        // Check our results
        if ( ! result->next() ) {
            std::cerr << "Error: no bot found with uid " << uid 
                      << " named " << name << std::endl;
            exit(EXIT_FAILURE); 
        }

        // Store the auto-generated id and clean up
        id = result->getInt(1);
        result->close();
    }
    stmt->close();

    return id;
}


// Rule relation interface methods
int rule::primary(const int bid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Prepare our query
    ss << "SELECT id FROM " << this->model << " WHERE bid_id=" << bid;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    id = result->getInt(1);
    result->close();

    return id;
}

int rule::insert(const int bid, const std::string rules) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    int result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (bid_id, params) VALUES ("
       << bid << ", ?)";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(),
                                              NuoDB::RETURN_GENERATED_KEYS);
    NuoDB::Clob *clob = this->connection->createClob();
    clob->setChars(rules.size(), rules.data());
    stmt->setClob(1, clob);
    clob->release();

    // Safely execute update and return the result
    result = this->update(stmt);
    stmt->close();

    return result;
}

int rule::get_or_create(const int bid, const std::string rules) {
    // Check if this entry already exists
    int id = this->primary(bid);
    if ( id ) return id;

    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (bid_id, params) VALUES ("
       << bid << ", ?)";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);
    NuoDB::Clob *clob = this->connection->createClob();
    clob->setChars(rules.size(), rules.data());
    stmt->setClob(1, clob);
    clob->release();

    // Safely execute our update and return the id of the result
    this->update(stmt);
    result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no rules found for bot with id " << bid 
                  << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    id = result->getInt(1);
    result->close();

    return id;
}

int rule::create_or_update(const int bid, const std::string rules) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Check if this entry already exists
    id = this->primary(bid);

    // Prepare our query
    if ( id ) {
        ss << "REPLACE INTO " << this->model << " VALUES (" << id << ", "
           << bid << ", ?)";
    } else {
        ss << "INSERT INTO " << this->model << " (bid_id, params) VALUES ("
           << bid << ", ?) ON DUPLICATE KEY UPDATE params=VALUES(params)";
    }
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);
    NuoDB::Clob *clob = this->connection->createClob();
    clob->setChars(rules.size(), rules.data());
    stmt->setClob(1, clob);
    clob->release();

    // Safely execute our update and return the id of the result
    this->update(stmt);

    // If this row is new, return the generated id
    if ( ! id ) {
        result = stmt->getGeneratedKeys();

        // Check our results
        if ( ! result->next() ) {
            std::cerr << "Error: no rules found for bot " << bid << std::endl;
            exit(EXIT_FAILURE); 
        }

        // Store the auto-generated id and clean up
        id = result->getInt(1);
        result->close();
    }
    stmt->close();

    return id;
}

std::string rule::params(const int bid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    NuoDB::Clob *clob;

    // Prepare our query
    ss << "SELECT params FROM " << this->model << " WHERE bid_id=" << bid;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query and return the result
    result = this->query(stmt);

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no rules found for bot " << bid << std::endl;
        exit(EXIT_FAILURE);
    }

    // Extract NuoDB CLOB and prepare buffer
    clob = result->getClob(1);
    const int len = clob->length();
    char *buf = new char[len];

    // Copy the CLOB into a string and return the result
    clob->getChars(0, len, buf);
    std::string data(buf, len);
    delete buf;

    return data;
}


// Host relation interface methods
int host::primary(const char *addr) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Prepare our query
    ss << "SELECT id FROM " << this->model << " WHERE addr=\'" << addr << "\'";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    id = result->getInt(1);
    result->close();

    return id;
}

int host::insert(const char *addr, const int load) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    int result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (addr, workload) VALUES (\'" 
       << addr << "\', " << load << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute update and return the result
    result = this->update(stmt);
    stmt->close();

    return result;
}

int host::get_or_create(const char *addr, const int load) {
    // Check if this entry already exists
    int id = this->primary(addr);
    if ( id ) return id;

    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (addr, workload) VALUES (\'"
       << addr << "\', " << load << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute update and return the id of the result
    this->update(stmt);
    result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no host " << addr << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    id = result->getInt(1);
    result->close();

    return id;
}

int host::create_or_update(const char *addr, const int load) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Check if this entry already exists
    id = this->primary(addr);

    // Prepare our query
    if ( id ) {
        ss << "REPLACE INTO " << this->model << " (id, addr, workload) " 
              "VALUES (" << id << ", \'" << addr << "\', " << load << ")";
    } else {
        ss << "INSERT INTO " << this->model << " (addr, workload) VALUES (\'"
           << addr << "\', " << load << ") ON DUPLICATE KEY UPDATE "
              "load=VALUES(load)";
    }
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute our update and return the id of the result
    this->update(stmt);

    // If this row is new, return the generated id
    if ( ! id ) {
        result = stmt->getGeneratedKeys();

        // Check our results
        if ( ! result->next() ) {
            std::cerr << "Error: no host " << addr << std::endl;
            exit(EXIT_FAILURE); 
        }

        // Store the auto-generated id and clean up
        id = result->getInt(1);
        result->close();
    }
    stmt->close();

    return id;
}

char *host::next() {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    char *node = NULL;

    // Prepare our query
    ss << "SELECT addr FROM " << this->model << " ORDER BY workload ASC "
          "LIMIT 1";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query and return the result
    result = this->query(stmt);

    // Check our results
    if ( ! result->next() ) return NULL;

    // Copy the hostname from our result to a new string
    const std::string &out = result->getString(1);
    node = new char[out.size() + 1];
    strcpy(node, out.c_str());

    // Clean up and return hostname
    result->close();

    return node;
}

char *host::addr(const int hid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    char *node = NULL;

    // Prepare our query
    ss << "SELECT addr FROM " << this->model << " WHERE id=" << hid;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // Check our results
    if ( ! result->next() ) return NULL;

    // Copy the hostname from our result to a new string
    const std::string &out = result->getString(1);
    node = new char[out.size() + 1];
    strcpy(node, out.c_str());

    // Clean up and return hostname
    result->close();

    return node;
}


// Runs relation interface methods
int runs::primary(const int bid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Prepare our query
    ss << "SELECT id FROM " << this->model << " WHERE bid_id=" << bid;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    id = result->getInt(1);
    result->close();

    return id;
}

int runs::insert(const int hid, const int bid, const int pid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    int result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (hid_id, bid_id, pid) VALUES ("
       << hid << ", " << bid << ", " << pid << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute update and return the result
    result = this->update(stmt);
    stmt->close();

    return result;
}

int runs::get_or_create(const int hid, const int bid, const int pid) {
    int id = this->primary(bid);
    if ( id ) return id;

    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;

    // Prepare our query
    ss << "INSERT INTO " << this->model << " (hid_id, bid_id, pid) VALUES ("
       << hid << ", " << bid << ", " << pid << ")";
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute update and return the id of the result
    this->update(stmt);
    result = stmt->getGeneratedKeys();
    stmt->close();

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no bot found with hid " << hid << ", bid "
                  << bid << ", " << pid << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Clean up and return the auto-generated id
    id = result->getInt(1);
    result->close();

    return id;
}

int runs::create_or_update(const int hid, const int bid, const int pid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int id;

    // Check if this entry already exists
    id = this->primary(bid);

    // Prepare our query
    if ( id ) {
        ss << "REPLACE INTO " << this->model << " (id, hid_id, bid_id, pid) " 
              "VALUES (" << id << ", " << hid << ", " << bid << ", " 
           << pid << ")";
    } else {
        ss << "INSERT INTO " << this->model << " (hid_id, bid_id, pid) VALUES "
              "(" << hid << ", " << bid << ", " << pid << ") "
              "ON DUPLICATE KEY UPDATE hid_id=VALUES(hid_id), pid=VALUES(pid)";
    }
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str(), NuoDB::RETURN_GENERATED_KEYS);

    // Safely execute our update and return the id of the result
    this->update(stmt);

    // If this row is new, return the generated id
    if ( ! id ) {
        result = stmt->getGeneratedKeys();

        // Check our results
        if ( ! result->next() ) {
            std::cerr << "Error: no rules found for bot " << bid << std::endl;
            exit(EXIT_FAILURE); 
        }

        // Store the auto-generated id and clean up
        id = result->getInt(1);
        result->close();
    }
    stmt->close();

    return id;
}

int runs::hid(const int bid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int hid;

    // Prepare our query
    ss << "SELECT hid_id FROM " << this->model << " WHERE bid_id=" << bid;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    hid = result->getInt(1);
    result->close();

    return hid;
}

int runs::pid(const int bid) {
    std::stringstream ss;
    NuoDB::PreparedStatement *stmt;
    NuoDB::ResultSet *result;
    int pid;

    // Prepare our query
    ss << "SELECT pid FROM " << this->model << " WHERE bid_id=" << bid;
    const std::string &tmp = ss.str();
    stmt = this->prepare(tmp.c_str());

    // Safely execute query
    result = this->query(stmt);

    // If no row was found, return an invalid id
    if ( ! result->next() ) return 0;

    // Return the id of the result
    pid = result->getInt(1);
    result->close();

    return pid;
}
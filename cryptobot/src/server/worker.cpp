#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

#include "nuodbi.hh"
#include "worker.hh"


worker::worker(int id, bool trade) {
    this->id = id;
    this->trade = trade;
    this->rules = NULL;
}

worker::~worker() {
    // Delete any rules, if they exist
    if ( this->rules ) delete this->rules;
}

void worker::fetch() {
    // Retrieve rule bytestring from the database
    db::rule *rule_db = new db::rule();
    std::string tmp = rule_db->params(this->id);
    delete rule_db;

    // Load this worker's rule bytestring into an archive
    std::stringstream iss;
    iss << tmp;
    boost::archive::text_iarchive ia(iss);

    // Delete any rules, if they exist
    if ( this->rules ) delete this->rules;

    // Read this worker's rules from the archive
    std::vector<bots::rule *> out;
    ia >> BOOST_SERIALIZATION_NVP(out);
    this->rules = new std::vector<bots::rule *>(out);
}

void worker::run() {
    std::cout << "Worker run has begun" << std::endl;
    // Fork child process to do work
    pid_t pid = fork();

    if ( pid == -1 ) {
        std::cerr << "Error: forking child process failed" << std::endl;
    } else if ( pid == 0 ) {

        // Retrieve rule bytestring from the database
        db::rule *rule_db = new db::rule();
        std::string tmp = rule_db->params(this->id);
        delete rule_db;

        // Load this worker's rule bytestring into an archive
        std::stringstream iss;
        iss << tmp;
        boost::archive::text_iarchive ia(iss);

        // Delete any rules, if they exist
        if ( this->rules ) delete this->rules;

        // Read this worker's rules from the archive
        std::vector<bots::rule *> out;
        ia >> BOOST_SERIALIZATION_NVP(out);
        this->rules = new std::vector<bots::rule *>(out);

        // Execute rules
        for ( std::vector<bots::rule *>::iterator it = this->rules->begin();
              it != this->rules->end(); ++it ) {
            (*it)->run();
        }

        exit(EXIT_SUCCESS);
    } else {
        // Update the entry for this worker in the runs relation
        db::runs *runs_db = new db::runs();
        const int hid = runs_db->hid(this->id);
        runs_db->create_or_update(hid, this->id, pid);
        delete runs_db;

        return;
    }
}

void worker::stop(int id) {
    std::cerr << "Worker " << id << " received stop command" << std::endl;

    db::runs *runs_db = new db::runs();

    // Find worker's pid
    const int pid = runs_db->pid(id);

    // Remove the worker's row from the runs relation
    const int rid = runs_db->primary(id);
    std::cerr << "Deleting row " << rid << " from runs relation" << std::endl;
    runs_db->erase(rid);
    delete runs_db;

    // Check if the specified process exists
    if ( kill(pid, 0) == ESRCH ) {
        std::cerr << "Warning: process " << pid << " not found" << std::endl;
    } else {
        // Stop the worker
        std::cerr << "Sending SIGTERM to process " << pid << std::endl;
        kill(pid, SIGTERM);
    }
}

#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>
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

void worker::run() {
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
        // while ( true )
        // for ( unsigned j = 0; j < 5; ++j ) 
        {
            for ( int i = 0; i < this->rules->size(); ++i ) {
                if ( this->rules->at(i)->test() && this->trade ) {
                    this->rules->at(i)->trade();
                }
            }
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
    const int rid = runs_db->primary(id);
    std::cerr << "Deleting row " << rid << " from runs relation" << std::endl;
    runs_db->erase(rid);
    delete runs_db;

    // TODO: implement function to stop worker (send kill signal)
}

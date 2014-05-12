#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cstring>

#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/vector.hpp>
#include <netdb.h>
#include <limits.h>
#include <sys/socket.h>
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

char *worker::host() {
    struct addrinfo hints, *info;
    int result;

    char hostname[HOST_NAME_MAX + 1];
    hostname[HOST_NAME_MAX] = '\0';
    gethostname(hostname, HOST_NAME_MAX);

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_CANONNAME;

    if ( (result = getaddrinfo(hostname, "http", &hints, &info)) != 0 ) {
        std::cerr << "Error: failed to retrieve fully qualified domain name: "
                  << gai_strerror(result) << std::endl;
        exit(EXIT_FAILURE);
    }

    char *domain = new char[strlen(info->ai_canonname) + 1];
    strcpy(domain, info->ai_canonname);
    freeaddrinfo(info);

    std::cout << "Current host: " << domain << std::endl;
    return domain;
}

void worker::run() {
    // Fork child process to do work
    pid_t pid = fork();

    if ( pid == -1 ) {
        std::cerr << "Error: forking child process failed" << std::endl;
    } else if ( pid == 0 ) {
        // Connect to rule database
        db::rule *rule_db = new db::rule();

        // Retrieve rule bytestring from the database and close connection
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
        for ( unsigned j = 0; j < 5; ++j ) 
        {
            for ( int i = 0; i < this->rules->size(); ++i ) {
                if ( this->rules->at(i)->test() && this->trade ) {
                    this->rules->at(i)->trade();
                }
            }
        }
    } else {
        // Find this worker's current hostname and get its id
        const char *hostname = this->host();
        db::host *host_db = new db::host();
        const int hid = host_db->primary(hostname);
        delete hostname;
        delete host_db;

        // Create an entry for this worker in the runs relation
        db::runs *runs_db = new db::runs();
        runs_db->insert(hid, this->id, pid);
        delete runs_db;
    }
}

void worker::stop(int id) {
    // TODO: implement function to stop worker (send kill signal) and update
    //       records in the database
    std::cerr << "Worker " << id << " received stop command" << std::endl;
}

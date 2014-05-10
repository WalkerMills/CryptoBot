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
    db::rule *rule_db = new db::rule();

    // Find this bot's row
    NuoDB::ResultSet *result = rule_db->get(this->id);

    // Check our results
    if ( ! result->next() ) {
        std::cerr << "Error: no rules found for bot with id " << this->id
                  << std::endl;
        exit(EXIT_FAILURE);
    } else {
        // Read our archive bytestring into an input stream
        std::string tmp = result->getString(2);
        std::istringstream iss(tmp);
        boost::archive::text_iarchive ia(iss);

        // Delete any rules, if they exist
        if ( this->rules ) {
            delete this->rules;
        }

        // Read this bot's rules from the archive
        ia & this->rules;
    }
}

worker::~worker() {
    delete this->rules;
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

    return domain;
}

void worker::run() {
    pid_t pid = fork();

    if ( pid == -1 ) {
        std::cerr << "Error: forking child process failed" << std::endl;
    } else if ( pid == 0 ) {
        while ( true ) {
            for ( int i = 0; i < this->rules->size(); ++i ) {
                if ( this->rules->at(i)->test() && this->trade ) {
                    this->rules->at(i)->trade();
                }
            }
        }
    } else {
        // Find this worker's current hostname and get its id
        char *hostname = this->host();
        db::host *host_db = new db::host();
        int hid = host_db->primary(hostname);

        // Create an entry for this worker in the runs relation
        db::runs *runs_db = new db::runs();
        runs_db->create(hid, this->id, pid);

        delete hostname;
        delete host_db;
        delete runs_db;
    }
}

void worker::stop() {
    // TODO: implement function to stop worker (send kill signal) and update
    //       records in the database
}
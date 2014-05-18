#ifndef __WORKER_HH__
#define __WORKER_HH__

#include <vector>

#include "bots.hh"


class worker {
private:
    int id;
    bool trade;
    std::vector<bots::rule *> *rules;

    // Fetch rules from the database
    void fetch();

public:
    worker(int id, bool trade);
    ~worker();

    // Run this worker
    void run();

    // Stop a worker
    static void stop(int id);
};

#endif // __WORKER_HH__
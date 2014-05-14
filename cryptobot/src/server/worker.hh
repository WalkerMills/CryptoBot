#ifndef __WORKER_HH__
#define __WORKER_HH__

#include <vector>

#include "bots.hh"


class worker {
private:
    int id;
    bool trade;
    std::vector<bots::rule *> *rules;

public:
    worker(int id, bool trade);
    ~worker();

    void run();
    static void stop(int id);
};

#endif // __WORKER_HH__
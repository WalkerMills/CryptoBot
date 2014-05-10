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

    char *host();
    void run();
    void stop();
};

#endif // __WORKER_HH__
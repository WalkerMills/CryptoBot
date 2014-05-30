#ifndef __RULES_HH__
#define __RULES_HH__

#include <string>
#include <vector>
#include <utility>

#include <boost/serialization/access.hpp>
#include <boost/serialization/vector.hpp>

#include "ta.hh"


enum action_t {WATCH, BUY, SELL};
enum timescale_t {FIFTEEN, THIRTY, SIXTY};

action_t identity_(action_t type);

namespace bots {

class rule {
private:
    std::vector<ta::ta *> *indicators;

    friend class boost::serialization::access;

    template<class archive>
    void serialize(archive &ar, const unsigned version) {
        ar & action & amount & start & end & indicators;
    }

public:
    action_t action;
    double amount;
    int start;
    int end;

    rule();
    rule(action_t action, double amount);
    ~rule();

    void add_indicator(std::string indicator);

    double *run(int index) { return NULL; }
    bool test() { return false; }
    void trade() { }
};


class sma : public rule {
private:
    std::vector<ta::SMA *> *indicators;

    friend class boost::serialization::access;

    template<class archive>
    void serialize(archive &ar, const unsigned version) {
        ar & action & amount & start & end & indicators;
    }
    db::price *resolve(timescale_t scale);     


public:
    sma();
    sma(action_t action, double amount);

    void add_sma(int period);
    void update_indices(int start, int end);
    ta::SMA *get_indicator(int index);
    std::vector<std::pair<int, double>> *run(int index, timescale_t timescale);
    std::vector<int> *crossover(int ind1, int ind2, timescale_t scale);
    std::vector<double> *return_similar(double unix_tid, timescale_t scale);
    double t_test(double amount, std::vector<double> *data);
};

}

#endif // __RULES_HH__s
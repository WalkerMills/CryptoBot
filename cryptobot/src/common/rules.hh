#ifndef __RULES_HH__
#define __RULES_HH__

#include <string>

#include <boost/serialization/access.hpp>

#include "ta.hh"


namespace bots {

enum action_t {buy, sell, watch};

class rule {
private:
    friend class boost::serialization::access;

    template<class archive>
    void serialize(archive &ar, const unsigned version) {
        ar & action & amount & indicator;
    }

public:
    action_t action;
    double amount;
    ta::ta *indicator;

    rule();
    rule(action_t action, double amount, std::string indicator);
    ~rule();

    virtual bool test();
    virtual void trade();
};

}

#endif // __RULES_HH__s
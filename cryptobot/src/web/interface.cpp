#include <boost/python.hpp>

#include "bots.hh"
#include "rules.hh"

using namespace boost::python;
using namespace bots;

BOOST_PYTHON_MODULE(interface) {
    class_<bot>("bot", init<int>())
        .def(init<int, char *>())
        .def_readwrite("id", &bot::id)
        .def_readwrite("name", &bot::name)
        .def_readwrite("uid", &bot::uid)
        .def("insert_rule", &bot::insert_rule)
        .def("delete_rule", &bot::delete_rule)
        .def("active", &bot::active)
        .def("run", &bot::run)
        .def("stop", &bot::stop)
    ;

    enum_<action_t>("action_t")
        .value("WATCH", WATCH)
        .value("BUY", BUY)
        .value("SELL", SELL)
    ;

    def("identity", identity_);

    class_<rule>("rule", no_init);

    class_<sma, bases<rule>>("sma", init<>())
        .def(init<action_t, float>())
        .def("add_sma", &sma::add_sma)
        .def("update_indices", &sma::update_indices)
    ;
}
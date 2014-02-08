#include <boost/python.hpp>

#include "bots.hh"


BOOST_PYTHON_MODULE(libinterface) {
    using namespace boost::python;

    class_<bots::user>("user", init<std::string>())
        .def("create_bot", &bots::user::create_bot)
        .def("delete_bot", &bots::user::delete_bot)
        .def("run_bot", &bots::user::run_bot)
        .def("stop_bot", &bots::user::stop_bot)
        .def("active", &bots::user::active)
    ;
}

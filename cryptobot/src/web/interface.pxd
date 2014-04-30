from libcpp cimport bool
from libcpp.string cimport string


cdef extern from "../client/bots.hh" namespace "bots":
    cdef cppclass user:
        user(string)
        void create(string)
        void remove(string)
        void run(string)
        void stop(string)
        bool active(string)


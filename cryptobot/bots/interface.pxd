from libcpp cimport bool
from libcpp.string cimport string


cdef extern from "bots.hh" namespace "bots":
    cdef cppclass user:
        user(string)
        void create_bot(string)
        void delete_bot(string)
        void run_bot(string)
        void stop_bot(string)
        bool active(string)


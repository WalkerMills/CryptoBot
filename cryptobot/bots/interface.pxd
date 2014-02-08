from libcpp cimport string

cdef extern from "bots.hh" namespace "bots":
    def cppclass user:
        user(string) except +

        void create_bot(string)
        void delete_bot(string)
        
        void run_bot(string)
        void stop_bot(string)
        
        bool active(string)
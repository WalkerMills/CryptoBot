from libcpp.string cimport string

cdef extern from "bots.hh" namespace "bots":
    cdef cppclass user:
        user(string) except +

        void create_bot(string)
        void delete_bot(string)

        void run_bot(string)
        void stop_bot(string)

cdef class PyUser:

    cdef user *thisptr

    def __cinit__(self, string username):
        self.thisptr = new user(username)
    def __dealloc__(self):
        del self.thisptr

    def create_bot(self, string name):
        self.thisptr.create_bot(name)
    def delete_bot(self, string name):
        self.thisptr.delete_bot(name)

    def run_bot(self, string name):
        self.thisptr.run_bot(name)
    def stop_bot(self, string name):
        self.thisptr.stop_bot(name)


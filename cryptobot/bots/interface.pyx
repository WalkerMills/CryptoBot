from libcpp.string cimport string


cdef extern from "bots.hh" namespace "bots":
    cdef cppclass user:
        user(string)

        void create_bot(string)
        void delete_bot(string)

        void run_bot(string)
        void stop_bot(string)


cdef class PyUser:

    cdef user *thisptr

    def __cinit__(self, char *username):
        self.thisptr = new user(<string> username)
    def __dealloc__(self):
        del self.thisptr

    def create_bot(self, char *name):
        self.thisptr.create_bot(<string> name)
    def delete_bot(self, char *name):
        self.thisptr.delete_bot(<string> name)

    def run_bot(self, char *name):
        self.thisptr.run_bot(<string> name)
    def stop_bot(self, char *name):
        self.thisptr.stop_bot(<string> name)


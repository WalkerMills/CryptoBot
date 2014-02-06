cimport interface

from libcpp.string cimport string


cdef class PyUser:

    cdef interface.user *thisptr

    def __cinit__(self, string username):
        self.thisptr = new interface.user(username)
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


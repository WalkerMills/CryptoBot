cimport interface

from libcpp.string cimport string


cdef class User:

    cdef interface.user *thisptr

    def __cinit__(self, string username):
        self.thisptr = new interface.user(username)
    def __dealloc__(self):
        del self.thisptr

    def create(self, string name):
        self.thisptr.create(name)
    def remove(self, string name):
        self.thisptr.remove(name)

    def run(self, string name):
        self.thisptr.run(name)
    def stop(self, string name):
        self.thisptr.stop(name)

    def active(self, string name):
        return self.thisptr.active(name)



#	Makefile 
#
#		Generic Makefile template configuration file 
#		Supports Cython, C, C++
#


# Default shell
SHELL = /bin/bash

# Default C compiler
CC = gcc

# Default C++ compiler
CXX = g++

# Default Thrift compiler
THRIFT = thrift

# Default Cython compiler (pyx -> cpp)
CYTHON = cython


# Directory containing source files
srcdir = $(CURDIR)

# Directory containing header files
includedir = $(CURDIR)

# Destination directory for object files and libraries
libdir = $(DESTDIR)$(srcdir)/lib

# Destination directory for Thrift-generated C++
gendir = $(DESTDIR)$(srcdir)/gen

# Destination directory for binaries
bindir = $(DESTDIR)$(srcdir)/bin


# Default compiler flags (for C and C++)
CFLAGS = -O3 -march=native -mtune=generic -pipe -fstack-protector \
--param=ssp-buffer-size=4 -Wno-sign-compare -Wno-unused-function

# Default compiler flags for C++
CXXFLAGS = -std=c++11 -Wno-write-strings

# Default linker flags
LD_FLAGS = -L$(libdir) -Wl,-O1,--sort-common,--as-needed,-z,relro 

# Default Thrift flags
THRIFT_FLAGS = -out $(gendir) -I $(srcdir) -strict --gen cpp

# Default Cython flags
CYTHON_FLAGS = -2


# Compiler flags for compiling with Thrift
THRIFT_CFLAGS = -I/usr/include/thrift -DHAVE_INTTYPES_H -DHAVE_NETINET_IN_H
# Linker flags for linking object files compiled from Thrift-generated code
THRIFT_LDFLAGS = -lthrift

# Compiler flags for compiling with Cython
CYTHON_CFLAGS = -I/usr/include/python2.7 -Wno-strict-aliasing
# Linker flags for linking object files compiled from Cython-generated code
CYTHON_LDFLAGS = -lpython2.7

# All C compiler flaga for normal compilation
ALL_CFLAGS = -Wall -I$(includedir) $(CFLAGS)

# All C++ compiler flags required for normal compilation
ALL_CXXFLAGS = $(ALL_CFLAGS) $(CXXFLAGS)

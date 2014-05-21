#
#	config.mk
#

# Default shell
SHELL = /bin/sh

# Default C compiler
CC = gcc

# Default C++ compiler
CXX = g++

# Default Cython compiler
CYTHON = cython

# Default Thrift compiler
THRIFT = thrift


MODULES = server client gen common web
srcdir = $(addprefix src/, $(MODULES))
libdir = lib
bindir = bin
gendir = src/gen


# Default compiler flags (for C and C++)
CFLAGS = -Og -g -mtune=generic -pipe -fstack-protector \
--param=ssp-buffer-size=4 -Wno-sign-compare -Wno-unused-function

# Default compiler flags for C++
CXXFLAGS = -std=c++11 -Wno-write-strings 


# Default linker flags
LD_FLAGS = -L$(libdir) -Wl,-O1,--sort-common,--as-needed,-z,relro \
-Wl,-rpath,$(realpath $(libdir))

# Default Cython flags
CYTHON_FLAGS = --cplus -2

# Default Thrift flags
THRIFT_FLAGS = -out $(gendir) -I $(gendir) -strict --gen cpp


# Flags for compiling and linking against ALGLIB
ALGLIB_LDFLAGS = -lalglib

# Flags for compiling and linking against Cython
CYTHON_CFLAGS = -I/usr/include/python2.7 -Wno-strict-aliasing
CYTHON_LDFLAGS = -lpython2.7 

# Flags for linking against NuoDB
NUODB_LDFLAGS = -L/opt/nuodb/lib64 -lNuoRemote

# Flags for linking against boost::serialization
SERIAL_CFLAGS = -DBOOST_NO_RVALUE_REFERENCES
SERIAL_LDFLAGS = -lboost_serialization

# Flags for linking against TA-Lib
TA_LDFLAGS = -lta_lib

# Flags for compiling and linking against Thrift
THRIFT_CFLAGS = -DHAVE_INTTYPES_H -DHAVE_NETINET_IN_H
# THRIFT_LDFLAGS = -lthrift
THRIFT_LDFLAGS = -lthrift -lthriftnb -levent

# All C compiler flaga for normal compilation
ALL_CFLAGS = -Wall $(addprefix -I, $(srcdir)) $(CFLAGS)

# All C++ compiler flags required for normal compilation
ALL_CXXFLAGS = $(ALL_CFLAGS) $(CXXFLAGS)




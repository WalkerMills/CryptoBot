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


MODULES = server client gen common
srcdir = $(addprefix src/, $(MODULES))
libdir = lib
bindir = bin
gendir = src/gen


# Default compiler flags (for C and C++)
CFLAGS = -O3 -mtune=generic -pipe -fstack-protector \
--param=ssp-buffer-size=4 -Wno-sign-compare -Wno-unused-function

# Default compiler flags for C++
CXXFLAGS = -std=c++11 -Wno-write-strings

# Default linker flags
LD_FLAGS = -L$(libdir) -Wl,-O1,--sort-common,--as-needed,-z,relro \
-Wl,-rpath,$(libdir)

# Default Cython flags
CYTHON_FLAGS = --cplus -2

# Default Thrift flags
THRIFT_FLAGS = -out $(gendir) -I $(gendir) -strict --gen cpp


# Compiler flags for compiling with Cython
CYTHON_CFLAGS = -I/usr/include/python2.7 -Wno-strict-aliasing
# Linker flags for linking object files compiled from Cython-generated code
CYTHON_LDFLAGS = -lpython2.7

# Compiler flags for compiling with MySQL++
MYSQLPP_CFLAGS = -I/usr/include/mysql -I/usr/include/mysql++ 
# Linker flags for linking object files dependent on MySQL++
MYSQLPP_LDFLAGS = -lmysqlpp -lmysqlclient

# Compiler flags for compiling with TA-Lib
TA_CFLAGS = -I/usr/include/ta-lib
# Linker flags for linking object files dependent on TA-Lib
TA_LDFLAGS = -lta_lib

# Flags for compiling and linking against Thrift
THRIFT_CFLAGS = -I/usr/include/thrift -DHAVE_INTTYPES_H -DHAVE_NETINET_IN_H
THRIFT_LDFLAGS = -lthrift

# All C compiler flaga for normal compilation
ALL_CFLAGS = -Wall $(addprefix -I, $(srcdir)) $(CFLAGS)

# All C++ compiler flags required for normal compilation
ALL_CXXFLAGS = $(ALL_CFLAGS) $(CXXFLAGS)




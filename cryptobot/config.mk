#
#	config.mk
#

# Default shell
SHELL = /bin/sh

# Default C compiler
CC = gcc

# Default C++ compiler
CXX = g++

# Default Thrift compiler
THRIFT = thrift


MODULES = server client gen
srcdir = $(addprefix src/, $(MODULES))
libdir = lib
bindir = bin
gendir = src/gen


# Default compiler flags (for C and C++)
CFLAGS = -O3 -march=native -mtune=generic -pipe -fstack-protector \
--param=ssp-buffer-size=4 -Wno-sign-compare -Wno-unused-function

# Default compiler flags for C++
CXXFLAGS = -std=c++11 -Wno-write-strings

# Default linker flags
LD_FLAGS = -L$(libdir) -Wl,-O1,--sort-common,--as-needed,-z,relro \
-Wl,-rpath,$(libdir)

# Default Thrift flags
THRIFT_FLAGS = -out $(gendir) -I $(gendir) -strict --gen cpp

# Flags for compiling and linking against Thrift
THRIFT_CFLAGS = -I/usr/include/thrift -DHAVE_INTTYPES_H -DHAVE_NETINET_IN_H
THRIFT_LDFLAGS = -lthrift

# All C compiler flaga for normal compilation
ALL_CFLAGS = -Wall $(addprefix -I, $(srcdir)) $(CFLAGS)

# All C++ compiler flags required for normal compilation
ALL_CXXFLAGS = $(ALL_CFLAGS) $(CXXFLAGS)




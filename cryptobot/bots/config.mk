# Default shell
SHELL = /bin/sh

# Default C++ compiler
CXX = g++

# Directory containing source files
srcdir = $(CURDIR)

# Directory containing header files
includedir = $(CURDIR)

# Directory for containing object files and libraries
libdir = $(DESTDIR)$(srcdir)/lib

# Directory for containing binary executables
bindir = $(DESTDIR)$(srcdir)/bin

# Default compiler flags for C
CFLAGS = -O3 -mtune=generic 

# Default compiler flags for C++
CXXFLAGS = -std=c++11

# Linker flags
LDFLAGS = -Wl,-rpath=$(libdir)

# All C flags required for proper compilation
ALL_CFLAGS = -Wall $(CFLAGS) $(CXXFLAGS) -I$(includedir) -L$(libdir)

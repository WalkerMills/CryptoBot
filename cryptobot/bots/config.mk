# Default shell
SHELL = /bin/sh

# Default C++ compiler
CXX = g++

# Default Cython compiler (pyx -> cpp)
CYTHON = cython

# Directory containing source files
srcdir = $(CURDIR)

# Directory containing header files
includedir = $(CURDIR)

# Destination directory for object files and libraries
libdir = $(DESTDIR)$(srcdir)/lib

# Destination directory for binaries
bindir = $(DESTDIR)$(srcdir)/bin

# Default compiler flags for C (and C++)
CFLAGS = -O3 -march=native -mtune=generic -pipe -fstack-protector \
--param=ssp-buffer-size=4 -Wno-sign-compare -Wno-unused-function

# Default compiler flags for C++
CXXFLAGS = -std=c++11 -Wno-write-strings

# Default linker flags
LD_FLAGS = -L$(libdir) -Wl,-O1,--sort-common,--as-needed,-z,relro 

# Default Cython flags
CYTHON_FLAGS = --cplus -2

# Compiler flags for compiling with TA-Lib
TA_CFLAGS = -I/usr/include/ta-lib
# Linker flags for linking object files dependent on TA-Lib
TA_LDFLAGS = -lta_lib

# Compiler flags for compiling with MySQL++
MYSQLPP_CFLAGS = -I/usr/include/mysql -I/usr/include/mysql++ 
# Linker flags for linking object files dependent on MySQL++
MYSQLPP_LDFLAGS = -lmysqlpp -lmysqlclient

# Compiler flags for compiling with Cython
CYTHON_CFLAGS = -I/usr/include/python2.7 -Wno-strict-aliasing
# Linker flags for linking object files compiled from Cython-generated code
CYTHON_LDFLAGS = -lpython2.7

# All C flags required for normal compilation
ALL_CFLAGS = -Wall -I$(includedir) $(CFLAGS) $(CXXFLAGS)


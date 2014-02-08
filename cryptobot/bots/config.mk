# Default shell
SHELL = /bin/sh

# Default C++ compiler
CXX = g++

# Default Cython compiler
CYTHON = cython

# Directory containing source files
srcdir = $(CURDIR)

# Directory containing header files
includedir = $(CURDIR)

# Directory for containing object files and libraries
libdir = $(DESTDIR)$(srcdir)/lib

# Directory for containing binary executables
bindir = $(DESTDIR)$(srcdir)/bin

# Default compiler flags for C
CFLAGS = -O3 -march=native -mtune=generic -pipe -fstack-protector \
--param=ssp-buffer-size=4 -Wno-sign-compare -Wno-write-strings \
-Wno-unused-function

# Default compiler flags for C++
CXXFLAGS = -std=c++11

# Default linker flags
LD_FLAGS = -L$(libdir) -Wl,-rpath=$(libdir)

# Default Cython flags
CYTHON_FLAGS = --cplus -2

# Compiler flags for compiling with TA-Lib
TA_CFLAGS = -I/usr/include/ta-lib
TA_LDFLAGS = -lta_lib

# Compiler flags for compiling with MySQL++
MYSQLPP_CFLAGS = -I/usr/include/mysql -I/usr/include/mysql++ 
MYSQLPP_LDFLAGS = -lmysqlpp -lmysqlclient

# Compiler flags for compiling with Cython
CYTHON_CFLAGS = -I/usr/include/python2.7 
CYTHON_LDFLAGS = -lpython2.7 -Wl,-O1,--sort-common,--as-needed,-z,relro 

# All C flags required for normal compilation
ALL_CFLAGS = -Wall $(CFLAGS) $(CXXFLAGS) -I$(includedir) -L$(libdir)


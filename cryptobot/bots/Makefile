include config.mk

# Compiler flags for compiling with TA-Lib
TA_CFLAGS = -I/usr/include/ta-lib -lta_lib

# Compiler flags for compiling with MySQL++
MYSQLPP_CFLAGS = -I/usr/include/mysql -I/usr/include/mysql++ -lmysqlpp \
-lmysqlclient

# Compiler flags for compiling with Cython
CYTHON_CFLAGS = -pthread -fwrapv -fno-strict-aliasing -I/usr/include/python2.7

# Source file names
SRCS = bots.cpp db.cpp interface.pyx reflection.cpp ta.cpp

# Header file names
HDRS = bots.hh db.hh reflection.hh ta.hh

# Object file names (targets)
OBJS = bots.o db.o reflection.o ta.o

# Binary file names (targets)
BINS = 

# Dynamic library names (targets)
LIBS = libbots.so libdb.so libinterface.so libreflection.so libta.so

# Absolute file paths for object files
OBJS_O = $(foreach obj, $(OBJS), $(libdir)/$(obj))

# Absolute file paths for dynamic libraries
LIBS_SO = $(foreach lib, $(LIBS), $(libdir)/$(lib))

# Absolute file paths for binary executables
BINS_ = $(foreach bin, $(BINS), $(bindir)/$(bin))

# Clear allowed target suffixes
.SUFFIXES:

# Set allowed target suffixes
.SUFFIXES: .cpp .o .so

# Declare all phony targets
.PHONY: all mklib mkbin clean

all: $(LIBS)
	
# Create directory for containing object files and libraries
mklib:
	@# Make libdir if it doesn't already exist
	test -d $(libdir) || mkdir $(libdir)

# Create directory for containing binary executables
mkbin:
	@# Make bindir if it doesn't already exist
	test -d $(bindir) || mkdir $(bindir)

# Clean up all files
clean:
	rm -f $(OBJS_O) $(LIBS_SO) $(BINS_)

	@# If libdir is empty, remove it
	if [[ -d $(libdir) && -z "`ls -A $(libdir)`" ]]; then \
	    rm -rf $(libdir); \
	fi

	@# If bindir is empty, remove it
	if [[ -d $(bindir) && -z "`ls -A $(bindir)`" ]]; then \
	    rm -rf $(bindir); \
	fi

%.cpp: %.pyx
	$(CYTHON) $(CYTHON_FLAGS) $< -o $@

bots.o: private ALL_CFLAGS += $(TA_CFLAGS) $(MYSQLPP_CFLAGS)
db.o: private ALL_CFLAGS += $(MYSQLPP_CFLAGS)
reflection.o: private ALL_CFLAGS += $(TA_CFLAGS)
ta.o: private ALL_CFLAGS += $(TA_CFLAGS)
interface.o: private ALL_CFLAGS += $(CYTHON_CFLAGS) $(TA_CFLAGS) \
$(MYSQLPP_CFLAGS)

%.o: %.cpp mklib
	$(CXX) $(ALL_CFLAGS) -fpic -c $< -o $(libdir)/$@

lib%.so: %.o
	$(CXX) -shared $(libdir)/$< -o $(libdir)/$@


include config.mk

# Compiler flags for compiling with ta-lib
TA_CFLAGS = -I/usr/include/ta-lib -lta_lib

# Compiler flags for compiling with mysql++
MYSQLPP_CFLAGS = -I/usr/include/mysql -I/usr/include/mysql++ -lmysqlpp \
-lmysqlclient

# Source file names
SRCS = bots.cpp

# Object file names (targets)
OBJS = bots.o ta.o reflection.o

# Binary file names (targets)
BINS = 

# Dynamic library names (targets)
LIBS = libbots.so libta.so libreflection.so

# Absolute file paths for object files
OBJS_O = $(foreach obj, $(OBJS), $(libdir)/$(obj))

# Absolute file paths for dynamic libraries
LIBS_SO = $(foreach lib, $(LIBS), $(libdir)/$(lib))

# Absolute file paths for binary executables
BINS_ = $(foreach bin, $(BINS), $(bindir)/$(bin))

# Clear allowed target suffixes
.SUFFIXES:

# Set allowed target suffixes
.SUFFIXES: .c .o .so

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

bots.o: bots.cpp mklib
	$(CXX) $(ALL_CFLAGS) $(TA_CFLAGS) -Wno-sign-compare -fpic -c $< \
	-o $(libdir)/$@

ta.o: ta.cpp mklib
	$(CXX) $(ALL_CFLAGS) $(TA_CFLAGS) -fpic -c $< -o $(libdir)/$@

reflection.o: reflection.cpp mklib
	$(CXX) $(ALL_CFLAGS) $(TA_CFLAGS) -Wno-unused-function -fpic -c $< \
	-o $(libdir)/$@

lib%.so: %.o
	$(CXX) -shared $(libdir)/$< -o $(libdir)/$@


include config.mk

# Source file names
SRCS = bots.cpp

# Object file names (targets)
OBJS = bots.o test.o

# Binary file names (targets)
BINS = test.c

# Dynamic library names (targets)
LIBS = libbots.so

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

all: libbots.so
	
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
	$(CXX) $(ALL_CFLAGS) -fpic -I/usr/include/ta-lib -lta_lib -c $< \
	-o $(libdir)/$@

libbots.so: bots.o
	$(CXX) -shared $(libdir)/$< -o $(libdir)/$@


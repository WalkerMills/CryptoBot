include config.mk

# Source file names
SRCS = bots.cpp django_db.cpp interface.pyx reflection.cpp ta.cpp main.cpp

# Header file names
HDRS = bots.hh django_db.hh reflection.hh ta.hh

# Object file names (targets)
OBJS = bots.o django_db.o interface.o reflection.o ta.o main.o

# Binary file names (targets)
BINS = main

# Dynamic library names (targets)
LIBS = libbots.so libdjango_db.so libinterface.so libreflection.so libta.so

# Absolute file paths for object files
OBJS_O = $(foreach obj, $(OBJS), $(libdir)/$(obj))

# Absolute file paths for dynamic libraries
LIBS_SO = $(foreach lib, $(LIBS), $(libdir)/$(lib))

# Absolute file paths for binary executables
BINS_ = $(foreach bin, $(BINS), $(bindir)/$(bin))

TEST = main

# Clear allowed target suffixes
.SUFFIXES:

# Set allowed target suffixes
.SUFFIXES: .cpp .o .so

# Declare all phony targets
.PHONY: all clean install test mklib mkbin

install: ALL_CFLAGS += -DNDEBUG
install: clean all
	rm -f $(OBJS_O)
	
all: $(LIBS) $(BINS)

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

test: install
	$(bindir)/$(TEST)

# Create directory for containing object files and libraries
mklib:
	@# Make libdir if it doesn't already exist
	test -d $(libdir) || mkdir $(libdir)

# Create directory for containing binary executables
mkbin:
	@# Make bindir if it doesn't already exist
	test -d $(bindir) || mkdir $(bindir)

%.cpp: %.pyx mklib
	$(CYTHON) $(CYTHON_FLAGS) $< -o $(srcdir)/$@

bots.o: libdjango_db.so libreflection.so
interface.o: libbots.so
reflection.o: libta.so

bots.o: private ALL_CFLAGS += $(TA_CFLAGS) $(MYSQLPP_CFLAGS)
django_db.o: private ALL_CFLAGS += $(MYSQLPP_CFLAGS)
interface.o: private ALL_CFLAGS += $(CYTHON_CFLAGS) $(MYSQLPP_CFLAGS) \
$(TA_CFLAGS)
reflection.o: private ALL_CFLAGS += $(TA_CFLAGS)
ta.o: private ALL_CFLAGS += $(TA_CFLAGS)
main.o: private ALL_CFLAGS += $(MYSQLPP_CFLAGS) $(TA_CFLAGS)

%.o: %.cpp mklib 
	$(CXX) $(ALL_CFLAGS) -fPIC -c $< -o $(libdir)/$@

libinterface.so: private EXTRA_LDFLAGS = $(CYTHON_LDFLAGS) -lbots
libbots.so: private EXTRA_LDFLAGS = -ldjango_db -lta
libdjango_db.so: private EXTRA_LDFLAGS = $(MYSQLPP_LDFLAGS)
libreflection.so: private EXTRA_LDFLAGS = $(TA_LDFLAGS) -lta
libta.so: private EXTRA_LDFLAGS = $(TA_LDFLAGS)

lib%.so: %.o
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$@ $(libdir)/$< -o $(libdir)/$@ \
	$(EXTRA_LDFLAGS)

main: libbots.so

main: private EXTRA_LDFLAGS = -lbots

main: main.o mkbin
	$(CXX) $(LD_FLAGS) $(libdir)/$< -o $(bindir)/$@ $(EXTRA_LDFLAGS)

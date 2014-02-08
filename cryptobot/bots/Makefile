include config.mk


# Source file names
SRCS = bots.cpp django_db.cpp interface.pyx reflection.cpp ta.cpp main.cpp

# Header file names
HDRS = bots.hh django_db.hh reflection.hh ta.hh interface.pxd

# Object file names (targets)
OBJS = bots.o django_db.o interface.o reflection.o ta.o main.o

# Dynamic library names (targets)
LIBS = libbots.so libdjango_db.so libreflection.so libta.so

# Cython extension names (targets)
EXTS = interface.so

# Binary file names (targets)
BINS =


# Absolute file paths for object files
OBJ_FILES = $(foreach obj, $(OBJS), $(libdir)/$(obj))

# Absolute file paths for dynamic libraries
LIB_FILES = $(foreach lib, $(LIBS), $(libdir)/$(lib))

# Absolute file paths for Cython extensions
EXT_FILES = $(foreach lib, $(EXTS), $(libdir)/$(lib))

# Absolute file paths for binary executables
BIN_FILES = $(foreach bin, $(BINS), $(bindir)/$(bin))


# Clear allowed target suffixes
.SUFFIXES:

# Set allowed target suffixes
.SUFFIXES: .cpp .o .so

# Declare all phony targets
.PHONY: all clean install test mklib mkbin


# Remove any debug code
install: ALL_CFLAGS += -DNDEBUG

# Clean previous build results, do a clean build, and remove any object files
install: clean all
	rm -f $(OBJ_FILES)

# All targets we actually want
all: $(LIBS) $(EXTS) $(BINS)

# Clean up all files
clean:
	rm -f $(OBJ_FILES) $(LIB_FILES) $(EXT_FILES) $(BIN_FILES)

	@# If libdir is empty, remove it
	if [[ -d $(libdir) && -z "`ls -A $(libdir)`" ]]; then \
	    rm -rf $(libdir); \
	fi

	@# If bindir is empty, remove it
	if [[ -d $(bindir) && -z "`ls -A $(bindir)`" ]]; then \
	    rm -rf $(bindir); \
	fi

# Create directory for containing object files and libraries
mklib:
	@# Make libdir if it doesn't already exist
	test -d $(libdir) || mkdir $(libdir)

# Create directory for containing binary executables
mkbin:
	@# Make bindir if it doesn't already exist
	test -d $(bindir) || mkdir $(bindir)

# Compile a C++ file from our Cython files
%.cpp: %.pyx mklib
	$(CYTHON) $(CYTHON_FLAGS) $(srcdir)/$< -o $(srcdir)/$@

# Object target dependencies
bots.o: libdjango_db.so libreflection.so
interface.o: libbots.so
reflection.o: libta.so

# Object target compilation flags
bots.o: private ALL_CFLAGS += $(TA_CFLAGS) $(MYSQLPP_CFLAGS)
django_db.o: private ALL_CFLAGS += $(MYSQLPP_CFLAGS)
interface.o: private ALL_CFLAGS += $(CYTHON_CFLAGS) $(MYSQLPP_CFLAGS) \
$(TA_CFLAGS)
reflection.o: private ALL_CFLAGS += $(TA_CFLAGS)
ta.o: private ALL_CFLAGS += $(TA_CFLAGS)
main.o: private ALL_CFLAGS += $(MYSQLPP_CFLAGS) $(TA_CFLAGS)

# Implicit rule to generate our object files
%.o: %.cpp mklib 
	@# Everything is compiled with -fPIC so they can be dynamically linked
	$(CXX) $(ALL_CFLAGS) -fPIC -c $(srcdir)/$< -o $(libdir)/$@

# Library target linking flags
interface.so: private EXTRA_LDFLAGS = $(CYTHON_LDFLAGS) -lbots
libbots.so: private EXTRA_LDFLAGS = -ldjango_db -lta
libdjango_db.so: private EXTRA_LDFLAGS = $(MYSQLPP_LDFLAGS)
libreflection.so: private EXTRA_LDFLAGS = $(TA_LDFLAGS) -lta
libta.so: private EXTRA_LDFLAGS = $(TA_LDFLAGS)

# Implicit rule matching C++ library naming convention to compile pure C++
lib%.so: %.o
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$@ $(libdir)/$< -o $(libdir)/$@ \
	$(EXTRA_LDFLAGS)

# Any shared object not matching the C/C++ library naming convention is
# assumed to be a Cython extension; shared objects must match the name of the
# Cython interfaces to avoid runtime errors
%.so: %.o
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$@ $(libdir)/$< -o $(libdir)/$@ \
	$(EXTRA_LDFLAGS)

# Default rule for compiling binaries
%: %.o mkbin
	$(CXX) $(LD_FLAGS) $(libdir)/$< -o $(bindir)/$@ $(EXTRA_LDFLAGS)

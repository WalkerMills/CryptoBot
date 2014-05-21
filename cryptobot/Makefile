# 	Makefile 
#
#		Generic Makefile template
#		Supports Cython, C, C++
#

include config.mk

SRCS = $(foreach dir, $(srcdir), $(wildcard $(dir)/*.cpp)) \
OBJS = $(patsubst src/%.cpp, lib/%.o, $(SRC))

include $(addsuffix /module.mk, $(srcdir))

vpath %.cpp $(srcdir)
vpath %.pyx $(srcdir)
vpath %.thrift $(srcdir)

# Absolute file paths for dynamic libraries
LIB_FILES = $(addprefix $(libdir)/, $(OBJ))

# Absolute file paths for Cython extensions
EXT_FILES = $(addprefix $(libdir)/, $(EXTS))

# Absolute file paths for binary executables
BIN_FILES = $(addprefix $(bindir)/, $(BINS))


# Clear allowed target suffixes
.SUFFIXES:

# Set allowed target suffixes
.SUFFIXES: .c .h .cpp .hh .hpp .o .so

# Declare all phony targets
.PHONY: all clean checkdir install $(libdir) $(bindir) $(THRIFTS)

# Clean build of all (final) install targets
install: clean all

# All (final) targets
all: checkdir $(THRIFTS) $(LIBS) $(EXTS) $(BINS)
	$(RM) $(libdir)/*.o

# Clean up all files
clean:
	@# Remove all make-generated files
	$(RM) $(gendir)/*.{cpp,h} $(libdir)/*.o $(libdir)/*.so $(BIN_FILES)
	@# Remove Python btyecode
	for i in `find . -type f -iname "*.pyc"`; do \
		$(RM) $i; \
	done

# Create directory for containing object files and libraries
$(libdir):
	@# Make libdir if it doesn't already exist
	mkdir -p $(libdir)

# Create directory for containing binaries
$(bindir):
	@# Make bindir if it doesn't already exist
	mkdir -p $(bindir)

checkdir: $(libdir) $(bindir)


# Generate C++ file from a Cython file
%.cpp: %.pyx
	$(CYTHON) $(CYTHON_FLAGS) $< -o $@

# Generate C++ from a Thrift IDL file
$(THRIFTS): %: %.thrift
	$(THRIFT) $(THRIFT_FLAGS) $< 

# Object target dependencies
lib/Bot.o:
lib/bots.o: libcontrol.so libreflection.so librules.so
lib/bots_constants.o:
lib/bots_types.o:
lib/client.o: libbots.so
lib/control.o: libnuodbi.so 
lib/interface.o: libbots.so
lib/nuodbi.o:
lib/reflection.o: libta.so
lib/rules.o: libta.so
lib/server.o: librules.so
lib/ta.o:
lib/worker.o: libnuodbi.so librules.so
lib/test.o: librules.so


# Object target compilation flags 
lib/bots.o: EXTRA_CFLAGS := $(SERIAL_CFLAGS) -D_GLIBCXX_USE_NANOSLEEP
lib/client.o: EXTRA_CFLAGS := -D_GLIBCXX_USE_NANOSLEEP
lib/control.o: EXTRA_CFLAGS := $(THRIFT_CFLAGS)
lib/interface.o: EXTRA_CFLAGS := $(CYTHON_CFLAGS)
lib/server.o: EXTRA_CFLAGS := $(THRIFT_CFLAGS) $(SERIAL_CFLAGS)
lib/test.o: EXTRA_CFLAGS := $(SERIAL_CFLAGS)
lib/worker.o: EXTRA_LDFLAGS := $(SERIAL_CFLAGS) -D_GLIBCXX_USE_NANOSLEEP

lib/%.o: %.cpp
	$(CXX) $(ALL_CXXFLAGS) $(EXTRA_CFLAGS) -fPIC -c $< -o $@

# Library target dependencies
libcontrol.so: lib/Bot.o lib/bots_types.o lib/bots_constants.o

# Library target linking flags
interface.so: EXTRA_LDFLAGS := $(CYTHON_LDFLAGS) -lbots
libbots.so: EXTRA_LDFLAGS := $(SERIAL_LDFLAGS) \
-lcontrol -lnuodbi -lreflection -lrules
libcontrol.so: EXTRA_LDFLAGS := $(THRIFT_LDFLAGS) -lnuodbi
libnuodbi.so: EXTRA_LDFLAGS := $(NUODB_LDFLAGS)
libreflection.so: EXTRA_LDFLAGS := -lta
librules.so: EXTRA_LDFLAGS := $(ALGLIB_LDFLAGS) $(SERIAL_LDFLAGS) -lta \
-lreflection 
libta.so: EXTRA_LDFLAGS := $(TA_LDFLAGS)

# Implicit rule for compiling libraries
lib%.so: lib/%.o
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$(shell basename $@) \
	$(foreach dep, $^, $(libdir)/$(shell basename $(dep))) \
	-o $(libdir)/$(shell basename $@) $(EXTRA_LDFLAGS)

# Any shared object not matching the C/C++ library naming convention is
# assumed to be a Cython extension; shared objects must match the name of the
# Cython interfaces to avoid runtime errors
%.so: lib/%.o
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,lib$@ $< -o $(libdir)/$@ \
	$(EXTRA_LDFLAGS)

# Binary target dependencies
client: librules.so libnuodbi.so
server: lib/Bot.o lib/bots_types.o lib/bots_constants.o lib/worker.o
test: librules.so libbots.so lib/worker.o

# Binary target linking flags
client: EXTRA_LDFLAGS := -lbots -lrules
server: EXTRA_LDFLAGS := $(THRIFT_LDFLAGS) $(SERIAL_LDFLAGS) -lrules -lnuodbi
test: EXTRA_LDFLAGS := $(SERIAL_LDFLAGS) -lbots -lrules -lnuodbi

# Default rule for compiling binaries
$(BINS): %: lib/%.o
	$(CXX) $(LD_FLAGS) $(foreach dep, $^, $(libdir)/$(shell basename $(dep))) \
	-o $(bindir)/$@ $(EXTRA_LDFLAGS) 


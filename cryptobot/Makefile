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
.SUFFIXES: .c .h .cpp .hpp .o .so

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
lib/bots.o: libdjango_db.so libreflection.so
lib/interface.o: libbots.so
lib/reflection.o: libta.so

# Object target compilation flags
lib/bots.o: private ALL_CFLAGS += $(TA_CFLAGS) $(MYSQLPP_CFLAGS)
lib/client.o: private EXTRA_CFLAGS += $(THRIFT_CFLAGS)
lib/django_db.o: private ALL_CFLAGS += $(MYSQLPP_CFLAGS)
lib/interface.o: private ALL_CFLAGS += $(CYTHON_CFLAGS) $(MYSQLPP_CFLAGS) \
$(TA_CFLAGS)
lib/reflection.o: private ALL_CFLAGS += $(TA_CFLAGS)
lib/server.o: private EXTRA_CFLAGS += $(THRIFT_CFLAGS)
lib/ta.o: private ALL_CFLAGS += $(TA_CFLAGS)

lib/%.o: %.cpp
	$(CXX) $(ALL_CXXFLAGS) $(EXTRA_CFLAGS) -fPIC -c $< -o $@

# Library target linking flags
interface.so: private EXTRA_LDFLAGS = $(CYTHON_LDFLAGS) -lbots
libbots.so: private EXTRA_LDFLAGS = -ldjango_db -lta
libdjango_db.so: private EXTRA_LDFLAGS = $(MYSQLPP_LDFLAGS)
libreflection.so: private EXTRA_LDFLAGS = $(TA_LDFLAGS) -lta
libta.so: private EXTRA_LDFLAGS = $(TA_LDFLAGS)

# Implicit rule for compiling libraries from Thrift-generated code
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

server client: lib/Bot.o lib/bots_types.o lib/bots_constants.o
server client: private EXTRA_LDFLAGS += $(THRIFT_LDFLAGS) -lthriftnb -levent

# Default rule for compiling binaries
$(BINS): %: lib/%.o
	$(CXX) $(LD_FLAGS) $(foreach dep, $^, $(libdir)/$(shell basename $(dep))) \
	-o $(bindir)/$@ $(EXTRA_LDFLAGS) 


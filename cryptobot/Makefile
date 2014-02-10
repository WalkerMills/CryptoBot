# 	Makefile 
#
#		Generic Makefile template
#		Supports Cython, C, C++
#

include config.mk

SRCS = $(foreach dir, $(srcdir), $(wildcard $(dir)/*.cpp))
OBJS = $(patsubst src/%.cpp, lib/%.o, $(SRC))

LIBS = 
BINS = server client

include $(addsuffix /module.mk, $(srcdir))

vpath %.cpp $(srcdir)

# Absolute file paths for dynamic libraries
LIB_FILES = $(foreach lib, $(LIBS), $(libdir)/$(lib))

# Absolute file paths for binary executables
BIN_FILES = $(foreach bin, $(BINS), $(bindir)/$(bin))


# Clear allowed target suffixes
.SUFFIXES:

# Set allowed target suffixes
.SUFFIXES: .c .h .cpp .hpp .o .so

# Declare all phony targets
.PHONY: all clean mkgen mklib mkbin install $(THRIFTS)

# Clean build of all (final) install targets
install: clean all

# All (final) targets
all: checkdir $(THRIFTS) $(LIBS) $(EXTS) $(BINS)
	$(RM) $(OBJ_FILES)

# Clean up all files
clean:
	@# Remove all make-generated files
	$(RM) $(OBJ_FILES) $(LIB_FILES) $(EXT_FILES) $(EXT_LINKS) $(BIN_FILES)
	@# Remove Python btyecode
	for i in `find $(srcdir) -type f -iname *.pyc`; do \
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


# Generate C++ from our Thrift IDL files
$(THRIFTS): %: %.thrift
	$(THRIFT) $(THRIFT_FLAGS) $< 

lib/server.o lib/client.o: private EXTRA_CFLAGS += $(THRIFT_CFLAGS)

lib/%.o: %.cpp
	$(CXX) $(ALL_CXXFLAGS) $(EXTRA_CFLAGS) -fPIC -c $< -o $@

# Implicit rule for compiling libraries from Thrift-generated code
lib%.so: %.o
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$(shell basename $@) \
	$(foreach dep, $^, $(libdir)/$(shell basename $(dep))) \
	-o $(libdir)/$(shell basename $@) $(EXTRA_LDFLAGS)

server client: lib/Bot.o lib/bots_types.o lib/bots_constants.o
server client: private EXTRA_LDFLAGS += $(THRIFT_LDFLAGS)

# Default rule for compiling binaries
$(BINS): %: lib/%.o
	$(CXX) $(LD_FLAGS) $(foreach dep, $^, $(libdir)/$(shell basename $(dep))) \
	-o $(bindir)/$@ $(EXTRA_LDFLAGS) 


include ../config.mk

# Directory containing source files
srcdir = $(CURDIR)

# Directory containing header files
includedir = $(CURDIR)

# Destination directory for object files and libraries
libdir = $(DESTDIR)$(srcdir)/../lib


SRCS = Bot.cpp bot_client.cpp bot_server.cpp bots_constants.cpp bots_types.cpp
OBJS = $(patsubst %.cpp,%.o, $(SRCS))
LIBS = libbot_server.so libbot_client.so

# Absolute file paths for source files
SRC_FILES = $(foreach src, $(SRCS), $(srcdir)/$(src))

# Absolute file paths for object files
OBJ_FILES = $(foreach obj, $(OBJS), $(libdir)/$(obj))

# Absolute file paths for dynamic libraries
LIB_FILES = $(foreach lib, $(LIBS), $(libdir)/$(lib))


.PHONY: all clean mklib install


install: clean all

all: $(LIBS)
	$(RM) $(OBJ_FILES)

# Clean up all files
clean:
	@# Remove all make-generated files
	$(RM) $(OBJ_FILES) $(LIB_FILES)
	@# If libdir is empty, remove it
	if [[ -d $(libdir) && -z "`ls -A $(libdir)`" ]]; then \
	    $(RM) -r $(libdir); \
	fi

# Create directory for containing object files and libraries
mklib:
	@# Make libdir if it doesn't already exist
	test -d $(libdir) || mkdir $(libdir)


%.o: %.cpp mklib
	$(CXX) $(ALL_CFLAGS) $(THRIFT_CFLAGS) -fPIC -c $(srcdir)/$< -o $(libdir)/$@

libbots_server.so: private EXTRA_LDFLAGS += $(THRIFT_LDFLAGS)
libbots_client.so: private EXTRA_LDFLAGS += $(THRIFT_LDFLAGS)

# Implicit rule matching the C/C++ dynamic library naming convention
lib%.so: %.o $(OBJS)
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$@ \
	$(foreach dep, $^, $(libdir)/$(dep)) -o $(libdir)/$@ $(EXTRA_LDFLAGS) 

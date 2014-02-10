#ifndef __REFLECTION_HH__
#define __REFLECTION_HH__

#include <map>
#include <string>

#include "ta.hh"

class ta_reflector {
public:
    static std::map<std::string, ta::ta *> factory_map;

    static ta::ta *get(std::string name);
};

static ta::ta *reflect(std::string name);

#endif

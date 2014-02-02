#ifndef REFLECTION_HH
#define REFLECTION_HH

#include <map>
#include <string>

#include "ta_wrapper.hh"

class TAReflector {
private:
    static std::map<std::string, TAWrapper *> factoryMap;

public:
    TAWrapper *reflect(std::string name);
};

#endif

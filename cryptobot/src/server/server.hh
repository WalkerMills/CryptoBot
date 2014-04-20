#ifndef __SERVER_HH__
#define __SERVER_HH__

#include "Bot.h"

#define TPORT 9090


class BotHandler : virtual public server::BotIf {
public:
    BotHandler();

    void run(const int32_t id);
    void stop(const int32_t id);
};

#endif
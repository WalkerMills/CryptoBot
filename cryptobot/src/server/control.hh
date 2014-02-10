#ifndef __CONTROL_HH__
#define __CONTROL_HH__

#include <deque>
#include <ctime>


namespace control {
    class host {
    private:
        std::string domain;
        int port;
        bool connected;

    public:
        host(std::string domain, int port);
        ~host();

        BotClient *connect();
        void disconnect();

        bool active();
        time_t ping();
    };

    class network {
    private:
        std::deque<host *> hosts;
        db::bot bot_db;

    public:
        network();
        ~network();

        void add_host(host *h);
        void remove_host(std::string domain);

        host *route();
    };
}

#endif // __CONTROL_HH__
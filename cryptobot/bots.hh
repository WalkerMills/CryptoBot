#ifndef BOTS_HH
#define BOTS_HH

#include <map>
#include <string>
#include <vector>

#include "ta_libc.h"

using namespace std;

typedef TA_RETcode (*func_t)();
typedef std::map<string,funct_t> func_map_t;

func_map_t func_map;
func_map["TA_AVGPRICE"] = &TA_AVGPRICE;
func_map["TA_EMA"] = &TA_EMA;
func_map["TA_MACD"] = &TA_MACD;
func_map["SMA"] = &TA_SMA;

class TaInd {
private:
    char *function;

    int start;
    int end;
    vector<double> in;
    int optInTimePeriod;
    int optInMAType;

public:
    TaInd (char *function, int start, int end, const double *in,
           int optInTimePeriod, int optInMAType);

    void Parse (char filename, int start, int stop); 
};

class AlgoBot {

    public: 
    char AlgoName;

    vector<TaInd *> taQueue;
    
    boolean update() {
        for (TaInd * : taQueue) {

        } 
    };
};

AlgoBot::AlgoBot (char botname) {
    AlgoName = botname;
}

class User {
    public: 



    AlgoBot *create_bot(char botName) {
        return AlgoBot (botName);
    }

    TaInd *addInd(char indName, start, end, data, optTP, optMA) {
        new_ind = new *TaInd;
        new_ind = TaInd(ind_name, start, end, data, optTP, optMA);
        return *new_ind;
    }

    TaInd *listInd() {
        //iterate through list of indicators and print it out
    }

    Boolean deleteBot(char botName) {

    }
};

#endif // BOTS_HH

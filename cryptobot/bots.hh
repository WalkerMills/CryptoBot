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

enum str AlgoRuleType {ConstComp, VarComp, Exist};

class DimensionError: public exception {
    virtual const char* what() const throw() {
        return "The dimensions are mismatched.";
    }
} DimensionError;

class RuleTypeError: public exception {
    virtual const char* what() const throw() {
        return "The algo rule type does not match the arguments"
    }
} TypeError;

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

};

class AlgoBot {

    public: 
    char AlgoName;

    vector<TaInd *> taQueue;
    
    boolean update() {
        for (TaInd *indicator : taQueue) {

        } 
    }

    vector<int> crossover(int indicator1[], int indicator2[]) {
        
        if (indicator1.size() != indicator2.size()) {
            throw DimensionError;
        }

        vector<int> crossovers;
        int size = indicator1.size();
        int difference = indicator1[0] - indicator2[0];
        int sign;

        if (difference > 0) {
            sign = 1;
        }
        else {
            sign = -1;
        }

        while(i = 1; i++; i < size) {
            difference = indicator1[i] - indicator2[i];
            if ((difference > 0 and sign == -1) or (difference < 0 and sign == 1)) {
                crossovers.insert(i);
                sign = -sign;
            }
        }
        return crossovers;
    }

    boolean existence(TaInd *indicator) {

    }

};

AlgoBot::AlgoBot (char botname) {
    AlgoName = botname;
}

class AlgoRule (TaInd indicator1, TaInd indicator2 = NULL, AlgoRuleType type, constant = NULL) {
    if (indicator2 != NULL and AlgoRuleType != 'VarComp') {
        throw TypeError;
    }

    if (AlgoRuleType = 'ConstComp' and constant == NULL) {
        throw TypeError;
    }

    if (indicator2 == NULL and AlgoRuleType == 'VarComp') {
        throw TypeError;
    }


    TaInd indicator1 = indicator1;
    TaInd indicator2 = indicator2;
    AlgoRuleType = type;
    constant = constant;

    public: 

    AlgoRule ()


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

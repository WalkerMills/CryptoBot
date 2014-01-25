#ifndef BOTS_HH
#define BOTS_HH

#include <map>
#include <string>
#include <vector>
#include <iostream>
#include <ctime>

#include "ta_libc.h"

using namespace std;

// Setting up function map of the TA_lib functions
typedef TA_RETcode (*func_t)();
typedef map<string,funct_t> func_map_t;

func_map_t func_map;
func_map["TA_AVGPRICE"] = &TA_AVGPRICE;
func_map["TA_EMA"] = &TA_EMA;
func_map["TA_MACD"] = &TA_MACD;
func_map["SMA"] = &TA_SMA;


// Enum for the AlgoRule class types
enum string AlgoRuleType {ConstComp, VarComp, Exist};


// Defining Errors
class DimensionError: public exception {
    virtual const string * what() const throw() {
        return "The dimensions are mismatched.";
    }
} DimensionError;

class RuleTypeError: public exception {
    virtual const string * what() const throw() {
        return "The algo rule type does not match the arguments"
    }
} TypeError;


// TaInd class. Each one represents a single technical indicator
// along with the parameters that go with it. 
class TaInd {
private:
    string function;

    int start;
    int end;
    vector<double> in;
    int optInTimePeriod;
    int optInMAType;


public:
    TaInd (string *function, int start, int end, const double *in,
           int optInTimePeriod, int optInMAType);

    double *results();
};


// AlgoBot Class. Each one represents a single algorithmic trading
// bot. Each of them consists of a vector of AlgoRules that they 
// constantly execute on. 
class AlgoBot {
    string algoName;

    vector<AlgoRule *> taQueue;
    
    vector<double> update(); 

    vector<double> crossover(double *indicator1, double *indicator2) {
    };

    vector<double> existence(TaInd *indicator) {
    };

    vector<double> boundcomp(double *indicator1, double constant) {
    };

public: 
    AlgoBot (string name);

};


// AlgoRule Class. Each instance represents a rule based on either 1 or 2 technical 
// indicators. The type is one of the enumerated types above, and if necessary, the
// constant field is for arguments for constant comparison.

class AlgoRule () {
    int id;
    TaInd indicator1; 
    TaInd indicator2;
    AlgoRuleType type;
    double constant;

public: 
    AlgoRule (TaInd *indicator1, TaInd *indicator2 = NULL, AlgoRuleType *type, constant = NULL);

}





// User class. This class contains the functions that users will be allowed
// to call. For instance, they will be allowed to create bots, add and delete
// Algo Rules, list all the bots and all the Algo Rules for each bot, and to
// delete bots. 
class User {
    
    vector<AlgoBot *> botList;

    public: 

    AlgoBot *createBot(string botName);

    TaInd *addRule(string indName, start, end, data, optTP, optMA);

    TaInd *removeRule(string indName);

    TaInd *listRules(string *botName);

    Boolean deleteBot(string botName);

    void runBot(string botName);
};

#endif // BOTS_HH

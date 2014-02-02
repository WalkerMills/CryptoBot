#ifndef BOTS_HH
#define BOTS_HH 

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <mysql++.h>

#include <ctime>

#include "ta_libc.h"

using namespace std;

// Setting up function map of the TA_lib functions
typedef TA_RetCode (*func_t)(int, int, const double *, int, int*, int *, 
                             double *);

typedef struct _retValue {
    double *out;
    int begin;
    int size;
} retValue;

typedef unordered_map<string, func_t> func_map_t;

func_map_t func_map;

static void makeMap() {
    // func_map["TA_AVGPRICE"] = &TA_AVGPRICE;
    func_map["TA_EMA"] = &TA_EMA;
    // func_map["TA_MACD"] = &TA_MACD;
    func_map["SMA"] = &TA_SMA;
}

// Enum for the AlgoRule class types
enum AlgoRuleType {ConstComp, VarComp, Exist};

//Enum for the Actions class types
enum ActionType {Buy, Sell};


// Defining Errors
class DimensionError: public exception {
    virtual const char * what() const throw() {
        return "The dimensions are mismatched.";
    }
} DimensionError;

class RuleTypeError: public exception {
    virtual const char * what() const throw() {
        return "The algo rule type does not match the arguments";
    }
} TypeError;


// TaInd class. Each one represents a single technical indicator
// along with the parameters that go with it. 
class TaInd {
private:
    string function;

    int start;
    int end;
    const double *in;
    int optInTimePeriod;
    int optInMAType;

public:
    TaInd (string function, int start, int end, const double *in,
           int optInTimePeriod, int optInMAType);

    double data ();

    retValue *results();
};


// AlgoRule Class. Each instance represents a rule based on either 1 or 2
// technical indicators. The type is one of the enumerated types above, and if
// necessary, the constant field is for arguments for constant comparison.
class AlgoRule {
public: 
    int id;
    TaInd *indicator1; 
    TaInd *indicator2;
    AlgoRuleType type;
    double constant;

    Actiontype action;
    double actionAmount;
    

    AlgoRule (TaInd *indicator1, AlgoRuleType type, TaInd *indicator2, 
              double constant, Actiontype action, double actionAmount);

    TradeCall (Actiontype action, double actionAmount);

};


// AlgoBot Class. Each one represents a single algorithmic trading
// bot. Each of them consists of a vector of AlgoRules that they 
// constantly execute on. 
class AlgoBot {
public: 
    string algoName;
    vector<AlgoRule *> *taQueue;
    
    AlgoBot(string name);

    bool crossover(retValue *output1, retValue *output2);
    bool existence(retValue *output);
    bool constcomp(retValue *output, double constant);
    void update(); 
};


// User class. This class contains the functions that users will be allowed
// to call. For instance, they will be allowed to create bots, add && delete
// Algo Rules, list all the bots && all the Algo Rules for each bot, && to
// delete bots. 
class User {
private:
    const char *user;
    mysqlpp::Connection *conn;

public:
    vector<AlgoBot *> *botList;

    User(const char *user, const char *db, const char *server, 
         const char *dbUser, const char *password, unsigned port);

    void createBot(string botName);
    void addRule(string botName, TaInd *indicator1, AlgoRuleType type, 
                 TaInd *indicator2, double constant);
    bool removeRule(string indName, time_t id);
    void listRules(string botName);

    bool deleteBot(string botName);
    void runBot(string botName);
};

#endif // BOTS_HH

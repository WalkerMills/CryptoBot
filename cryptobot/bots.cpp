#include "bots.hh"

#include <string>
#include <ctime>
#include <random>

using namespace std;


// TaInd functions
TaInd::TaInd(string function, int start, int end, const double *in,
             int optInTimePeriod = TA_INTEGER_DEFAULT, 
             int optInMAType = TA_INTEGER_DEFAULT) {
	this->function = function;
	this->start = start;
	this->end = end;
	this->in = in;
}

double *TaInd::results() {
    end = time();
    start = (this->end - this->start) * 3600;
    double *data = ;//Database data for that time period
    double *result = func_map[this->function](0, data::size(), data, 
    	this->optInTimePeriod, this->optInMAType);
    return result;
}


// AlgoBot Functions
AlgoBot::AlgoBot (string botname) {
    this->algoName = botname;
}

vector<double> AlgoBot::update() {
    for (AlgoRule *rule : taQueue) {
        switch (rule->AlgoRuleType) {
            case ConstComp:
                double *result = boundcomp(rule->indicator1.results(), rule->constant);

            case VarComp:
                double *result = crossover(rule->indicator1.results(), rule->indicator2.results());

            case Exist:
                double *result = existence(rule->indicator1.results());

            default: 
                break;
        }
    }    
}

vector<double> AlgoBot::crossover(double *indicator1, double *indicator2){
        
    if (indicator1.size() != indicator2.size()) {
        throw DimensionError;
    }

    vector<double> crossovers;
    int size = indicator1.size();
    double difference = indicator1[0] - indicator2[0];
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




// AlgoRule Functions
AlgoRule::AlgoRule (TaInd *indicator1, TaInd *indicator2 = NULL, AlgoRuleType *type, constant = NULL) {
    if (indicator2 != NULL and AlgoRuleType != 'VarComp') {
        throw TypeError;
    }

    if (AlgoRuleType = 'ConstComp' and constant == NULL) {
        throw TypeError;
    }

    if (indicator2 == NULL and AlgoRuleType == 'VarComp') {
        throw TypeError;
    }

    this->indicator1 = indicator1;
    this->indicator2 = indicator2;
    this->type = type;
    this->constant = constant;
    this->id = time();

}


// User Functions

User::User() {
	// constructor
}

User::createBot(string botName) {
	botList.push_back(AlgoBot(botName));
}

User::addRule(string botName, string indName1, string indName2, int start, int end, 
	double *data, int optTP, int optMA) {
	for (AlgoBot *bot : this->botList):
		if bot->algoName == botName:
			bot->taQueue.push_back(AlgoRule(indName1, indName2, start, end, data, optTP, optMA));
}

Boolean User::removeRule(string botName, time_t id) {
	for (AlgoBot *bot : this->botList):
		if bot->algoName == botName:			
			for (AlgoRule *rule : taQueue) :
				if rule->id == id:
					taQueue.erase(rule);
					return true;
				else:
					return false;
}

// not sure about type def for this one
void User::listRules(string botName) {
	for (AlgoBot *bot : this->botList) :
		if bot->algoName == botName:
			for (AlgoRule *rule : bot->taQueue) :
				print taQueue;
				return;
}

Boolean User::deleteBot(string botName) {
	for (AlgoBot *bot : this->botList) :
		if bot->algoName == botName:
			botList.erase(bot->algoName);
			return true
		else 
			return false
}

void User::runBot(string botName) {
	for (AlgoBot *bot : this->botList) :
		if bot->algoName == botName:
			while true:
				bot.update();
			return;
}
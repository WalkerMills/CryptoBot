#include <iostream>
#include <random>
#include <string>
#include <vector>

#include <cstdlib>
#include <ctime>

#include "bots.hh"

using namespace std;


// TaInd functions
TaInd::TaInd(string function, int start, int end, const double in[],
             int optInTimePeriod = TA_INTEGER_DEFAULT, 
             int optInMAType = TA_INTEGER_DEFAULT) {
    this->function = function;
    this->start = start;
    this->end = end;
    this->in = in;
    this->optInTimePeriod = optInTimePeriod;
    this->optInMAType = optInMAType;
}

retValue *TaInd::results() {
    TA_RetCode retCode;
    retCode = TA_Initialize();
    if (retCode != TA_SUCCESS) {
        cerr << "TA-Lib initialization failed with return code " << retCode
             << endl;
        exit(EXIT_FAILURE);
    }

    int outBegIdx, outNbElement;
    int delta = this->end - this->start;
    double *out = new double[delta];
    time_t end;

    time(&end);
    retCode = (*func_map[this->function])(0, end, this->in, 
                                          this->optInTimePeriod, &outBegIdx, 
                                          &outNbElement, out);

    if (retCode != TA_SUCCESS) {
        cerr << "Call to " << this->function << " failed with return code " 
             << retCode << endl;
        exit(EXIT_FAILURE);
    }

      retValue *output = new retValue;
      output->out = out;
      output->begin = outBegIdx;
      output->size = outNbElement;

    return output;
}


// AlgoBot Functions
AlgoBot::AlgoBot (string botname) {
    this->algoName = botname;
    this->taQueue = new vector<AlgoRule *>;
}

vector<double> AlgoBot::crossover(retValue *output1, retValue *output2){
        
    if (output1->size != output2->size) {
        throw DimensionError;
    }

    vector<double> crossovers;
    double difference = output1->out[output1->begin] - 
                        output2->out[output2->begin];
    int sign;

    if (difference > 0) {
        sign = 1;
    }
    else {
        sign = -1;
    }

    for (int i = 1; i < output1->size; i++) {
        difference = output1->out[output1->begin] - 
                     output2->out[output2->begin];
        if ((difference > 0 && sign == -1) || (difference < 0 && sign == 1)) {
            crossovers.push_back(i); 
            sign = -sign;
        }
    }
    return crossovers;
}

vector<double> AlgoBot::existence(retValue *output) {
    vector<double> out;
    return out;
}

vector<double> AlgoBot::boundcomp(retValue *output, double constant) {
    vector<double> out;
    return out;
}

void AlgoBot::update() {
    vector<double> result;

    for (AlgoRule *rule : *taQueue) {
        switch (rule->type) {
            case ConstComp:
                result = this->boundcomp(rule->indicator1->results(), 
                                         rule->constant);
                break;
            case VarComp:
                result = this->crossover(rule->indicator1->results(), 
                                            rule->indicator2->results());
                break;
            case Exist:
                result = this->existence(rule->indicator1->results());
                break;

            default:
                break;
        }
    }
}

// AlgoRule Functions
AlgoRule::AlgoRule (TaInd *indicator1, AlgoRuleType type, 
                    TaInd *indicator2 = NULL, double constant = 0) {
    if (indicator2 != NULL && type != VarComp) {
        throw TypeError;
    }

    if (type == ConstComp && constant == 0) {
        throw TypeError;
    }

    if (indicator2 == NULL && type == VarComp) {
        throw TypeError;
    }

    time_t id;
    time(&id);

    this->indicator1 = indicator1;
    this->indicator2 = indicator2;
    this->type = type;
    this->constant = constant;
    this->id = id;
}


// User Functions

User::User() {
    this->botList = new vector<AlgoBot *>;
}

void User::createBot(string botName) {
    this->botList->push_back(new AlgoBot(botName));
}

void User::addRule(string botName, TaInd *indicator1, AlgoRuleType type, 
                   TaInd *indicator2 = NULL, double constant = 0) {
    for (AlgoBot *bot : *this->botList) {
        if (bot->algoName == botName) {
            bot->taQueue->push_back(new AlgoRule(indicator1, type, indicator2, 
                                             	 constant));
        }
    }
}

bool User::removeRule(string botName, time_t id) {
	int botIdx = -1;
	int ruleIdx = -1;

	for (int i = 0; i < this->botList->size(); i++) {
		if (this->botList->at(i)->algoName != botName) {
			continue;
		}

		for (int j = 0; j < this->botList->at(i)->taQueue->size(); j++) {
			if (this->botList->at(i)->taQueue->at(j)->id == id) {
				botIdx = i;
				ruleIdx = j;
				break;
			}
		}
	}

	if (botIdx != -1 && ruleIdx != -1) {
		this->botList->at(botIdx)->taQueue->erase(
		    this->botList->at(botIdx)->taQueue->begin() + ruleIdx);
		return true;
	} else {
		return false;
	}
}

// not sure about type def for this one
void User::listRules(string botName) {
    for (AlgoBot *bot : *this->botList) {
        if (bot->algoName == botName) {
            for (AlgoRule *rule : *bot->taQueue) {
                // print taQueue;
                return; 
            }
        }
    }
}

bool User::deleteBot(string botName) {
	int index = -1;

    for (int i = 0; i < this->botList->size(); i++) {
        if (this->botList->at(i)->algoName == botName) {
        	index = i;
        	break;
        }
    }

    if (index != -1) {
    	this->botList->erase(this->botList->begin() + index);
    	return true;
    } else {
    	return false;
    }
}

void User::runBot(string botName) {
    for (AlgoBot *bot : *this->botList) {
        if (bot->algoName == botName) {
            while (true) {
                bot->update();
            	return; 
        	}
        }
    }
}

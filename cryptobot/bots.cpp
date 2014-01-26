#include <iostream>
#include <random>
#include <string>
#include <vector>

#include <sys/types>
#include <sys/socket>
#include <sys/un>

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <mysql++>
#include <query>

#include "bots.hh"

// Defining socket path
#define SOCK_PATH "/tmp/cryptobot.sock"


using namespace std;
using namespace mysqlpp;

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

double *TaInd::data (time_t time) {
    Query query = this->conn->query(
        "SELECT price FROM cryptobot_trade ORDER BY time DESC LIMIT 500;");
    if (StoreQueryResult res = query.store()) {
        StoreQueryResult::const_iterator it;
        vector<double> output;
        
        for (it = res.begin(); it != res.end(); ++it) {
            Row row = *it;
            output.push_back(row[0]);
        }

        const double *outputArray = output.data();
        return outputArray;
    }
    else {
        cerr << "Failed to get item list: " << query.error() << endl;
    }

    return NULL;
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
    retCode = (*func_map[this->function])(0, end, this->data(), 
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

bool AlgoBot::crossover(retValue *output1, retValue *output2){
	bool trade = false;
    double difference = output1->out[output1->end] - 
                        output2->out[output2->end];
    int sign;

    if (difference > 0) {
        sign = 1;
    }
    else {
        sign = -1;
    }

    for (int i = output1->size(); i > (output1->size() - 100); i--) {
        difference = output1->out[output1->begin] - 
                     output2->out[output2->begin];
        if ((difference > 0 && sign == -1) || (difference < 0 && sign == 1)) {
            trade = true;
            break;
        }
    }
    return trade;
}

bool AlgoBot::existence(retValue *output) {
    vector<double> out;
    return out;
}

bool AlgoBot::boundcomp(retValue *output, double constant) {
    vector<double> out;

    double difference = constant - output->out[output->begin];
    int sign;
    if (difference > 0) {
    	sign = 1;
    }
    else {
    	sign = -1;
    }

    for (int i = 1; i < output->size, i++) {
    	difference = constant - output->out[output->begin];
    	if ((difference > 0 && sign == -1) || 
    	    (difference < 0 && sign == 1)) {
    		out.push_back(i);
    		sign == -sign;
    	}
    }
    return out;
}

void AlgoBot::update() {

    for (AlgoRule *rule : *taQueue) {
        switch (rule->type) {
            case ConstComp:
                result = this->boundcomp(rule->indicator1->results(), 
                                         rule->constant);
                if (result == true) {
                	rule->TradeCall(rule->action, rule->actionAmount);
                }

            case VarComp:
                result = this->crossover(rule->indicator1->results(), 
                                            rule->indicator2->results());
                if (result == true) {
                	rule->TradeCall(rule->action, rule->actionAmount);
                }
       
            case Exist:
                result = this->existence(rule->indicator1->results());
                if (result == true) {
                	rule->TradeCall(rule->action, rule->actionAmount);
                }

            default:
                break;
        }
    }
}

// AlgoRule Functions
AlgoRule::AlgoRule (TaInd *indicator1, AlgoRuleType type, 
                    TaInd *indicator2 = NULL, double constant = 0, 
                    ActionType action, double amount) {
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

    this->action = action;
    this->actionAmount = amount;
}

// TODO: get Unix socket communication with Django working
int AlgoRule::TradeCall (ActionType action, double amount) {
	int s, t, len;
	struct sockaddr_un remote;
	char str[100];

	if ((s = socket(AF_UNIX, SOCK_STREAM, 0)) == -1) {
		cerr << "Error: socket failure" << endl;
		exit(EXIT_FAILURE);
	}

	remote.sun_family = AF_UNIX;
	strcpy(remote.sun_path, SOCK_PATH);
	len = strlen(remote.sun_path) + sizeof(remote.sun_family);
	if (connect(s, (struct sockaddr *)&remote, len) == -1) {
		cerr << "Error: connection failure" << endl;
		exit(1);
	}

	printf("connected.\n");

	while(printf("> "), fgets(str, 100, stdin), !feof(stdin)) {
		if (send(s, str, strlen(str), 0) == -1) {
			fprintf(stderr, "send");
			exit(1);
		}

		if ((t=recv(s, str, 100, 0)) > 0) {
			str[t] = '\0';
			fprintf("echo> %s", str);
		}

		else {
			if (t < 0){
				fprintf(stderr, "recv");
			}
			else fprintf("Server closed connection\n");
			exit(1);
		}
	}

	send(action, amount);
}

// User Functions

User::User(const char *user, const char *db, const char *server, 
           const char *dbUser, const char *password, unsigned port) {
	makeMap();
	this->user = user;
    this->botList = new vector<AlgoBot *>;
    this->conn = new Connection(db, server, dbUser, password, port);
}

User::~User() {
	delete conn;
}

void User::createBot(string botName) {
    this->botList->push_back(new AlgoBot(botName));
    
    Query query = this->conn->query();
    query << "INSERT INTO cryptobot_bot VALUES ( \"" << this->user << "\", "
          << "\"" << botName << "\", DEFAULT, NULL );";
	query.execute();
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
    	Query query = this->conn->query();
    	query << "DELETE FROM cryptobot_bot WHERE username=" << self.user
    	      << " AND name=" << botName << ";";
    	query.execute();
    	return true;
    } else {
    	return false;
    }
}

void User::runBot(string botName) {
    for (AlgoBot *bot : *this->botList) {
        if (bot->algoName == botName) {
            while (true) {
            	// TODO: fork update loop and update the bot table
                bot->update();
            	return; 
        	}
        }
    }
}

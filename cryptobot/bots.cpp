#include "ta_libc.h"
#include <vector>

global typedef TA_RETcode (*func_t)();
global typedef std::map<std::string,funct_t> func_map_t;

func_map_t func_map;
func_map["TA_AVGPRICE"] = &TA_AVGPRICE;
func_map["TA_EMA"] = &TA_EMA;
func_map["TA_MACD"] = &TA_MACD;
func_map["SMA"] = &TA_SMA;

class TaInd {
	char* function = "function name";

	int startIdx;
	int endIdx;
	const double inReal[];
	int optInTimePeriod;
	int optInMAType;

	public:
	void Parse (char filename, int start, int stop) {
		std::string filename = "/parse.py";
		std::string command = "python ";
		command += filename;
		system(command.c_str());		
	};

	TaInd (char, int, int, const double, int, int);	
};

TaInd::TaInd (char name, int startIdx, int endIdx,const double inReal[], int optInTimePeriod, int optInMAType) {
	function = name;
	startIdx = startIdx;
	endIdx = endIdx;
	inReal[] = inReal[];
	optInTimePeriod = optInTimePeriod;
	optInMAType = optInMAType;
};


class AlgoBot {

	public: 
	char AlgoName;

	*TaInd ind_list[];
	
	boolean update() {
		for i in tech_ind[]: 
			check i
	};
};

AlgoBot::AlgoBot (char botname) {
	AlgoName = botname;
}

class User {
	public: 



	AlgoBot* create_bot(char botName) {
		return AlgoBot (botName);
	}

	TaInd* addInd(char indName, start, end, data, optTP, optMA) {
		new_ind = new *TaInd;
		new_ind = TaInd(ind_name, start, end, data, optTP, optMA);
		return *new_ind;
	}

	TaInd* listInd() {
		//iterate through list of indicators and print it out
	}

	Boolean deleteBot(char botName) {

	}
};

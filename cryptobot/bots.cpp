#include "bots.hh"

#include <string>

using namespace std;

TaInd::TaInd(char *function, int start, int end, const double *in,
             int optInTimePeriod, int optInMAType) {
	this->function = function;
	this->start = start;
	this->end = end;
	this->in = in;
}

void TaInd::Parse(char filename, int start, int stop) {
    string filename = "/parse.py";
    string command = "python ";
    command += filename;
    system(command.c_str());        
};

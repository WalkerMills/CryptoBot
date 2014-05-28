#include <algorithm>
#include <array>
#include <chrono>
#include <string>
#include <thread>
#include <iostream>
#include <vector>

#include <libalglib/statistics.h>

#include "nuodbi.hh"
#include "reflection.hh"
#include "rules.hh"


action_t identity_(action_t type) {
    return type;
}

namespace bots {

// Rule Class
rule::rule() {
    this->start = 0;
    this->end = 0;
    this->indicators = new std::vector<ta::ta *>();
}

rule::rule(action_t action, double amount) {
    this->start = 0;
    this->end = 0;
    this->indicators = new std::vector<ta::ta *>();
    this->action = action;
    this->amount = amount;
}

rule::~rule() {
    delete this->indicators;
}


// SMA subclass
sma::sma() {
    this->indicators = new std::vector<ta::SMA *>();   
}

sma::sma(action_t action, double amount) {
    this->action = action;
    this->amount = amount;
    this->indicators = new std::vector<ta::SMA *>();
}

void sma::add_indicator(int period) {
    ta::SMA *new_sma = (ta::SMA *) reflect("SMA");
    new_sma->optInTimePeriod = period;
    this->indicators->push_back(new_sma);
}

void sma::set_period(int index, int period) {
    this->indicators->at(index)->optInTimePeriod = period;
}

void sma::update_indices(int start, int end) {
    for ( std::vector<ta::SMA *>::iterator it = this->indicators->begin();
          it != this->indicators->end(); ++it ) {
        (*it)->update_index(start, end);
    }
}

ta::SMA *sma::get_indicator(int index) {
    return this->indicators->at(index);
}

std::vector<std::pair<int, double>> *sma::run_sma(int index, timescale_t scale) {
    ta::SMA *indicator = this->indicators->at(index); 

    // Check if indicator has parameters
    if ( indicator->start() == 0 && indicator->end() == 0 && indicator->optInTimePeriod) {
        std::cerr << "Error: this TA function has no parameters" << std::endl;
        exit(EXIT_FAILURE);
    }

    // Initialize variables, including database.
    int begID = indicator->start();
    int endID = indicator->end();
    int windows = (endID - begID) / 900;
    db::price *price_db = this->resolve(scale);

    // Pull the necessary data
    NuoDB::ResultSet *result = price_db->get_range(begID, endID);

    // Check our results
    if ( !result->next() ) {
        std::cerr << "Error: no rows found for times: " << begID 
                  << ", " << endID << std::endl;
        exit(EXIT_FAILURE); 
    }

    // Initialize returned data array
    double *data = new double [windows + 1];
    int *times = new int [windows + 1];
    double *resultData = new double [windows + 1]; 
    int outBegIdx;
    int outNBElement;
    // Insert data from database into indicator
    indicator->update(data, indicator->optInTimePeriod, &outBegIdx, 
                      &outNBElement, resultData);

    // Populate array
    int i = 0;
    double price;
    int tid;
    if ( !result->next() ) {
        std::cerr << "THERE IS NOTHING IN RESULT" << std::endl;
    }

    while ( result->next() ) {
        tid = result->getInt(1);
        price = result->getDouble(2);
        times[i] = tid; 
        data[i] = price;
        ++i;
    }
    std::cout << "This is how many data points: " << i << std::endl;

    indicator->update_index(0, i);
    // Run indicator
    TA_RetCode retcode = indicator->run();
    if ( retcode != TA_SUCCESS ) { 
        std::cerr << "Error: TA failed with error code " << retcode 
                  << std::endl;
        exit(EXIT_FAILURE);
    }        

    // Now, we create a vector and push back the unix time and return 
    // data points. 
    std::vector<std::pair<int, double>> *output = 
        new std::vector<std::pair<int, double>>();
    output->reserve(outNBElement); 

    int *forward = times + indicator->optInTimePeriod;
    for ( i = 0; i < outNBElement; ++i ) {
        std::pair <int, double> datapair = 
            std::make_pair(forward[i], resultData[i]);
        output->push_back(datapair);
    }

    // Return variables and close out memory. 
    std::cout << "This is how many return points: " << i << std::endl;
    result->close();
    delete price_db;
    delete data;
    delete times;
    return output;
}

std::vector<int> *sma::crossover(int index1, int index2, timescale_t scale) {
    // Find indicators
    ta::SMA *ind1 = this->indicators->at(index1);
    ta::SMA *ind2 = this->indicators->at(index2);

    // The inddiff is the amount we need to add to the index of the
    // longer dataset in order to have a point to compare at each time
    // We switch the indexes so that the first indicator has a longer 
    // optInTimePeriod. 
    int inddiff = std::abs(ind1->optInTimePeriod - ind2->optInTimePeriod);
    if (ind1->optInTimePeriod < ind2->optInTimePeriod) {
        int x = index1;
        index1 = index2;
        index2 = x;
    }

    // Get crossover points from run.
    std::vector<std::pair<int, double>> *data1 = this->run_sma(index1, scale);
    std::cout << "first indicator ran" << std::endl;
    std::vector<std::pair<int, double>> *data2 = this->run_sma(index2, scale);
    std::cout << "second indicator ran" << std::endl;

    int endind = std::min(data1->size(), data2->size());
    std::vector<int> *crosses = new std::vector<int>();
    std::vector<int> *final_similars = new std::vector<int>();
    int i = 0;

    // Here, we set which dataset starts above the other. Then, we use
    // if statements to check if the points cross, and if they do, we 
    // push that time onto a vector and change the variable that
    // identifies which is currently on top. 
    int currHigh;
    if ( data1->at(0).second > data2->at(inddiff).second ) currHigh = 1;
    else currHigh = 2;

    for ( i = 0; i < endind; ++i ) {
        if ( data1->at(i).second > data2->at(i + inddiff).second ) {
            if ( currHigh == 2 ) {
                crosses->push_back(data1->at(i).first);
                currHigh = 1;
            }
        }

        else if ( data1->at(i).second < data2->at(i + inddiff).second ) {
            if ( currHigh == 1 ) {
                crosses->push_back(data1->at(i).first);
                currHigh = 2;
            }
        }
    }

    for ( i = 0; i < crosses->size(); ++i ) {
        // Get similar for each element
        std::vector<std::pair<int, double>> *crossovers = 
            this->return_similar(crosses->at(i), SIXTY);
        int currInd = (crosses->at(i) - this->start) / (3600);
        double refSlope = resultData[currInd + 1] - resultData[currInd];  
        double upSlope = refSlope * 1.25;
        double downSlope = refSlope * 0.75;

        for ( int j = 0; j < crossovers->size(); ++j ) {
            int similarIndex = (crossovers->at(j).first - this->start) / 3600;
            double simSlope = 
                resultData[similarIndex + 1] - resultData[similarIndex];

            if ( simSlope >= downSlope && simSlope <= upSlope ) {
                final_similars->push_back(crosses->at(i));
            }
        }
    }

    // We return the list of crossover points. 
    return final_similars;
}

db::price *sma::resolve(timescale_t scale) {
    db::price *price_db;

    // Switch statement to process which timescale we want
    switch ( scale ) { 
        case FIFTEEN:
            price_db = new db::price_15();
            break;
     
        case THIRTY:
            price_db = new db::price_30();
            break;
     
        case SIXTY:
            price_db = new db::price_60();
            break;

        default:
            price_db = new db::price();
    }

    return price_db;
}

std::vector<std::pair<int, double>> *sma::return_similar(double unix_tid, 
                                                         timescale_t scale) {
    // Open price database
    db::price *price_db = this->resolve(scale);

    // Get stddev of the time period starting at unix_tid
    double stddev = price_db->get_stddev(unix_tid);

    // Get similar points from the dataset 
    NuoDB::ResultSet *similar = price_db->get_similar(stddev);
    std::vector<std::pair<int, double>> *amounts = 
        new std::vector<std::pair<int, double>>();

    // Read results into a vector
    while ( similar->next() ) {
        std::pair <int, double> datapair = 
            std::make_pair(similar->getInt(1), similar->getDouble(2));
        amounts->push_back(datapair);
    }    

    // Clean up, return the results
    delete price_db;
    return amounts;
}

double sma::t_test(double amount, std::vector<double> *data) {
    // Read vector into array;
    int n = data->size();
    double *data_array = &data->at(0);

    alglib::real_1d_array input;
    double both = 0.0;
    double left = 0.0;
    double right = 0.0;

    // Construct alglib::read_1d_array
    input.setcontent(n, data_array); 

    // Call student t-test and return p-value for left-tailed. 
    alglib::studentttest1(input, n, amount, both, left, right);
    std::cout << "P-vales: Both: " << both << " Left: " << left << " Right: " 
              << right << std::endl << std::endl;
    return left;
}

void sma::run() {
    db::price *price_db = this->resolve(SIXTY);
    std::vector<int> *crosses = this->crossover(0, 1, SIXTY);

    for ( std::vector<int>::iterator it = crosses->begin() ; 
         it != crosses->end(); ++it ) {
        std::cout << "Crossover Unix Timestamp: " << *it << std::endl;
        double pred_amnt = price_db->get_amount(*it);
        std::vector<double> *similar = this->return_similar(*it, SIXTY);
        this->t_test(pred_amnt, similar);
    }

    delete price_db;
}

}


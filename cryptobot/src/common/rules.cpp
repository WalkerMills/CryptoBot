#include <algorithm>
#include <array>
#include <chrono>
#include <string>
#include <fstream>
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

void rule::add_indicator(std::string indicator) {
    ta::ta *new_ta = reflect(indicator);
    this->indicators->push_back(new_ta);
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

void sma::add_sma(int period) {
    ta::SMA *factory = (ta::SMA *) reflect("SMA");
    ta::SMA *new_sma = factory->create(0, 0, NULL, 0, NULL, NULL, NULL);
    new_sma->optInTimePeriod = period;
    this->indicators->push_back(new_sma);
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

std::vector<std::pair<int, double>> *sma::run(int index, timescale_t scale) {
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
    int *forward = times + indicator->optInTimePeriod;
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


    // if ( indicator->optInTimePeriod == 10 ) {
    //     std::ofstream slopefile;
    //     slopefile.open ("slope_data_60.csv", std::ios_base::app);
    //     for ( i = 0; i < outNBElement - 2; ++i ) {      
    //         slopefile << forward[i] << ", " 
    //         << resultData[i + 1] - resultData[i] << std::endl;
    //     }
    //     slopefile.close();
    // }

    // Now, we create a vector and push back the unix time and return 
    // data points. 
    std::vector<std::pair<int, double>> *output = 
        new std::vector<std::pair<int, double>>();
    output->reserve(outNBElement); 


    for ( i = 0; i < outNBElement - 2; ++i ) {
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
    std::vector<std::pair<int, double>> *data1 = this->run(index1, scale);
    std::cout << "first indicator ran" << std::endl;
    std::vector<std::pair<int, double>> *data2 = this->run(index2, scale);
    std::cout << "second indicator ran" << std::endl;

    int endind = std::min(data1->size(), data2->size());
    std::vector<int> *crosses = new std::vector<int>();
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
                crosses->push_back(data1->at(i - 1).first);
                currHigh = 1;
            }
        }

        else if ( data1->at(i).second < data2->at(i + inddiff).second ) {
            if ( currHigh == 1 ) {
                crosses->push_back(data1->at(i - 1).first);
                currHigh = 2;
            }
        }
    }

    // We return the list of crossover points. 
    return crosses;
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

std::vector<double> *sma::return_similar(double unix_tid, timescale_t scale) {
    // Open price database
    db::price *price_db = this->resolve(scale);

    // Get stddev of the time period starting at unix_tid
    double stddev = price_db->get_stddev(unix_tid);
    double slope = price_db->get_slope(unix_tid);

    // Get similar points from the dataset 
    NuoDB::ResultSet *similar = price_db->get_similar(stddev, slope);
    std::vector<double> *amounts = new std::vector<double>();

    // Read results into a vector
    if ( similar != 0 ) {
        while ( similar->next() ) {
            double amount = similar->getDouble(2);
            amounts->push_back(amount);
        }
    }

    // Clean up, return the results
    delete price_db;
    return amounts;
}

double sma::t_test(double amount, std::vector<double> *data) {
    // Read vector into array;
    int n = data->size();
    std::sort(data->begin(), data->end());
    double median;

    if ( n > 1 ) {  
        if ( n % 2 == 0 ) {
            median = (data->at(n/2) + data->at(n/2 - 1))/2;
        }

        else {
            median = data->at((n+1)/2);
        }
    }

    else {
        median = 0;
    }

    double *data_array = &data->at(0);

    // Construct alglib::read_1d_array
    alglib::real_1d_array input;
    input.setcontent(n, data_array); 
    // for (int i = 0; i < n; i++) {
    //     std::cout << input[i] << " ";
    // }
    // std::cout << std::endl << amount << std::endl;
    double both = 0.0;
    double left = 0.0;
    double right = 0.0;

    // Call student t-test and return p-value for left-tailed. 
    alglib::studentttest1(input, n, amount, both, left, right);
    std::cout << "P-vales: Both: " << both << " Left: " << left << " Right: "
    << right << std::endl << std::endl;

    // std::ofstream pvalues;
    // pvalues.open ("pvalues_60.txt", std::ios_base::app);
    // pvalues << left << std::endl;
    // pvalues.close();
    std::cout << "amount: " << amount << " median: " << median 
    << " amount - median: " << amount - median << std::endl;
    std::ofstream medians;
    medians.open ("medians.txt", std::ios_base::app);
    medians << (amount - median) << std::endl;
    medians.close();

    return left;
}

}


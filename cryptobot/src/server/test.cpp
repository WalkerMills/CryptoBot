#include "worker.hh"
#include "rules.hh"
#include <ta-lib/ta_func.h>

int main() {
    // std::vector<bots::rule *> *rules = new std::vector<bots::rule *>();
    bots::sma *r = new bots::sma(WATCH, 0.0);
    r->add_indicator(10);
    r->add_indicator(21); 
    db::price *price_db = new db::price_60();
    ta::SMA *ind1 = r->get_indicator(0);
    ta::SMA *ind2 = r->get_indicator(1);
    r->action = WATCH;
    r->amount = 0.0;
    ind1->update_index(1389067200, 1391993100);
    ind2->update_index(1389067200, 1391993100);
    std::vector<int> *crosses = r->crossover(0, 1, SIXTY);

    for ( std::vector<int>::iterator it = crosses->begin() ; 
         it != crosses->end(); ++it ) {
        std::cout << "Crossover Unix Timestamp: " << *it << std::endl;
        double pred_amnt = price_db->get_amount(*it);
        std::vector<double> *similar = r->return_similar(*it, SIXTY);
        r->t_test(pred_amnt, similar);
    }


    return 0;
}
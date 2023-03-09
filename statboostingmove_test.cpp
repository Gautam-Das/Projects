// This is a test file to test the class "statboostingmove" and its relevant methods
#include <iostream>

#include "Gigachad.h"
#include "SleepyJeff.h"
#include "statboostingmove.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    statboostingmove test_boost;

    // test 2: test booost_stats_player method of the class
    // test player character
    SleepyJeff test_Jeff;
    SleepyJeff* Jptr = &test_Jeff;
    Gigachad test_chad;
    Gigachad* gigaptr = &test_chad;

    // test 2.1, testing increasig of stats when everything is set to default
    test_Jeff.returnStats();
    test_boost.boost_stats_player(Jptr);
    /*expecting stats to be changed:
    damage_factor = original + 2
    healing_factor = original + 2 
    critical = original - 1
    */

    // test 2.2, testing increasig of stats when critical is already 1
    test_Jeff.set_critical(1);
    test_Jeff.returnStats();
    test_boost.boost_stats_player(Jptr);
    /*expecting stats to be changed:
    damage_factor = original + 2
    healing_factor = original + 2 
    critical = 1
    */

    // test 3: test booost_stats_chad method of the class
    // test 3.1, testing increasig of stats when everything is set to default
    test_chad.returnStats();
    test_boost.boost_stats_player(gigaptr);
    /*expecting stats to be changed:
    damage_factor = original + 2
    healing_factor = original + 2 
    critical = original - 1
    */

    // test 3.2, testing increasig of stats when critical is already 1
    test_chad.set_critical(1);
    test_chad.returnStats();
    test_boost.boost_stats_player(gigaptr);
    /*expecting stats to be changed:
    damage_factor = original + 2
    healing_factor = original + 2 
    critical = 1
    */




    return 0;
}


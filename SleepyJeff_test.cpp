// This is a test file to test the class "SleepyJeff" and its relevant methods
#include <iostream>

#include "SleepyJeff.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    SleepyJeff test_Jeff;

    // test 2: test return stats method of the class
    test_Jeff.returnStats()
    // expected output:
    /*
    attack stat is: 1
    healing stat is: 1
    critical stat is: 5
    Maximum HP is: 50
    Current HP is: 50
    */
    return 0;
}


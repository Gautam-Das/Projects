// This is a test file to test the class "Snorlax" and its relevant methods
#include <iostream>

#include "Snorlax.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    Snorlax test_snorlax;

    // test 2: test return stats method of the class
    test_snorlax.returnStats()
    // expected output:
    /*
    attack stat is: 1
    healing stat is: 4
    critical stat is: 10
    Maximum HP is: 150
    Current HP is: 150
    */
    return 0;
}


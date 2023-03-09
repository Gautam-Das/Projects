// This is a test file to test the class "Lazybones" and its relevant methods
#include <iostream>

#include "Lazybones.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    Lazybones test_bones;

    // test 2: test return stats method of the class
    test_bones.returnStats()
    // expected output:
    /*
    attack stat is: 4
    healing stat is: 4
    critical stat is: 2
    Maximum HP is: 40
    Current HP is: 40
    */
    return 0;
}


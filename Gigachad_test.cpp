// This is a test file to test the class "Gigachad" and its relevant methods
#include <iostream>

#include "gigachad.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    Gigachad test_chad;

    // test 2: test return stats method of the class
    test_chad.returnStats()
    // expected output:
    /*
    attack stat is: 2
    healing stat is: 2
    critical stat is: 2
    Maximum HP is: 100
    Current HP is: 100
    */

    // test 3: test choosemove() method of the class, will be tested
    // multiple times to ensue returened value is random
    move = test_chad.choosemove();
    std::cout << "Move chosen by test_chad is: " << move << std::endl;
    move = test_chad.choosemove();
    std::cout << "Move chosen by test_chad is: " << move << std::endl;
    move = test_chad.choosemove();
    std::cout << "Move chosen by test_chad is: " << move << std::endl;
    move = test_chad.choosemove();
    std::cout << "Move chosen by test_chad is: " << move << std::endl;
    move = test_chad.choosemove();
    std::cout << "Move chosen by test_chad is: " << move << std::endl;

    return 0;
}


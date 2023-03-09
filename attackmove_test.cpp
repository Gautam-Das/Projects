// This is a test file to test the class "attackmove" and its relevant methods
#include <iostream>

#include "Gigachad.h"
#include "SleepyJeff.h"
#include "attackmove.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    attackmove test_attack;

    // test 2: test deal_damage_player method of the class
    // test player character
    SleepyJeff test_Jeff;
    SleepyJeff* Jptr = &test_Jeff;
    Gigachad test_chad;
    Gigachad* gigaptr = &test_chad;

    test_attack.Deal_damage_player(Jptr, gigaptr);
    /* does not have expected output as it is random
    however expect current health of test_chad to be max health - damage
    dealt (printed in method above) */
    std::cout << test_chad.get_Current_HP() << std::endl;

    //test 3: test deal_damage_chad method of the class
    test_attack.Deal_damage_chad(Jptr, gigaptr);
    /* does not have expected output as it is random
    however expect current health of test_Jeff to be max health - damage
    dealt (printed in method above) */
    std::cout << test_Jeff.get_Current_HP() << std::endl;
    
    return 0;
}

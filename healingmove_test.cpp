// This is a test file to test the class "healingmove" and its relevant methods
#include <iostream>

#include "Gigachad.h"
#include "SleepyJeff.h"
#include "healingmove.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    healingmove test_heal;

    // test 2: test heal_health_player method of the class
    // test player character
    SleepyJeff test_Jeff;
    SleepyJeff* Jptr = &test_Jeff;
    Gigachad test_chad;
    Gigachad* gigaptr = &test_chad;

    // test 2.1: test heal_health_player: current health of character should not change if it is already at max
    test_heal.heal_health_player(Jptr);
    // Expecting current health to be max (50)
    std::cout << test_Jeff.get_Current_HP() << std::endl;


    // test 2.2: test heal_health_player: current health of character should not go above max health
    test_Jeff.set_Current_HP(49);
    test_heal.heal_health_player(Jptr);
    // Expecting current health to be max (50)
    std::cout << test_Jeff.get_Current_HP() << std::endl;

    // test 2.3: test heal_health_player: current health of character should be increased
    test_Jeff.set_Current_HP(10);
    test_heal.heal_health_player(Jptr);
    // Expecting current health to be higher than 10
    std::cout << test_Jeff.get_Current_HP() << std::endl;

    // test 3: test heal_health_chad method of the class

    // test 3.1: test heal_health_chad: current health of character should not change if it is already at max
    test_heal.heal_health_chad(gigaptr);
    // Expecting current health to be max (100)
    std::cout << test_chad.get_Current_HP() << std::endl;


    // test 3.2: test heal_health_chad: current health of character should not go above max health
    test_chad.set_Current_HP(99);
    test_heal.heal_health_chad(gigaptr);
    // Expecting current health to be max (100)
    std::cout << test_chad.get_Current_HP() << std::endl;

    // test 3.3: test heal_health_chad: current health of character should be increased
    test_chad.set_Current_HP(10);
    test_heal.heal_health_chad(gigaptr);
    // Expecting current health to be higher than 10
    std::cout << test_chad.get_Current_HP() << std::endl;
    
    return 0;
}

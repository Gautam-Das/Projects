// This is a test file to test the classes "playable and character" and their relevant methods
#include <iostream>


#include "playable.h"

int main(void) {
    // test 1: Check the classes can be created without any errors
    playable test_player;

    // test 2 and 3: test the set_name and get_name method
    test_player.set_Name("Test");
    std::cout << test_player.get_Name() << std::endl; 
    //expecting output to be Test

    // test 4 and 5: test the set_max_hp and get_max_hp method 
    test_player.set_Max_HP(10);
    std::cout << test_player.get_Max_HP() << std::endl; 
    //expecting output to be 10

    // test 6 and 7: test the set_Current_HP and get_Current_HP method 
    test_player.set_Current_HP(10);
    std::cout << test_player.get_Current_HP() << std::endl; 
    //expecting output to be 10

    // test 8 and 9: test the set_critical and get_critical method 
    test_player.set_critical(10);
    std::cout << test_player.get_critical() << std::endl; 
    //expecting output to be 10
    
    return 0;
}


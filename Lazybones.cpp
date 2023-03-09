// This is the .cpp file for the "lazybones" class 
// include relevant libraries
#include <iostream>
#include <string>

// include relevant header files
#include "Lazybones.h"
#include "character.h"

// constructor function
Lazybones::Lazybones() {
    set_Name("Lazybones");
    std::string ascii_array[27] = {
        "                           .&&&&&&&&&&&&&&&#                          "
        "          ",
        "                   &&&&&&/                   .&&&&&&                  "
        "          ",
        "               &&&&                                 #&&&              "
        "          ",
        "            &&&                                         @&&.          "
        "          ",
        "          &&&                                              &&&        "
        "          ",
        "         &&                                                  &&&      "
        "          ",
        "        &&                                                     &&     "
        "          ",
        "       &&                                                       &&    "
        "          ",
        "      (&%                                                        &&   "
        "          ",
        "      &&                                                          &&  "
        "          ",
        "      &&                                              %&&@(       @&. "
        "          ",
        "      &&                          &&&&&&&&         &&&&&&&&&&&&,   && "
        "          ",
        "      &&                     &&&&&&&&&&&&&&&       &&&&&&&&&&&&&,  && "
        "          ",
        "      &&*                  &&&&&&&&&&&&&&&&&        &&&&&&&&&&&&&  && "
        "          ",
        "       &&                 &&&&&&&&&&&&&&&&&&         @&&&&&&&&&&&  && "
        "          ",
        "       &&#                &&&&&&&&&&&&&&&&&%     @     &&&&&&&&&  &&, "
        "          ",
        "        &&.                &&&&&&&&&&&&&&&@    &&&&&      &&&&&   &&  "
        "          ",
        "          &&                 &&&&&&&&&&&&     &&&&&&&            %&/  "
        "          ",
        "            &&&&                 &&&&,        &&&&&&&&&           &&  "
        "          ",
        "                &&&&@                         &&&&&&&&#           &&  "
        "          ",
        "                     &&                                        .&&&   "
        "          ",
        "                     &&                                   *     &@    "
        "          ",
        "                      &&&&&&&&&&&&        &.      &&      &&   *&&    "
        "          ",
        "                                (&%       &&      &&      &&&&&&      "
        "          ",
        "                                 &&&&#,*&&&&,    &&&&&&&&&            "
        "          "};

    set_ASCII(ascii_array);

    set_Max_HP(40);
    set_Current_HP(40);
    set_damage_factor(4);
    set_healing_factor(4);
    set_critical(2);
}

// return stats by printing out outputs for all attributes 
void Lazybones::returnStats() {
    std::cout << " attack stat is: " << get_damage_factor() << std::endl;
    std::cout << " healing stat is: " << get_healing_factor() << std::endl;
    std::cout << " critical stat is: " << get_critical() << std::endl;
    std::cout << " Maximum HP is: " << get_Max_HP() << std::endl;
    std::cout << " Current HP is: " << get_Current_HP() << std::endl;
}

void Lazybones::attack(){};
void Lazybones::heal(){};
void Lazybones::boost(){};

// Deconstructor function
Lazybones::~Lazybones(){};

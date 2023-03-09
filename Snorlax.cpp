// This is the .cpp file for the "Snorlax" class 
// include relevant libraries
#include <iostream>
#include <string>

// include relevant header files
#include "Snorlax.h"
#include "character.h"

// constructor 
Snorlax::Snorlax() {
    set_Name("Snorlax");
    std::string ascii_array[27] = {
        "                             ,//#(%.               ,%(#               "
        "          ",
        "                             (////(###/////(//%///////#               "
        "          ",
        "                            *////////*///////////////(%.              "
        "          ",
        "                            //////(////////////(///((#%               "
        "          ",
        "                         .(/*//    .(////(   ...(/(##%#&%(            "
        "          ",
        "                    .#////#*/      ..  ( . ... ..,*#%%%%#####%,       "
        "          ",
        "                 (//***///#/...  . ............,,,.,%%%&%%%#%(///(    "
        "          ",
        "              /////////////(&.. .  .. .....***,.,,,,%%&#%#%#(//////// "
        "          ",
        "            "
        "#(/////////////((#%,.,.*.,,,,,,*,,,,,,/#%#####(///////////#         ",
        "          *#############(### "
        "...,,/(*,.,,,,,,*(/,*,,,,%####(((//////////#       ",
        "         (###########%##/. ... ......,,,,,,,,,,,,,,,.. "
        ".,##(#####((((((((((     ",
        "         ,,(%(**.#####.......     ...   ......   ... .... "
        ",###%############&    ",
        "               .####/......... . . . . ....... ... . ... "
        "...%######&#%#%#%#(    ",
        "               &###/..........   ... .....     ..  ......... %#####%/ "
        "          ",
        "               #%##.....   . . . ....... . . .   . . . ... . ,####%%% "
        "          ",
        "        *.    *.#%,,....          ............   .    ... "
        "....#%%#%#%/          ",
        "        (.,/.*,,.%*,,,,,,,................ "
        "................,,(.,*./...          ",
        "    / ,.......... ,,*,,,,,,,,,,,,,................,,,,,,,,*(... "
        "....**./..(     ",
        "     /....##%*...,,,,&*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,/,,...... "
        ".... .*      ",
        "      "
        "..////////%,,,,,&%*,,,,,,,,,,,,,,,,,,,,,,,,,,,,,***,,,,,.//*/*/.....  "
        "    ",
        "       "
        "/.((((((((%,,,,%%%%%%(,,,,,,,,,,,,,,,,,,,,*,,,&%%%,,,.((((((((/...,   "
        "   ",
        "         ..(#(((%,,,,(           "
        ".*#,,,,,,,,*#/.,(&%%%%#%&,,,((((((((,,(        ",
        "               .                                           ,,.,,,,,** "
        "          ",
        "               .                                           ,,.,,,,,** "
        "          ",
        "               .                                           ,,.,,,,,** "
        "          "};
    set_ASCII(ascii_array);

    set_Max_HP(150);

    set_Current_HP(150);
    set_damage_factor(1);
    set_healing_factor(4);
    set_critical(10);
}

// return stats by printing out outputs for all attributes 
void Snorlax::returnStats() {
    std::cout << " attack stat is: " << get_damage_factor() << std::endl;
    std::cout << " healing stat is: " << get_healing_factor() << std::endl;
    std::cout << " critical stat is: " << get_critical() << std::endl;
    std::cout << " Maximum HP is: " << get_Max_HP() << std::endl;
    std::cout << " Current HP is: " << get_Current_HP() << std::endl;
}

void Snorlax::attack(){};
void Snorlax::heal(){};
void Snorlax::boost(){};

// deconstructor function
Snorlax::~Snorlax(){};

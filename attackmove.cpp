// this is the .cpp file for the attackmove class
// include relevant libraries
#include <iostream>
#include <string>

// include relevant header files
#include "SleepyJeff.h"
#include "attackmove.h"
#include "character.h"
#include "playable.h"

// constructor function
attackmove::attackmove() {}

// deal damage to gigachad from player
void attackmove::Deal_damage_player(playable* pptr, Gigachad* gigaptr) {
    // calculate damage dealt by multiplying base damage with player's damage factor
    int damage_dealt = (damage * pptr->get_damage_factor());
    
    // if the damage dealt causes the opponents health to go below 0, set deal damage to only decrease it to 0
    if ((gigaptr->get_Current_HP() - damage_dealt) < 0) {
        damage_dealt = gigaptr->get_Current_HP();
    }
    
    // use srand to randomly get a critical attack
    srand(time(0));
    // if move is critical (random number is 1), double the damage dealt
    if ((rand() % (pptr->get_critical()) + 1) == 1) {
        std::cout << "You got a critical hit, damage x2" << std::endl;
        damage_dealt = damage_dealt * 2;
    }
    
    // if the damage dealt causes the opponents health to go below 0, set deal damage to only decrease it to 0
    if ((gigaptr->get_Current_HP() - damage_dealt) < 0) {
        damage_dealt = gigaptr->get_Current_HP();
    }
    
    // print out damage dealt
    std::cout << "\nYou dealed damage of " << damage_dealt << std::endl;
    
    // reduce gigachad's health by damage dealt 
    gigaptr->set_Current_HP(gigaptr->get_Current_HP() - damage_dealt);
}

// deal damage to player from gigachad
void attackmove::Deal_damage_chad(playable* pptr, Gigachad* gigaptr) {
    // calculate damage dealt by multiplying base damage with gigachad's damage factor
    int damage_dealt = (damage * gigaptr->get_damage_factor());
    
    // if the damage dealt causes the opponents health to go below 0, set deal damage to only decrease it to 0
    if ((pptr->get_Current_HP() - damage_dealt) < 0) {
        damage_dealt = pptr->get_Current_HP();
    }

    // use srand to randomly get a critical attack
    srand(time(0));
    
    // if move is critical (random number is 1), double the damage dealt
    if ((rand() % (gigaptr->get_critical()) + 1) == 1) {
        std::cout << "Gigachad got a critical hit, damage x2" << std::endl;
        damage_dealt = damage_dealt * 2;
    }
    
    // if the damage dealt causes the opponents health to go below 0, set deal damage to only decrease it to 0
    if ((pptr->get_Current_HP() - damage_dealt) < 0) {
        damage_dealt = pptr->get_Current_HP();
    }
    
    // print out damage dealt
    std::cout << "GigaChad dealed damage of " << damage_dealt << std::endl;
    
    // reduce gigachad's health by damage dealt
    pptr->set_Current_HP(pptr->get_Current_HP() - damage_dealt);
}

// deconstructor
attackmove::~attackmove() {}

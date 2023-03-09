// this is the .cpp file for the healingmove class
// include relevant libraries
#include <iostream>
#include <string>

// include relevant header files
#include "playable.h"
#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "character.h"
#include "healingmove.h"

// constructor function
healingmove::healingmove() {}

// heal player's health
void healingmove::heal_health_player(playable* pptr) {
    // calculate health recovered by multiplying base heal with player's healing factor
    int health_recovered = heal * pptr->get_healing_factor();
    
    // if the health recovered increases the hp of the character to higher than max, then set health recovered to only increase to max
    if ((health_recovered + pptr->get_Current_HP()) > pptr->get_Max_HP()) {
        health_recovered = pptr->get_Max_HP() - pptr->get_Current_HP();
    }
    
    // notify user of health recovered
    std::cout << "Recovered " << health_recovered << " health for "
              << pptr->get_Name() << std::endl;
    
    // set current hp of player to new hp
    pptr->set_Current_HP(pptr->get_Current_HP() + health_recovered);
}

// heal chad's health
void healingmove::heal_health_chad(Gigachad* gigaptr) {
    // calculate health recovered by multiplying base heal with gigachad's healing factor
    int health_recovered = heal * gigaptr->get_healing_factor();
    
    // if the health recovered increases the hp of the character to higher than max, then set health recovered to only increase to max
    if ((health_recovered + gigaptr->get_Current_HP()) >
        gigaptr->get_Max_HP()) {
        health_recovered = gigaptr->get_Max_HP() - gigaptr->get_Current_HP();
    }

    // notify user of health recovered
    std::cout << "Recovered " << health_recovered << " health for "
              << gigaptr->get_Name() << std::endl;
    
    // set current hp of gigachad to new hp
    gigaptr->set_Current_HP(gigaptr->get_Current_HP() + health_recovered);
}

// deconstructor function
healingmove::~healingmove() {}

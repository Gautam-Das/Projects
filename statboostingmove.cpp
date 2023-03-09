// this is the .cpp file for the statboostingmove class
// include relevant libraries
#include <iostream>
#include <string>

// include relevant header files
#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "character.h"
#include "statboostingmove.h"
#include "playable.h"

// constructor function
statboostingmove::statboostingmove() {}

// boost the stats for the player character
void statboostingmove::boost_stats_player(playable* pptr) {
    // add additional_damage to current damage factor
    int new_damage_factor =
        pptr->get_damage_factor() + additional_damage_factor;
    // add additional_health to current health factor
    int new_healing_factor =
        pptr->get_healing_factor() + additional_healing_factor;
    // reduce critical by 1, only reduce if it is currently above 1
    int new_critical = pptr->get_critical();
    if(pptr->get_critical() - reduce_critical > 0){
      new_critical = pptr->get_critical() - reduce_critical;
    }
     
    // notify user that stats have been increased
    std::cout << "Increased Stats for " << pptr->get_Name() << std::endl;
    // set attributes to new calculated attributes
    pptr->set_damage_factor(new_damage_factor);
    pptr->set_healing_factor(new_healing_factor);
    pptr->set_critical(new_critical);
}

// boost the stats for the gigachad character
void statboostingmove::boost_stats_chad(Gigachad* gigaptr) {
    // add additional_damage to current damage factor
    int new_damage_factor =
        gigaptr->get_damage_factor() + additional_damage_factor;
    // add additional_health to current health factor
    int new_healing_factor =
        gigaptr->get_healing_factor() + additional_healing_factor;
    // reduce critical by 1, only reduce if it is currently above 1
    int new_critical = gigaptr->get_critical();
    if(gigaptr->get_critical() - reduce_critical > 0){
      new_critical = gigaptr->get_critical() - reduce_critical;
    }
    
    // notify user that stats have been increased
    std::cout << "Increased Stats for " << gigaptr->get_Name() << std::endl;
    // set attributes to new calculated attributes
    gigaptr->set_damage_factor(new_damage_factor);
    gigaptr->set_healing_factor(new_healing_factor);
    gigaptr->set_critical(new_critical);
}

// deconstructor function
statboostingmove::~statboostingmove() {}

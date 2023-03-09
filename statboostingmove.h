//this is the header file for the statboostingmove class

#ifndef STATBOOSTINGMOVE
#define STATBOOSTINGMOVE

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

// create class
class statboostingmove {
   private:
    int additional_damage_factor = 2;
    int additional_healing_factor = 2;
    int reduce_critical = 1;  // reduce chance of critical by
   public:
    statboostingmove(); // constructor
    void boost_stats_player(playable* pptr); //increase damage and haeling factor by 1, reduce critcal by 1 if it is 2 or above 
    void boost_stats_chad(Gigachad* gigaptr); //increase damage and haeling factor by 1, reduce critcal by 1 if it is 2 or above
    ~statboostingmove(); // deconstructor function
};

#endif

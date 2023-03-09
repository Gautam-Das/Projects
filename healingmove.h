// this is the header file for the healing move class

#ifndef HEALINGMOVE
#define HEALINGMOVE

// include relevant libraries
#include <iostream>
#include <string>

// include relevant header files
#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "character.h"
#include "playable.h"

// create class
class healingmove {
   private:
    int heal = 10;

   public:
    // constructor function 
    healingmove();
    /*heal the health of the player character, health recovered is to be caculated based on heal and player's healing factor,
    health recovered cannot cause the health to go over the max hp */
    void heal_health_player(playable* pptr);
   
    /*heal the health of the gigachad character, health recovered is to be caculated based on heal and gigachad's healing factor,
    health recovered cannot cause the health to go over the max hp */
    void heal_health_chad(Gigachad* gigaptr);
   
    // deconstructor function
    ~healingmove();
};

#endif

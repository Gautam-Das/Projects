// this is the header file for attackmove class
#ifndef ATTACKMOVE
#define ATTACKMOVE

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
class attackmove {
   private:
    int damage = 10;

   public:
    attackmove(); // constructor function
   
    /* deals damage from player to gigachad object, damage dealt is calculated by multiplying damage and player's damage factor,
    damage is doubled if it is a critical move, damage dealt cannot be more than current hp of giga chad */
    void Deal_damage_player(playable* pptr, Gigachad* gigaptr); 
    /* deals damage from gigacahd to player object, damage dealt is calculated by multiplying damage and gigachad's damage factor,
    damage is doubled if it is a critical move, damage dealt cannot be more than current hp of player */
    void Deal_damage_chad(playable* pptr, Gigachad* gigaptr);
      
    ~attackmove(); // deconstructor function
};

#endif

// This is the header file for the "Gigachad" class 

#ifndef GIGACHAD
#define GIGACHAD

// include relevant libraries
#include <cstdlib>
#include <iostream>
#include <string>

#include "character.h"

// derive gigachad class from character class
class Gigachad : public character {
   public:
    Gigachad(); // constructor function that sets all the attributes to default values
    void returnStats(); // function that prints out all the attributes of gigachad
    int choosemove(); // function that randomly chooses a number between 1 and 3 return it to make a move

    void attack(); // function that calls the attackmove object to deal damage
    void heal(); // function that calls the healmove object to heal health
    void boost(); // function tha calls the statboostingmove object to heal health

    ~Gigachad(); // deconstructor function
};

#endif

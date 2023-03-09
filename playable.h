#ifndef PLAYABLE
#define PLAYABLE

#include <iostream>
#include <string>

#include "character.h"

class playable : public character {
   public:
    playable();
    void attack();
    void heal();
    void boost();

    ~playable();
};

#endif

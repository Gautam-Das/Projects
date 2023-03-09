// This is the .cpp file for the character clas
// include all relevant libaries
#include <iostream>
#include <string>

// include relevant header files
#include "character.h"

// return the name of the character object
std::string character::get_Name() { return Name; }

// set the name of the character object
void character::set_Name(std::string n_name) { Name = n_name; }

// return the max hp of the character
int character::get_Max_HP() { return Max_HP; }

// return the critical for the character object
int character::get_critical() { return critical; }

// return the damage factor for the character object
float character::get_damage_factor() { return damage_factor; }
// return the healing factor for the character object
float character::get_healing_factor() { return healing_factor; }

// return the ascii representation for the character object
std::string* character::get_ASCII() { return ASCII; }

// set the ascii representation for the character object
void character::set_ASCII(std::string* array) {
    for (int i = 0; i < 27; i++) {
        ASCII[i] = array[i];
    }
}

// set the max hp for the character object
void character::set_Max_HP(int n_Max) { Max_HP = n_Max; }

// set the current hp for the character object
void character::set_Current_HP(int n_current_hp) { Current_HP = n_current_hp; }
// set the critical for the character object
void character::set_critical(int n_critical) { critical = n_critical; }
// set the damage factor for the character object
void character::set_damage_factor(float n_damage_factor) {
    damage_factor = n_damage_factor;
}
// set the healing factor for the character object
void character::set_healing_factor(float n_healing_factor) {
    healing_factor = n_healing_factor;
}
// reuturn the current hp for the character object
int character::get_Current_HP() { return Current_HP; }

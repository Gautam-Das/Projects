// this is the header file for the character class

#ifndef CHARACTER
#define CHARACTER

// inlude relevant libraries
#include <iostream>
#include <string>

// create class
class character {
   private:
    std::string Name; // name of character object
    std::string ASCII[27]; // ascii representation of character object
    int Max_HP; // max hp of character object
    int Current_HP; // current hp of character object
    float damage_factor; // damage factor of character object
    float healing_factor; // healing factor of character object
    int critical; // critical of character object

   public:
    virtual void attack() = 0; // virtual function to be defined in child classes
    virtual void heal() = 0; // virtual function to be defined in child classes
    virtual void boost() = 0; // virtual function to be defined in child classes

    std::string get_Name(); // return the name of the character object
    std::string* get_ASCII(); // return the asscii representation of the character object
    int get_Max_HP(); // return the max hp of the character object
    int get_Current_HP(); // return the current hp of the character object
    int get_critical(); // return the critical of the character object
    float get_damage_factor(); // return the damage factor of the character object
    float get_healing_factor(); // return the healing factor of the character object

    void set_ASCII(std::string* array); // set the ascii representation of the character object
    void set_Name(std::string n_name); // set the name of the character object
    void set_Max_HP(int n_Max); // set the max hp of the character object
    void set_Current_HP(int n_current_hp); // set the current hp of the character object
    void set_critical(int n_critical); // set the critical of the character object
    void set_damage_factor(float n_damage_factor); // set the damage factor of the character object
    void set_healing_factor(float n_healing_factor); // set the healing factor of the character object
};

#endif

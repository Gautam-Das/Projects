#include <iostream>
#include <memory>
#include <string>

#include "Gigachad.h"
#include "Lazybones.h"
#include "SleepyJeff.h"
#include "Snorlax.h"
#include "attackmove.h"
#include "character.h"
#include "healingmove.h"
#include "playable.h"
#include "statboostingmove.h"

void play_game(playable* pptr) {
    Gigachad chad;  // create Gigachad object with the name chad
    Gigachad* gigaptr =
        &chad;  // create pointer to chad to be able to make changes to the
                // object's variables within functions
    attackmove attack;
    statboostingmove statboost;
    healingmove heal;
    int move_choice;  // stores the choice of move made by t he player
    std::string* player_ascii =
        pptr->get_ASCII();  // stores the ascii representation of player's
                            // character
    std::string* chad_ascii =
        gigaptr->get_ASCII();  // stores the ascii representation of Gigachad

    std::cout << "Start of game" << std::endl;

    // using while loop to repeat the fight until one of the charaters looses
    // all their health
    while (pptr->get_Current_HP() > 0 && gigaptr->get_Current_HP() > 0) {
        // print top of stage
        std::cout
            << "_______________________________________________________________"
               "_______________________________________________________________"
               "_________________________\n                           |        "
               "                   |                         |  \n   _____   "
               "_____   _  _    |   _____   __  __   ___    |   _   _   ___    "
               " _     |  Sleepy Jeff:			GigaChad:\n  |     | "
               "|_   _| | |/ |   |  |     | |  \\/  | |   |   |  | |_| | |   | "
               " _| |_   |  Health : "
            << pptr->get_Current_HP()
            << "     			Health: " << gigaptr->get_Current_HP()
            << std::endl;
        std::cout << "  |  _  |   | |   |    <   |  |  _  | |      | | __|   | "
                     " |  _  | | __| |_   _|  |  Attack : "
                  << pptr->get_damage_factor()
                  << "     			Attack : "
                  << gigaptr->get_damage_factor() << std::endl;
        std::cout << "  |_| |_|   |_|   |_|\\_|   |  |_| |_| |_/\\/\\_| |_|    "
                     " |  |_| |_| |_|     |_|    |  Crit chance: 1/"
                  << pptr->get_critical()
                  << "   			Crit chance: 1/"
                  << gigaptr->get_critical() << std::endl;
        std::cout << "     (1)                   |   (2)                     | "
                     "(3)                     "
                     "|\n___________________________|__________________________"
                     "_|_________________________|_____________________________"
                     "________________________________________"
                  << std::endl;

        // print player character and Gigachad line by line using for loop
        for (int i = 0; i < 27; i++) {
            std::cout << player_ascii[i]
                      << "                                          "
                      << chad_ascii[i] << std::endl;
        }

        // Get user's move choice as input
        std::cout << "Your move, Press the key in the bracket to play the "
                     "corresponding move:\n Attacking move (1), Healing move "
                     "(2), Statboosting move (3)"
                  << std::endl;
        std::cin >> move_choice;
        while (move_choice != 1 && move_choice != 2 && move_choice != 3) {
            std::cout << "Invalid input, please re-enter\n";
            std::cin >> move_choice;
            std::cout << "\n";
        }

        // play corresponding move
        if (move_choice == 1) {
            attack.Deal_damage_player(pptr, gigaptr);
        } else if (move_choice == 2) {
            heal.heal_health_player(pptr);
        } else if (move_choice == 3) {
            statboost.boost_stats_player(pptr);
        }
        if (gigaptr->get_Current_HP() >
            0) {  // check if Gigachad has any health left
            std::cout << "Gigachad's move. ";
            int choice = gigaptr->choosemove();  // use method to randomly
                                                 // choose move for gigachad
            // play corresponding move
            if (choice == 1) {
                std::cout << "He chose to attack." << std::endl;
                attack.Deal_damage_chad(pptr, gigaptr);
            } else if (choice == 2) {
                std::cout << "He chose to heal." << std::endl;
                heal.heal_health_chad(gigaptr);
            } else if (choice == 3) {
                std::cout << "He chose to boost stats." << std::endl;
                statboost.boost_stats_chad(gigaptr);
            }
        }
    }
    // find which character lost their health and declare winner
    if (pptr->get_Current_HP() <= 0) {
        std::cout << pptr->get_Name() << " died.\n You lost\n";
    } else if (gigaptr->get_Current_HP() <= 0) {
        std::cout << gigaptr->get_Name() << " died.\n You Win\n";
    }

    // delete objects
    delete (gigaptr);
}

int main(void) {
    int character_choice;  // stores user's choice
    // Give introduction to game
    std::cout << "Welcome to street fighters demo version!\n Press the key in "
                 "the bracket and then press enter to choose your character:\n "
                 "1: SleepyJeff (1)\n 2: Snorlax (2)\n 3: Lazybones (3)\n For "
                 "character descriptions press 4\n";
    std::cin >> character_choice;  // get user choice
    std::cout << "\n";
    // make sure input is valid, ask user to reinput until it is valid
    while (character_choice != 1 && character_choice != 2 &&
           character_choice != 3 && character_choice != 4) {
        std::cout << "Invalid input, please re-enter\n";
        std::cin >> character_choice;
        std::cout << "\n";
    }

    // choose corresponding character and start game
    if (character_choice == 1) {
        std::cout << "You have chosen SleepyJeff\n";
        SleepyJeff player;  // create SleepyJeff object called player, this is
                            // the character used by the player
        SleepyJeff* pptr =
            &player;  // pointer to player object, so that variables of the
                      // player object within functions
        play_game(pptr);
        delete (pptr);
    } else if (character_choice == 2) {
        std::cout << "You have chosen Snorlax\n";
        Snorlax player;  // create Snorlax object called player, this is the
                         // character used by the player
        Snorlax* pptr = &player;  // pointer to player object, so that variables
                                  // of the player object within functions
        play_game(pptr);
        delete (pptr);
    } else if (character_choice == 3) {
        std::cout << "You have chosen Lazybones\n";
        Lazybones player;  // create Lazybones object called player, this is the
                           // character used by the player
        Lazybones* pptr =
            &player;  // pointer to player object, so that variables of the
                      // player object within functions
        play_game(pptr);
        delete (pptr);
    } else {  // only remaining valid option if 4, therefore provide description

        std::cout << "You have asked for character discriptions\n";
        std::cout << "SleepyJeff: From the popular TV show \"wrinkles\", an "
                     "angressive character.\n";
        // create trial SleepyJeff object to show stats
        SleepyJeff trialjeff;
        SleepyJeff* Jptr;
        trialjeff.returnStats();
        delete (Jptr);
        std::cout << "\n";

        std::cout
            << "Lazybones: From the popular Cartoon\"JackFlap\", a character "
               "whose strength lies in boosting his statistics.\n";
        // create trial Lazybones object to show stats
        Lazybones trailbones;
        Lazybones* bonesptr;
        trailbones.returnStats();
        delete (bonesptr);
        std::cout << "\n";

        std::cout << "Snorlax: The popular Pokemon, a defensive character\n";
        // create trial Snorlax object to show stats
        Snorlax trialsnorlax;
        Snorlax* snorlaxptr;
        trialsnorlax.returnStats();
        delete (snorlaxptr);
        std::cout << "\n";

        std::cout
            << "Your enemy, Gigachad, controlled by the computer, he is the "
               "hardest obstacle that stands between you and glory.\n";
        // create trial Gigachad object to show stats
        Gigachad trialchad;
        Gigachad* chadptr;
        trialchad.returnStats();
        delete (chadptr);
    }
}

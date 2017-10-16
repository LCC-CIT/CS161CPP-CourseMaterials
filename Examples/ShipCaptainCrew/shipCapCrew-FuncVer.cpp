// *************************
// Ship, captian, crew game
// Written by Brian Bird
// March 4, 2011
// *************************

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

// function prototypes
short rollDice(short scc);
bool checkY(string question);
void displayInstructions();

// global constants
const short NOTHING = 7, SHIP = 6, CAPTAIN = 5, CREW = 4, NUM_DICE = 5;


int main()
{
    // Define variables
    short throws = 0;
    bool rollAgain = false; // loop sentinal
    short sccCode = NOTHING;

    // Get seed for random number generator
    srand( static_cast<unsigned>(time( NULL )) );

    do  // loop to repeat the game
    {
        // initialize variables for each game
        throws = 0;
        sccCode = NOTHING;
        cout << "\n-------------------------------------------\n";
        cout << "Welcome to the game of Ship, Captain, Crew!\n";
        cout << "-------------------------------------------\n";

        rollAgain = checkY("Are you ready for your first throw? \n(otherwise you get instructions)");
        if (!rollAgain)
            displayInstructions();

        // This loop iterates once for each throw of the dice
        while (rollAgain)
        {
            throws++;
            sccCode = rollDice(sccCode);

            if (throws < 3)
               rollAgain = checkY("Wold you like to throw the dice again?");
            else
                rollAgain = false;
        }

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    } while( checkY("Would you like to play again?") );

    return 0;
}


// ****************************************************
// Function Definitiions
// *****************************************************


// Simulate rolling five, four, or three dice at a time
// rollDice returns a code: 6 = got ship,
// 5 = got ship and captain, 4 = got ship, captaain, and crew
// It also displays the dice rolled and the socre.
short rollDice(short scc)
{
    short die = 0, score = 0;
    bool ship = false, cap = false, crew = false;

    // If you get ship, cap, or crew those dice aren't rolled
    // so reduce the number of rolls
    short rolls = NUM_DICE - (NOTHING - scc);

    // Simulate rolling multiple die by getting multiple random numbers
    cout << "Dice: ";
    for (short roll = 0; roll < rolls; roll++)
    {
        die = 1 + rand() % 6;   // range = 1 to 6 for a six sided die
        // display each value to simulate six die
        cout << die;
        if (roll < rolls - 1)
            cout << ", ";

        // check to see if die is a ship, captain, or crew
        if (die == SHIP)
            ship = true;
        else if (die == CAPTAIN)
            cap = true;
        else if (die == CREW)
            crew = true;

        score += die;  // only count the "cargo" (die less than CREW)
    }
    cout << endl;

    // Check to see if you qualify for a ship, captain, or crew
    // You need a ship first, then you can get a captain and finally a crew
    if (scc == NOTHING && ship)
    {
        scc = SHIP;
        cout << "You got a ship!\n";
        score -= SHIP;
    }
    if (scc == SHIP && cap)
    {
        scc = CAPTAIN;
        cout << "You got a captain!\n";
        score -= CAPTAIN;
    }
    if (scc == CAPTAIN && crew)
    {
        scc = CREW;
        cout << "You got a crew!\n";
        score -= CREW;
    }

    // Display the score, but you must have a crew to score
    if (scc != CREW)
        score = 0;

    cout << "Your score is " << score << endl << endl;

    return scc;
}


bool checkY(string question)
{
    char ch = 'n';

    cout << question << " Enter y or n: ";
    cin.get(ch);
    cin.ignore();
    if (ch == 'y' || ch == 'Y')
        return true;
    else
        return false;
}


void displayInstructions()
{
    cout << endl;
    cout << "The goal is to roll a high score.\n";
    cout << "But, you can't score until you get a ship, captain, and crew.\n";
    cout << "You need to roll: \n";
    cout << "     Six to get a ship\n";
    cout << "     Five for a captain (but you must already have a ship).\n";
    cout << "     Four for a crew (but you must already have a ship and captian).\n";
    cout << "Once you have a crew your score is based on the two remaining die.\n";
    cout << "You have five die and three rolls.\n";
    cout << endl;
}

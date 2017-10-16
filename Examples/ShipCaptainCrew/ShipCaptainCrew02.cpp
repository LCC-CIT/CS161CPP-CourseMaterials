#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    // Define variables
    short throws = 0;
    short die1 = 0, die2 = 0, die3 = 0, die4 = 0, die5 = 0; // five die for play
    short  ship = 0, captain = 0, crew = 0; // marks first die to get 6, 5, then 4
    short score = 0;    // holds score at end of game
    char ch = 'n'; // dummy variable, not used

    // Get seed for random number generator
    srand( static_cast<unsigned>(time( NULL )) );

    cout << "Welcome to the game of Ship, Captain, Crew!" << endl;

    cout<< "Press enter to throw all five dice.";
    cin.get(ch);
    cout << endl;



/*****************************************************************************/
/* Execute this loop for each throw of the dice                                                              */
/*****************************************************************************/

    do
    {
        throws++;

       // Throw only dice that aren't ship, captain or crew
        if ((ship != 1) && (captain != 1) && (crew != 1))
            die1 = 1 + rand() % 6;
        if ((ship != 2) && (captain != 2) && (crew != 2))
            die2 = 1 + rand() % 6;
        if ((ship != 3) && (captain != 3) && (crew != 3))
            die3 = 1 + rand() % 6;
        if ((ship != 4) && (captain != 4) && (crew != 4))
            die4 = 1 + rand() % 6;
        if ((ship != 5) && (captain != 5) && (crew != 5))
            die5 = 1 + rand() % 6;

        cout <<"Dice:" << setw(3) << die1 << setw(3) << die2 << setw(3) << die3 << setw(3) << die4 << setw(3) << die5 << endl;

        // Check to see if the player got a ship
        if (ship == 0)
        {
            if (die1 == 6)
                ship =1;
            else if (die2 == 6)
                ship = 2;
            else if(die3 == 6)
                ship = 3;
            else if(die4 == 6)
                ship = 4;
            else if (die5 == 6)
                ship = 5;

            if (ship != 0)
                cout << "You have a ship!" << endl;
            }
        // check to see if the player got a captain
        if ((ship != 0) && ( captain == 0))
        {
            if (die1 == 5)
                captain = 1;
            else if (die2 == 5)
                captain = 2;
            else if(die3 == 5)
                captain = 3;
            else if(die4 == 5)
                captain = 4;
            else if (die5 == 5)
                captain = 5;

            if (captain != 0)
                cout << "You have a captain!" << endl;
        }

        // Check to see if the player got a crew
        if ((ship != 0) && (captain != 0) && (crew == 0))
        {
            if (die1 == 4)
                crew = 1;
            else if (die2 == 4)
                crew = 2;
            else if(die3 == 4)
                crew = 3;
            else if(die4 == 4)
                crew = 4;
            else if (die5 == 4)
                crew = 5;

            if (crew != 0)
                    cout << "You have a crew!" << endl;
        }

        // Calculate score
        score = 0;
       if (crew)
       {
            if ((ship != 1) && (captain != 1) && (crew != 1))
                score += die1;
            if ((ship != 2) && (captain != 2) && (crew != 2))
                score += die2;
            if ((ship != 3) && (captain != 3) && (crew != 3))
                score += die3;
            if ((ship != 4) && (captain != 4) && (crew != 4))
                score += die4;
            if ((ship != 5) && (captain != 5) && (crew != 5))
                score += die5;
        }
        cout << "Your score for throw " << throws << " is: " << score << endl << endl;

       ch = 'n';
       if (throws < 3)
       {
           cout<< "Wold you like to throw the dice again? (y/n):";
           cin.get(ch);
           cin.ignore();
           cout << endl;
       }
    }
    while(ch == 'y');

    return 0;
}

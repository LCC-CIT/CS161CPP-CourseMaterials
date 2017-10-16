// *************************
// Pig dice game
// Written by Brian Bird
// March 4, 2011
// *************************

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

// function prototypes
bool rollDie(short&);
bool checkY(string question);
void displayInstructions();

// global constants
const short ONE = 1;


int main()
{
    // Define variables
    short round = 0, throws = 0, die = 0, score = 0, playerScore = 0, computerScore = 0;
    bool rollAgain = false; // loop sentinal

    // Get seed for random number generator
    srand( static_cast<unsigned>(time( NULL )) );

    do  // loop to repeat the game
    {
        // initialize variables for each game
        round = 1;
        cout << "\n---------------------------\n";
        cout << "Welcome to the game of Pig!\n";
        cout << "---------------------------\n";

        if (checkY("Would you like instructions?"))
            displayInstructions();

        do      // iterates once per round
        {
        cout << "\nRound: " << round << endl;
        round++;
            cout << "Player's turn\n";
            score = 0;
            while( checkY("Roll the die?") && rollDie(score) );
            playerScore += score;
            cout << "Player's score: " << playerScore << endl;
            cout << endl;
            cout << "Computers turn\n";
            throws = 1;
            score = 0;
            do
            {
                throws++;
                rollAgain = rollDie(score);
                cout << endl;
            } while (rollAgain && (score <= 8 || throws <= 3));
            computerScore += score;
            cout << "Computer's score: " << computerScore << endl << endl;
        } while (playerScore < 100 && computerScore < 100);
        if (playerScore > computerScore)
            cout << "You win!\n";
        else
            cout << "Computer wins!\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    } while( checkY("Would you like to play again?") );

    return 0;
}


// ****************************************************
// Function Definitiions
// *****************************************************


bool rollDie(short& score)
{
    short die = 0;

    die = 1 + rand() % 6;   // range = 1 to 6 for a six sided die
    if (die == ONE)
    {
         cout << "Die: 1! The turn is over!\n";
         score = 0;
         return false;
    }
    else
    {
        cout << "Die: " << die << "    ";
        score += die;
        return true;
    }
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
    cout << endl;
}

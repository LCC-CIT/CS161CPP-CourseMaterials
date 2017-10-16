// *************************
// A dice game called "pig"
// Written by Brian Bird
// November 28, 2011
// *************************

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayInstructions();     // It does what it's name says
int rollDie(bool isComputer);   // Does a round of rolling, returns a score
bool getYesNo(string);          // Returns true/false for a yes/no question

const int NUM_SIDES = 6;    // 6 represents a traditional six sided die


int main()
{
    srand(time(NULL));              // Seed the random number generator for future use
    displayInstructions();
    int pTotal = 0, cTotal = 0;     // Player's score and computer's score

    do
    {
        do
        {
            cout <<"Your turn" << endl;     // One round of rolling for the player
            pTotal += rollDie(false);
            cout << "Your total score is " << pTotal << endl << endl;

            cout << "Computer's turn" << endl;      // One round of rolling for the computer
            cTotal += rollDie(true);
            cout << "The computer's total is " << cTotal << endl << endl;

         }  while (pTotal < 100 && cTotal < 100);       // Keep playing until someone reachs 100 points

         if (pTotal > cTotal)
            cout << "You win!" << endl << endl;
        else
            cout << "The computer won" << endl << endl;

   } while( getYesNo("Do you want to play again "));

 // drivers
 //   displayInstructions();
 //   cout << getYesNo("Do you want a one?");
 //   cout << rollDie(0,true) << endl;
 //   cout << rollDie(0, false) << endl;

    return 0;
}


void displayInstructions()
{
    cout << "Welcome to  Pig!" << endl;
    cout << "In this dice game, you and the computer will take turns rolling a die." << endl;
    cout << "On each turn, you can keep rolling until you roll a 1." << endl;
    cout << "Each time you roll, the number rolled will be added to your score." << endl;
    cout << "But, if you roll 1 your score for that turn will be 0." << endl;
    cout << "The game ends when either your score or the computer's reaches 100." << endl;
    cout << "The goal is to get a higher score than the compter." << endl << endl;

}


int rollDie(bool isComputer) // roll the dice multiple times, calc and return an updated score
{
    int score = 0;
    do
    {
        int roll = rand() % NUM_SIDES + 1;      // calc a rand number appropriate for the die
        cout << "Die: " << roll << endl;        // display the value rolled
        if (roll == 1)
        {
            score = 0;                          // rolling 1 is fatal (for this round)
            break;
        }
        else
        {
             score += roll;
             if (isComputer && score > 12)         // some really primitive AI
                break;
        }
    } while (isComputer || getYesNo("Roll again "));
    return score;
}


bool getYesNo(string question)      // The string holds the questiion for the player
{
    cout << question << "? ";
    char yesno;
    cin >> yesno;
    return yesno == 'Y' || yesno == 'y';
}


/* stubs
void displayInstructions()
{
}

int rollDie(int score) // gets a score, returns an updated score
{
    return 0;
}

bool getYesNo(string)
{
    return false;
}
*/





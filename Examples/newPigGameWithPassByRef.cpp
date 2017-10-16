#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayInstructions();
int rollDie(bool isComputer); // Does a round of rolling, returns a score
bool getYesNo(string);

const int NUM_SIDES = 6;


int main()
{
    srand(time(NULL));
    displayInstructions();
    int pTotal = 0, cTotal = 0;

    do
    {
        do
        {
            cout <<"Your turn" << endl;
            pTotal+= rollDie(false);
            cout << "Your total score is " << pTotal << endl << endl;

            cout << "Computer's turn" << endl;
            cTotal += rollDie(true);
            cout << "The computer's total is " << cTotal << endl << endl;

         }  while (pTotal < 100 && cTotal < 100);

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


int takeTurn(bool isComputer) // gets a score, returns an updated score
{
    int score = 0;
    do
    {
        if (rollDie(score))
        {
            break;
        }
        else
        {
             if (isComputer && score > 12)
                break;
        }
    } while (isComputer || getYesNo("Roll again "));
    return score;
}


bool rollDie(int& value)
{
        int roll = rand() % NUM_SIDES + 1;
        cout << "Die: " << roll << endl;
        if (roll == 1)
        {
            value = 0;
            return false;
        }
        else
        {
            value += roll;
            return true;
        }
}


bool getYesNo(string question)
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





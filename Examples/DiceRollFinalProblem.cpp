#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* CS133G Final Exam Problem - Winter 2011 */
/* By Brian Bird */
/*
Write a program to simulate the following dice game, which is a simplified version of craps:
- At the beginning of a round, the computer will ask the player to choose a number between 2 and 12.
- The program will simulate rolling the user's dice by generating two random numbers
  from 1 through 6 and displaying them.
- If the player's choice matches the sum of the two numbers, the user wins,
  otherwise the player will be asked if they want to roll again.
- The program will display the number of rolls the player made in this round.
- After the round is finished the computer will ask the user if they want to play again.
- The game ends when the player either gets a winning roll, or answers 'N' to "do you want to roll again?".

Additional requirements:
- The program will use at least one function and will have at least one pass-by-reference parameter.
- Include a driver for testing the function (or functions) in your program. The driver should be commented out in the version of the program you upload.
- Use good programming style (indentation, comments, no global variables, named constants, etc.)
*/


void displayInstructions();
bool getYesNo(string);
int rollDie(int compRoll);

const int SIDES = 6;
const int MIN = 2;
const int MAX = SIDES * 2;

int main()
{
    srand(time(NULL));
    displayInstructions();
    int targetNumber = 0;

    do
    {
        do
        {
            cout <<"Enter a number from " << MIN << " through " << MAX << ": ";
            cin >> targetNumber;
        } while(targetNumber < MIN || targetNumber > MAX);

        int score = rollDie(targetNumber);
        if (score > 0)
        {
            cout << "You got it!" << endl;
            cout << "Your score is " << score << endl << endl;
        }
    }while(getYesNo("Do you want to play again"));
/*
    // Test drivers
  //  cout << getYesNo("Enter a y for yes and n for no");
  //  cout << rollDie(6);
*/
    return 0;
}

void displayInstructions()
{
    cout << "Welcome to simplified Craps!" << endl;
    cout << "Think of a number from " << MIN << " through " << MAX  << endl;
    cout << "You will keep rolling your dice until the sum of your rolls matches the number." << endl;
    cout << "You win when the sum of the two die equals the number you chose" << endl;
    cout << "The less rolls it take to win, the better!" << endl << endl;
}

bool getYesNo(string question)
{
    cout << question << "? ";
    char yesno;
    cin >> yesno;
    return yesno == 'Y' || yesno == 'y';
}

int rollDie(int goal)
{
    int die1 = 0, die2 = 0;
    int rolls = 0;
    do
    {
        if ( getYesNo("Press y to roll your die") )
            {
                die1 = rand() % SIDES + 1;
                die2 = rand() % SIDES + 1;
                cout << "You rolled " << die1 << " and " << die2 << endl;
                rolls++;
            }
        else
            {
                cout << "You must be having bad luck!" << endl;
                cout << "Good bye!" << endl;
                rolls = 0;
                break;
            }
    } while( die1 + die2 != goal);
    return rolls;
}










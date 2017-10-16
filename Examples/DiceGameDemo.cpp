#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int playerRoll(int numSides, int compRoll);
bool getYesNo(string question);
void showInstructions();

int main()
{
    const int NUM_SIDES = 6;
    srand(time(NULL));
    showInstructions();
    int score = 0;
    do
    {
        int computerRoll = rand() % NUM_SIDES + 1;
        cout << "Computer rolled " << computerRoll << endl;
        score = playerRoll(NUM_SIDES, computerRoll);
    } while( getYesNo("Do you want to play again?") );

    /*
    // Test drivers
    // showInstructions();
    // cout << getYesNo("Do you want this to be true (y or n)?");
    // cout << playerRoll(6, 1) << endl;
*/

    return 0;
}
void showInstructions()
{
    cout << "These are the instructions" << endl;
}

bool getYesNo(string question)
{
    cout << question;
    char yOrN;
    cin >> yOrN;

    return yOrN == 'Y' || yOrN == 'y';
}

int playerRoll(int numSides, int compRoll)
{
    int roll = 0;
    int score = 0;
    do
    {
        getYesNo("Do you want to roll the die (y or n) ?");
        roll = rand() % numSides + 1;
        cout << roll << endl;
        score++;
    } while (roll != compRoll);
    cout << "You got it in " << score << " roles!" << endl;
    return score;
}

/*
void showInstructions()
{
    cout << "In showInstructions" << endl;
}

bool getYesNo(string question)
{
    cout << "In getYesNo" << endl;
    return false;
}

int playerRoll(int numSides)
{
    cout << "In playerRoll" << endl;
    return 3;
}
*/





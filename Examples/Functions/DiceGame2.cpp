#include <iostream>
using namespace std;

const int MAX = 6;

void GameLoop( int compRoll);
bool YesNo();

int main()
{
    srand(time(NULL));  // Seed random number generator
    int cRoll = 0;         // Computer's dice roll
    do
    {
        cRoll = rand() % MAX + 1;
        cout << "Computer rolled " << cRoll << endl;
        GameLoop(cRoll);   // Player rolls dice
        cout << "Do you want to paly again? (y/n)";
    } while (YesNo());
    return 0;
}

void GameLoop( int compRoll)    // Player rolls dice, check for match
{
    int playerRoll;
    do
    {
        playerRoll = rand() % MAX + 1;
        cout << "You rolled " << playerRoll << endl;
        if (playerRoll == compRoll)
            cout << "You win!" << endl;
        cout << "Do you want to roll again? (y/n) ";
    } while ( YesNo() );
}

bool YesNo()        // Get input for yes/no questions
{
    char yn = 'n';  // Answer to y/n question
    cin.get(yn);
    cin.ignore();

    while ( yn != 'y' && yn != 'n')
    {
        cout << "Please enter y or n: ";
        cin.get(yn);
        cin.ignore();
    }

    return ('y' == yn);
}





















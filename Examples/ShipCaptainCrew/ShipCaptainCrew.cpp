#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    short die1, die2, die3, die4, die5; // five die for play
    short score = 0;    // holds score at end of game
    char ch; // dummy variable, not used

    // Get seed for random number generator
    srand( static_cast<unsigned>(time( NULL )) );

    cout << "Welcome to the game of Ship, Captain, Crew!" << endl;
    cout<< "Press enter to throw all five dice.";
    cin.get(ch);
    cout << endl;

   // First throw
    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    die3 = 1 + rand() % 6;
    die4 = 1 + rand() % 6;
    die5 = 1 + rand() % 6;

    cout <<"Dice:" << setw(3) << die1 << setw(3) << die2 << setw(3) << die3 << setw(3) << die4 << setw(3) << die5 << endl;
    if ((die1 == 6) || (die2 == 6) || (die3 == 6) || (die4 == 6) || (die5 == 6))
        cout << "You have a ship!" << endl;

    if ((die1 == 5) || (die2 == 5) || (die3 == 5) || (die4 == 5) || (die5 == 5))
        cout << "You have a captian!" << endl;

    if ((die1 == 4) || (die2 == 4) || (die3 == 4) || (die4 == 4) || (die5 == 4))
        cout << "You have a crew!" << endl;

    cout<< "Press enter to throw the dice again.";
    cin.get(ch);
    cout << endl;

   // Second throw
    if (die1 < 4)
        die1 = 1 + rand() % 6;
    if (die2 < 4)
        die2 = 1 + rand() % 6;
    if (die3 < 4)
        die3 = 1 + rand() % 6;
    if (die4 < 4)
        die4 = 1 + rand() % 6;
    if (die5 < 4)
        die5 = 1 + rand() % 6;

    cout <<"Dice:" << setw(3) << die1 << setw(3) << die2 << setw(3) << die3 << setw(3) << die4 << setw(3) << die5 << endl;
    if ((die1 == 6) || (die2 == 6) || (die3 == 6) || (die4 == 6) || (die5 == 6))
        cout << "You have a ship!" << endl;

    if ((die1 == 5) || (die2 == 5) || (die3 == 5) || (die4 == 5) || (die5 == 5))
        cout << "You have a captian!" << endl;

    if ((die1 == 4) || (die2 == 4) || (die3 == 4) || (die4 == 4) || (die5 == 4))
        cout << "You have a crew!" << endl;

    cout<< "Press enter to throw the dice again.";
    cin.get(ch);
    cout << endl;

          // Third throw
    if (die1 < 4)
        die1 = 1 + rand() % 6;
    if (die2 < 4)
        die2 = 1 + rand() % 6;
    if (die3 < 4)
        die3 = 1 + rand() % 6;
    if (die4 < 4)
        die4 = 1 + rand() % 6;
    if (die5 < 4)
        die5 = 1 + rand() % 6;

    cout <<"Dice:" << setw(3) << die1 << setw(3) << die2 << setw(3) << die3 << setw(3) << die4 << setw(3) << die5 << endl;
    if ((die1 == 6) || (die2 == 6) || (die3 == 6) || (die4 == 6) || (die5 == 6))
        cout << "You have a ship!" << endl;

    if ((die1 == 5) || (die2 == 5) || (die3 == 5) || (die4 == 5) || (die5 == 5))
        cout << "You have a captian!" << endl;

    if ((die1 == 4) || (die2 == 4) || (die3 == 4) || (die4 == 4) || (die5 == 4))
        cout << "You have a crew!" << endl;

   if (die1 < 4)
        score += die1;
    if (die2 < 4)
        score += die2;
    if (die3 < 4)
        score += die3;
    if (die4 < 4)
        score += die4;
    if (die5 < 4)
        score += die5;

    cout << endl;
    cout << "Your score is: " << score << endl;
    return 0;
}

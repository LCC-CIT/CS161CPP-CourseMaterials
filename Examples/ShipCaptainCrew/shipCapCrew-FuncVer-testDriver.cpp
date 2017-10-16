#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// rollDice returns a code: 6 = got ship,
//5 = got ship and captain, 4 = got ship, captaain, andcrew
// It also displays the dice rolled and the socre.
int rollDice(int scc);

const int NOTHING = 7, SHIP = 6, CAPTAIN = 5, CREW = 4, NUM_DICE = 5;

int main()
{
    // Seed the random number generator
    srand( static_cast<unsigned>(time( NULL )) );

    // Test rollDice
    int sccCode = NOTHING;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;
    sccCode = rollDice(sccCode);
    cout << sccCode  << endl;

    return 0;
}


int rollDice(int scc)
{
    // initialize local variables
    int dieVal = 0, score = 0;
    bool ship = false, cap = false, crew = false;

    // calculate number of dice to simulate rolling
    int numDice = NUM_DICE - (NOTHING - scc);

    // roll the dice
   for (int die = 0; die < numDice; die++)
    {
        dieVal = 1 + rand() % 6;   // range = 1 to 6 for six a sided die
        cout << dieVal;
        if (die < numDice - 1)
            cout << ", ";

        score += dieVal;

        // check for die representing ship, captain, or crew
        // this doesn't depend on the order.
        switch(dieVal)
        {
            case SHIP:
                ship = true;
                break;
            case CAPTAIN:
                cap = true;
                break;
            case CREW:
                crew = true;
        }
    }       // end loop to roll dice
    cout << endl;

    // See if we got a new ship, captain or crew.
    // This depends on getting them in order.
    // Calculate the score.
    if (scc == NOTHING && ship)
    {
        scc = SHIP;
        score -= SHIP;
        cout << "You got a ship!";
    }
    if (scc == SHIP && cap)
    {
        scc = CAPTAIN;
        score -= CAPTAIN;
        cout << "You got a captain!";
    }
    if (scc == CAPTAIN && crew)
    {
        scc = CREW;
        score -= CREW;
        cout << "You got a crew!";
    }
    if (scc != CREW)    // only show a score when once you have a crew
    {
        score = 0;
    }
    cout << "Your score is " << score << endl;

    return scc;
}

#include <iostream>
using namespace std;

void takeSticks(int &numInPile)
{
    int numTaken = 0;

    do
    {
    cout << "How many sticks will you take?";
     cin >> numTaken;
    }
     while (numTaken > 4);
    numInPile -= numTaken;
    return;
}


int main()
{
    int pile = 22,
        player = 1,
        sticksTaken = 0;

    while (pile > 0)
    {
        cout << "There are " << pile << " on the pile" << endl;
        cout << "Move for Player #" << player<< endl;
        takeSticks(pile);


    }

    return 0;
}


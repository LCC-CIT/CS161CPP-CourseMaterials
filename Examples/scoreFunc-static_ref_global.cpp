#include <iostream>
using namespace std;
/*
Demonstrate totaling a score in a function using:
- A global variable
- Pass by reference
- A static variable
*/

const int WINNING_SCORE = 100;

// For function with global variable
int runningScore = 0;
bool score(int pts);


/*
// For pass by reference
bool score(int pts, int &rScore);
*/

/*
// For function with static variable
 bool score(int pts);
*/


int main()
{
    int points = 0;
    bool youWin = false;
    // For version with pass by reference
    int runningScore = 0;
    do
    {
        cout << "Enter points: ";
        cin >> points;
        youWin = score(points);
        //youWin = score(points, runningScore);
    }while ( youWin != true);
    cout << "You win!" << endl;

    return 0;
}


// version with global variable
bool score(int pts)
{
    runningScore += pts;
    cout << "Total Score: " << runningScore << endl;
    return (runningScore >= WINNING_SCORE);
}


/*
// Version with static variable
bool score(int pts)
{
    static int runningScore = 0;
    runningScore += pts;
    cout << "Total Score: " << runningScore << endl;
    return (runningScore >= WINNING_SCORE);
}
*/

/*
// version with pass by reference
bool score(int pts, int &rScore)
{
    rScore += pts;
    cout << "Total Score: " << rScore << endl;
    return (rScore >= WINNING_SCORE);
}
*/

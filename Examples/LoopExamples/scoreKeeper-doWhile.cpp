#include <iostream>
using namespace std;

// Program to tally the score for one player or side in a game
int main()
{
    int score = 0, totalScore = 0;

    do
    {
        totalScore += score;
        // Get score
        cout << "Enter score: ";
        cin >> score;
    }
    while (score >= 0);
   cout << "Total score: " << totalScore;
    return 0;
}

#include <iostream>
using namespace std;

// Program to keep track of scores for on player or side
// Enter a -1 to quit entering scores.
int main()
{
    int score = 0, totalScore = 0;

    while (score >= 0)
    {
        // Get score
        cout << "Enter score: ";
        cin >> score;
        // Check for sentinal
        if (score < 0)
            break;
        // Accumulate total
        totalScore += score;
    }
    cout << "Total score: " << totalScore;
    return 0;
}

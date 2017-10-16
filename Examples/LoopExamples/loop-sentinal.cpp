#include <iostream>
using namespace std;

// Program to calculate average scores
// Enter a -1 to quit entering scores.
int main()
{
    float score = 0, avgScore = 0, totalScore;
    int count = 1;

   for (count = 1; count > 0; count++)
    {
        // Get score
        cout << "Enter a score: ";
        cin >> score;
        // Check for sentinal
        if (score < 0)
            count = -1;
        else
            // Accumulate average
            avgScore = (totalScore += score) / count;
    }
    cout << "Average score: " << avgScore;
    return 0;
}

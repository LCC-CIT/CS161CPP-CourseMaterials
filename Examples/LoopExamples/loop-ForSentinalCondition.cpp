#include <iostream>
using namespace std;

// Program to calculate average scores
// Enter a -1 to quit entering scores.
int main()
{
    float score = 0, avgScore = 0, totalScore;

   for ( int count = 0; score >= 0; count++)
    {
        // Get score
       avgScore = (totalScore += score) / count;
        cout << "Enter a score: ";
        cin >> score;
    }
    cout << "Average score: " << avgScore;
    return 0;
}

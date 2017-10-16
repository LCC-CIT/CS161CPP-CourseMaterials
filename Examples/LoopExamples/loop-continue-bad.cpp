#include <iostream>
using namespace std;

// Program to calculate total a score
int main()
{
    int score = 0, totalScore = 0;

    while (score >= 0)
    {
        // Get sale price
        cout << "Enter score: ";
        cin >> score;
        if (score < 0)
           continue;
        totalScore += score;
    }
    cout << "Total score: " << totalScore;
    return 0;
}

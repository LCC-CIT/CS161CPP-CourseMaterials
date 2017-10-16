#include <iostream>
using namespace std;

// Program to calculate the average of grades
int main()
{
    int score = 0, totalScore = 0;

    while (score >= 0)
    {
        // Get sale price
        cout << "Enter score: ";
        cin >> score;
        if (score < 0)
            break;
        totalScore += score;
    }
    cout << "Total score: " << totalScore;
    return 0;
}

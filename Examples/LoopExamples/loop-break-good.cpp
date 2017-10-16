#include <iostream>
using namespace std;

// Enter scores from 0 to 100. Validate
// Calculate the average
// Use -1 as a sentinal

int main()
{
    int score = 0, total = 0, scoreCount = 0;
    do
    {
        cout << "#" << scoreCount << " - Enter a score from 0 to 100: ";
        cin >> score;
        if (score < 0 || score > 100)
            continue;

        total += score;
        scoreCount++;
    } while (score != -1);

    cout << "Number of scores: " << scoreCount << endl;
    cout << "Average: " << total / scoreCount << endl;

    return 0;
}

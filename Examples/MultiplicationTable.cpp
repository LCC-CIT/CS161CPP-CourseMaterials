#include <iostream>
#include <iomanip>
using namespace std;

// This is a C++ solution to the problem in slide #29 of
// Lecture Notes: Repetition Program Design (PDF document on moodle)

/*
Requirements for this problem
Assume that you’ve been asked to write a program that displays
a multiplication chart like the one given below.
The user enters an integer that represents the “dimension”
of the chart.

1 2 3 4
2 4 6 8
3 6 9 12
4 8 12 16
*/

int main()
{
        int dimension = 0;  // holds the max dimension of the table
        // Get a number to check
        cout << "Enter a table size between 1 and 9: ";
        cin >> dimension;
        // Validate the input
       while (dimension < 1 || dimension > 9)
        {
            "You entered a number that is out of range. Try again: ";
            cin >> dimension;
        }

    // Outer loop increments the rows
    for (int i = 1; i <= dimension; i++)
    {
        // Nested loop increments the columns
        for (int j = 1; j <= dimension; j++)
            cout << setw(2) << i * j << " ";
        cout << endl;   // At the end of every row

    }

    return 0;
}

#include <iostream>
using namespace std;

// This is a C++ solution to the problem in slide #28 of
// Lecture Notes: Repetition Program Design (PDF document on moodle)

/*
Requirements for this problem:
Assume that you are creating a program that will determine if a number
is a prime number. The user enters an integer between 4 and 100.
The program prints either “Prime” or “Composite”.
*/

int main()
{
    int num = 0,    // Number to check to see if it's prime
    divisor = 0;    // Holds the divisor we use to check for factors

    char again = 'n';
    do
    {
        // Always start with the lowest possible divisor
        divisor = 2;
        // Get a number to check
        cout << "Enter a number between 4 and 100: ";
        cin >> num;
        // Validate the input (It must be within the specified range)
       while (num < 4 || num > 100)
        {
            "You entered a number that is not between 4 and 100. Try again: ";
            cin >> num;
        }

        // Repetitively divide by all the integers between 2 and our number - 1.
        // (Skip 1 and the number itself because they are always factors).
        // If any of them do not result in a remainder they are a factor.
        while ((num % divisor != 0) && divisor < num)
            divisor++;
        // If we looped through all the divisors without finding a
        // factor then this is a prime number.
        if (divisor == num)
            cout << "It's a prime number" << endl;
        else
            cout << "It's a composite number" << endl;

        // See if the user wants to check another number
        cout << "Do you want to try another number? (y/n) ";
        cin >> again;
    } while (again == 'y');

    return 0;
}

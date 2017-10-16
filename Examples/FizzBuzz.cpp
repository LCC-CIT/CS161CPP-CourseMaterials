#include <iostream>
#include <string>
using namespace std;

int main()
{

// This doesn't work yet
/*
    string out;
    for (int num = 1; num <= 100; num++)
    {
        if (num % 5 != 0)
        {
            if (num % 3 != 0)
                cout << num;
             else
                cout "Fizz";
        }
        else
        {
            cout << "Buzz";
        }

        cout ", ";
    }
*/

// First try, this took 8 minutes
 /*   for (int num = 1; num <= 100; num++)
    {
        if (num % 15 == 0)
            cout << "FizzBuzz";
        else if (num % 3 == 0)
            cout << "Fizz";
        else if (num % 5 == 0)
            cout << "Buzz";
        else
            cout << num;

        cout << ", ";
    }
*/
    return 0;
}

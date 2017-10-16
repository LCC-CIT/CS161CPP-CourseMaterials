#include <iostream>
using namespace std;

// Convert elapsed hours to days and hours.
// For example, 40 hours would convert to 1 day and 16 hours.

int main()
{
    cout << "Enter the number of hours: ";
    unsigned int hours;
    cin >> hours;
    // use integer division to get the number of days. (The fractional part of the result will be dropped)
    // use modulus to get the number of hours. (This is the remainder of the division above.)
    cout << "That is " << hours / 24 << " days and " << hours % 24 << " hours" << endl;

    return 0;
}

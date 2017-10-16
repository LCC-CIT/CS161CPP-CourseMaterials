// This program illustrates the how the fixed, showpoint, and
// setprecision manipulators operate when used together.
#include <iostream>
#include <iomanip>        // Needed to use stream manipulators
using namespace std;

int main()
{
	double amount = 125.0;

	cout << setw(6) << amount << endl;

	cout << showpoint;
	cout << setw(6) << amount << endl;

   cout << fixed << showpoint << setprecision(2);
	cout << setw(6) << amount << endl;
   return 0;
}

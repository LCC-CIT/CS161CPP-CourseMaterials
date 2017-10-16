// Accessing struct 7-1
// Comparing structs 7-2
// Initializing struct w/constructor 7-3
// Nested structs 7-4
// Structs as func args 7-5
// Returning a struct from a func 7-6










#include <iostream>
#include <iomanip>
using namespace std;

const double CALORIES_BURNED_PER_MIN = 3.9;
double calsBurned ( int minutes );

int main()
{
	cout << "\n\t\t-- TREADMILL CALORIES BURNED --\n\n";

	cout << "\t Mins. | Cals. Burned\n\t-------+--------------\n";
	
	int i;
	for ( i = 5; i <= 30; i = i + 5 )
	{
		cout << "\t" << setw(6) << i << " | " << setw(7) << fixed << showpoint << setprecision(1) << calsBurned(i) << endl;
	}
	
	cout << endl;
	
	return 0;
}

double calsBurned ( int minutes )
{
	return CALORIES_BURNED_PER_MIN * minutes;
}
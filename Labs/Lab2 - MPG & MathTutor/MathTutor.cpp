#include "stdlib.h"
#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int varA, varB, answer;

	srand( static_cast<unsigned>(time( NULL )) ); 
	varA = rand()%99;
	varB = rand()%99;
	cout << setw(4) << varA << endl;
	cout << "+" << setw(3) << varB << endl;
	cout << "-----" << endl;
	cin.get();
	cout << setw(4) << varA + varB << endl;
	return 0;
}
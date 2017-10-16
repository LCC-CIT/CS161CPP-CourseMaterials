#include <iostream>
#include <iomanip>
#include "time.h"
using namespace std;

int main()
{
    int myNum;
    int dummy;

    srand(time(0));
    //srand( static_cast<unsigned>(time( NULL )) );

    int newNum = rand() % 500 + 1;
    int newNum2 = rand() % 500 + 1;
    cout << setw(5) <<newNum << endl;
    cout << setw(5)<< newNum2 << endl;

    cout <<  "Press any enter to continue";
    cin.get();
    cout << "ok" << endl;



    return 0;
}

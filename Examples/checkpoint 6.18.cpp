#include <iostream>
using namespace std;

void showVar(); // Function prototype

int main()
{
    for ( int count = 0; count < 10; count++)
    showVar();

    return 0;
}

// Definition of function showVar
void showVar()
{
    static int var = 10;
    cout << var << endl;
    var++;
}

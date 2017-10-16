#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Create top row of numbers for multiplication table
    cout << "    ";
    for (int i = 0; i <= 9; i++)
        cout << setw(3) << i;
    cout << endl;

    // Create horizontal line
    cout << "    ";
    for (int i = 0; i <= 9; i++)
        cout << setw(3) << "_";
    cout << endl;

    // Create multiplication table
    for (int r = 0; r <= 9; r++)
    {
        cout << setw(3) << r << "|";
        for ( int c = 0; c <= 9; c++)
            cout << setw(3) << r * c;
        cout << endl;
    }

     return 0;
}

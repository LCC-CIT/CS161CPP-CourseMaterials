#include <iostream>
using namespace std;

int main ()
{
    int num = 0;


    // while
    while ( num < 1 || num > 100 )
    {
        cout << "enter a number: ";
        cin >> num;
    }

    // Find numbers that evenly divide our number
    /*
    int counter = 1;
    while ( counter <= num)
    {
        if (num % counter == 0)
            cout << counter << endl;

        counter++;
    }
    */

    for (short counter = 1; counter <= num; counter++)
            if (num % counter == 0)
                cout << counter << endl;



    return 0;
}

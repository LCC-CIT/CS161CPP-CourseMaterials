#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    do
    {
        cout << "Enter a number " << endl;
        cin >> number;
        cin.ignore();
    } while( number < 42 || number > 52);
    cout << "You guessed it" << endl;

     return 0;
}

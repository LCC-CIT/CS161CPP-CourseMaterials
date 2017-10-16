#include <iostream>
using namespace std;

int main()
{
    srand( static_cast<unsigned>(time( NULL )) );

    int number;
    number = rand();
    cout << number << endl;

    number = rand();
    cout << number << endl;

    number = rand();
    cout << number << endl;


    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int total = 0, count, number = 0;

    for (count = 0; count < 5; count++)
    {
        cout << "Enter a number" << endl;
        cin >> number;
        total += number;
    }
    cout << "The total is: " << total << endl;
     return 0;
}

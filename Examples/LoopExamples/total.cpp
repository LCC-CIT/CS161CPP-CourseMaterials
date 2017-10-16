#include <iostream>
using namespace std;

int main()
{
    int total = 0, count = 0, number = 0;

    while (count < 5)
    {
        cout << "Enter a number" << endl;
        cin >> number;
        total += number;
        count++;
    }
    cout << "The total is: " << total << endl;
     return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int age = 0, curYear = 2011, birthYear = 0;
    char hadBDay = 'n';

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the current year: ";
    cin >> curYear;
    cout << "Have you had a birthday yet this year? (y/n) ";
    cin >> hadBDay;

    if (hadBDay == 'y')
        birthYear = curYear - age;
    else
        birthYear = curYear - age - 1;

    cout << "You were born in " << birthYear << endl;

    return 0;
}

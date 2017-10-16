#include <iostream>
using namespace std;

int main()
{
    const int CURRENT_YEAR = 2011;
    short age = 0;
    char thisYear = 'n';

/*
    // pretest input validation
    cout << "What is your age? ";
    cin >> age;
    while (age < 1 || age > 150)
    {
        cout << "Invalid age. Must be over 1 and less than 150" << endl;
        cout << "What is your age? ";
        cin >> age;
    }
*/
    // posttest input validation
    do
    {
        cout << "What is your age? Enter an age from 1 to 150: ";
        cin >> age;
        if (age < 1 || age > 150)
        {
            age = 0;
            cout << "You entered an invalid age." << endl;
        }
    } while (age == 0);


    cout << "Have you had a birthday yet this year? (y/n)";
    cin.ignore();
    cin.get(thisYear);
    if ('y' == thisYear || 'n' == thisYear)
    {
        if ( 'y' == thisYear)
            cout << "You were born in: " << CURRENT_YEAR - age << endl;
        else
            cout << "You were born in: " << CURRENT_YEAR -1 - age << endl;
    }

    return 0;
}

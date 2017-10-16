// Program to calculate the year a person was born
// By Brian Bird, Written 10/5/2009, Modified 11/16/2011

/* Algorithm in pseudocode

    main
        Call getValidInt(What year is it, 2000, 3000) // puts result in thisYear
        Do
            Call getValidInt(Enter your age, 1, 125)    // puts result in age
            Call calcBirthYear(age, thisYear)
            Call inputYesNo(Do it again?)  // puts result in doAgain
        While doAgain is true
    End main

    getValidInt     // Receives a prompt message
                    // and receives min and max as limits for a valid number
        Display prompt message
        Input num
        While num < min OR num > max
            Display an error message
            Input num
        End while
        Return num
    End getValidInt

    inputYesNo  // Receives a prompt message
        Display prompt message
        Input answer
        While answer != y AND answer != Y AND answer != n AND answer != N
            Display error message
            Input answer
        End while
        If answer == y OR answer == Y Then
            return true
        Else
            return false
        End If
    end inputYesNo

    calcBirthYear   // Receives person's age and currentYear
        Call inputYesNo(Have you had a birthday yet this year?) // puts result in hadBDay
        If hadBday == true Then
            Display "You were born in" currentYear - age
        Else
            Display "You were born in" currentYear - age - 1
    End calcBirthYear

*/

#include <iostream>
using namespace std;

// Function Prototypes
int getValidInt(string question, int min, int max);
bool inputYesNo(string);
void calcBirthYear(short, short);


// Program to calculate the year a person was born
int main()
{
    const int MIN_AGE = 1;
    const int MAX_AGE = 125;

    short age = 0, thisYear = 0;
    thisYear = getValidInt("What is the current year? ", 2000, 3000);

    do
    {
        age = getValidInt("Enter your age: ", MIN_AGE, MAX_AGE);
        calcBirthYear(age, thisYear);
    } while( inputYesNo("Would you like to do that again? ") );

    return 0;
}


// Get integer input within a range
int getValidInt(string question, int min, int max)
{
    int num;
    cout << question;
    cin >> num;
    while (num < min || num > max)
    {
        cout << "Please enter an age between" << min << " and " << max << ": ";
        cin >> num;
    }
    return num;
}


// Calculate user's birth year
void calcBirthYear(short age, short currentYear)
{
    if ( inputYesNo("Have you had a birthday yet this year? ") )
        cout << "You were born in: " << currentYear - age << endl;
    else
        cout << "You were born in: " << currentYear - 1 - age << endl;
}


// Get a 'y' or 'n' answer to any question
bool inputYesNo(string prompt)
{
    cout << prompt << " (y/n) ";
    char answer = '0';
    cin.ignore();
    cin.get(answer);
    while ('y' != answer && 'Y' != answer && 'n' != answer && 'N' != answer)
    {
        cout << "Please enter either y or n : ";
        cin.ignore();
        cin.get(answer);
    }

    return (answer == 'y' || answer == 'Y');
}



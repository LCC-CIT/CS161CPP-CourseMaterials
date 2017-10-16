#include <iostream>
using namespace std;

const int MIN = 0, MAX = 100;
int num = 1, highest = MIN, lowest = MAX;


void DisplayInst()
{
    cout << "Enter numbers at the prompt. Enter zero when you're done." <<endl;

    return;
}

int GetInput()
{
    cout << "Enter a number from " << MIN  << " to " << MAX << " :";
    cin >> num;

    while (num < MIN || num > MAX)
    {
        cout << "Wrong number! Try again: ";
        cin >> num;
    }

 return num;
}

// Test num to see if it is higher or lower than the
// highest and lowest numbers previously found.
void FindHighNLow()
{
    if (num > highest)
        highest = num;

    if (num < lowest)
        lowest = num;

    return;
}

int main()
{

    DisplayInst();

    GetInput();
    while( num > 0)
    {
      FindHighNLow();
      GetInput();
    }

    cout << "high = " << highest << endl;
    cout << "low = " << lowest << endl;

    return 0;
}









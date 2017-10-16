#include <iostream>
using namespace std;

const int MIN = 0, MAX = 200;



void DisplayInst()
{
    cout << "Enter numbers at the prompt. Enter zero when you're done." <<endl;

    return;
}

int GetInput()
{
    int num;
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
void FindHighNLow(int num, int &high, int &low)
{
    if (num > high)
        high = num;

    if (num < low)
        low = num;

    return;
}

int main()
{
    int highest = MIN, lowest = MAX;
    int number = 1;
    DisplayInst();

    number = GetInput();
    while( number > 0)
    {
      FindHighNLow(number, highest, lowest);
      number = GetInput();
    }

    if (highest == MIN)
        cout << "No numbers entered" << endl;
    else
    {
        cout << "high = " << highest << endl;
        cout << "low = " << lowest << endl;
    }

    return 0;
}









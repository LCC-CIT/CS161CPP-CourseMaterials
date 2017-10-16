#include <iostream>
using namespace std;

int getValid(int min, int max);

const int MIN = 10;
const int MAX = 90;

int main()
{
    cout << "Enter an integer between " << MIN << " and " << MAX << endl;
    cout << "You entered: " << getValid(MIN, MAX) << endl;
    return 0;
}

int getValid(int min, int max)
{
    int num;
    cin >> num;
    while (num < MIN || num > MAX)
    {
        cout << "Your number is out of range, please re-enter it: ";
        cin >> num;
    }
    return num;
}

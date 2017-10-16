#include <iostream>
using namespace std;

int main()
{
    int feet = 5;
    int inches = 7;

    cout << "meters: " << ((feet * 12 + inches) * 2.54) / 100 << endl;
    cout << "Experiment: " << feet / 2.54 << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    float mpg = 0.0;
    float miles = 0;
    float gallons = 20;

    cout << "Enter the number of miles you went :";
    cin >> miles;

    mpg = miles / gallons;

    cout << "MPG is: " << mpg << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    // Define example integer variable
    unsigned short maxUShortVal = 65535;
    short minShortVal = -32768;
    unsigned int maxUIntVal = 4294967295; // 2 billiion and ...
    int minIntVal = -2147483648;

    // Output mins and maxes for shorts
    cout << "The minimum value for a short is " << minShortVal << endl;
    cout << "The maximum value for a short is " << minShortVal * (-1) - 1 << endl;
    cout << "The maximum value for an unsigned short is " << maxUShortVal << endl;
    cout << endl;

    // Output mins and maxes for ints
    cout << "The minimum value for an int is " << minIntVal << endl;
    cout << "The maximum value for an int is " << minIntVal * (-1) - 1 << endl;
    cout << "The maximum value for an unsigned int is " << maxUIntVal << endl;

    return 0;
}



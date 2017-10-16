#include <iostream>
using namespace std;

int main()
{
    int taxCode = 3;
    float pa = 75.89, tax = 0.0;

    switch(taxCode)
    {
        case 1: tax = 0;
        break;
        case 2: tax = 0.03 * pa;
        break;
        case 3: tax = 0.05 * pa;
        break;
        case 4: tax = 0.07 * pa;
        break;
        default: tax = 0;
    }

    cout << "Tax: " << tax << endl;
    return 0;
}






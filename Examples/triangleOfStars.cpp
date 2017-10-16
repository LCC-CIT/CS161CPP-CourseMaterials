#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dim = 0;
    cout << "Enter number of dimetions: ";
    cin >> dim;
    for (int outer = 1; outer <= dim; outer++)
    {
        for (int inner = 1; inner <= dim; inner++)
        {
            cout << setw(4) << inner * outer;
        }
        cout << endl;
    }

    return 0;
}

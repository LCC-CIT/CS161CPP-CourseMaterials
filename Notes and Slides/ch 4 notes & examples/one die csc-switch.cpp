#include <iostream>
using namespace std;

int main()
{
    int roll;

    cout << "Enter the number you rolled: ";
    cin >> roll;

    switch (roll)
    {
        case 6: cout << "You've got a ship";
            break;
        case 5: cout << "You've got a captain";
            break;
        case 4:
        case 3:
        {
            cout << "You’ve got a crew" << endl;
            cout << "You are ready to calculate a score" << endl;
        }

        default: cout << "You didn't get a ship, captain, or crew";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int roll;
    bool ready;
    ready = false;

    cout << "Enter the number you rolled: ";
    cin >> roll;

    if (roll == 6)
       cout << "You've got a ship" << endl;
    else if (roll == 5)
      cout << "You've got a captain" << endl;
    else if (roll == 4)
    {
      cout << "You've got a crew" << endl;
      ready = true;
    }
    else
       cout << "You didn't get a ship, captain, or crew" << endl;

    if (ready)
        cout << "ready to calculate score";

    return 0;
}

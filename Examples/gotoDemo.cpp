#include <iostream>

using namespace std;

int main()
{

    // This is an example of a program that uses a goto
    // This is not recommended!

    int num = 0;

    EnterNumber:
    cout <<"Enter a number from 1 to 10: ";
    cin >> num;
    switch (num)
    {
        case 1: cout << "Do something for 1";
        break;
        case 2: cout << "Do something for 2";
        break;
        case 3: cout << "Do something for 3";
        break;
        //imagine there are more cases for 4 through 10
        default: goto EnterNumber;
    }


    // Instead of using a goto, use a loop like this:

    /*
    bool valid = true;
    while (valid)
    {
        cout <<"Enter a number from 1 to 10: ";
        cin >> num;
        switch (num)
        {
            case 1: cout << "Do something for 1";
            break;
            case 2: cout << "Do something for 2";
            break;
            //add more cases for 3 through 10
            default: valid = false;
        }
    }
    */
 return 0;
}

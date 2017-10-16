#include <iostream>
using namespace std;

int main()


{
        int decNum;
          cout << "Please enter an integer between 0 and 15:   ";

          cin >> decNum;

          if (decNum >= 0 && decNum <= 15)

                     {

                     eightsBit = decNum / 8;

                     decNum = decNum - eightsBit;

                     foursBit = decNum / 4;

                     decNum = decNum - foursBit;

                     twosBit = decNum / 2;

                      decNum = decNum - twosBit;

                       XonesBit= decNum;

                     cout << "Your number in binary is " + eightsBit + foursBit + twosBit + onesBit;

                    }

         else

                   {

                   cout << "Invalid Entry.";

                    }

         return 0;

}

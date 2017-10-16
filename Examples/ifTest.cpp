#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 1, c = 1;

    if (a == b == c)
        cout << "all equal";
    else
        cout << "they're not equal";

    cout << endl;

   c = 2;
   if (a == b == c)
        cout << "all equal";
    else
        cout << "they're not equal";

}

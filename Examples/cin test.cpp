#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Test multiple inputs
    string str1, str2;
    int num1, num2;

    cout << "Enter a string, an int and a mixed int/string: " << endl;
    cin >> str1 >> num1 >> str2 >> num2;
    // Note: the extraction operator won't parse the mixed int/string
    cout << "You entered:" << str1 << ", " << num1 << ", " << str2 << ", " << num2;

    cout << "Press enter to continue" << endl;
    cin.get();
    cout << "Continued!" << endl;

    return 0;
}

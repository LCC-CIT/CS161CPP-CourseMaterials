#include <iostream>
using namespace std;

int main()
{
    // calculator program
    int num1 = 0, num2 = 0;
    char op = ' ';

    cout << "enter the first integer: ";
    cin >> num1;
    cout << "enter operator ( + - * / ): ";
    cin >> op;
    cout << "enter the second integer: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "Not a valid operator!" << endl;
    }

    return 0;
}

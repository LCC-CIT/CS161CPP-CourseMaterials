#include <iostream>
#include <string>
using namespace std;

/* This is a C++ implementation of the Algorithm shown in example 4.4
of Simple Program Design, A Step-by-Step Approach by Lesley Anne Robertson.

Problem:
A program is needed to read a customer’s name, a purchase amount, and a tax code which is a number from 1 to 4.
The tax code has been validated and will be one of the following:
    1. tax exempt (0%)
    2. state sales tax only (3%)
    3. federal and state sales tax (5%)
    4. Special sales tax (7%)
The program must then compute the sales tax and the total amount due and print the customer’s name,
purchase amount, sales tax and total amount due. */

/* Algorithm in pseudocode:

DISPLAY prompt for name, purchase amount, and tax code
GET name, purchase amount, and tax code
IF taxCode < 1 OR taxCode > 4 THEN
     DISPLAY an errror message
     GET taxCode
ENDIF

CASE OF taxCode
    1: tax = 0
    2: tax = purchaseAmount * 0.03
    3: tax = purchaseAmount * 0.05
    4: tax = purchaseAmount * 0.07
ENDCASE

DISPLAY name, purchaseAmount, tax, purchaseAmount + tax */

int main()
{
    string name = "";
    int taxCode = 0;
    float purchaseAmount = 0.0, tax = 0.0, total = 0.0;

    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;
    cout << "Enter the tax code: ";
    cin >> taxCode;
    if (taxCode < 1 || taxCode > 4)     // Validate the tax code
    {
        cout << "The tax code you entered is out of range" << endl;
        cout << "Please enter a tax code between 1 and 4: ";
        cin >> taxCode;
    }

    switch(taxCode)
    {
        // We don't need to calculate tax for
        // taxCode 1 since the tax is zero
        case 2: tax = purchaseAmount * 0.03;
        break;
        case 3: tax = purchaseAmount * 0.05;
        break;
        case 4: tax = purchaseAmount * 0.07;
        break;
        default: tax = 0;   // this covers taxCode 1
    }

    cout << "Name: " << name << endl;
    cout << "Purchase Amount: " << purchaseAmount << endl;
    cout << "Tax: " << tax << endl;
    cout << "Total: " << purchaseAmount + tax << endl;

    return 0;
}








/*  11. Stock Profit
The profit from the sale of a stock can be calculated as follows:
Profit = (( NS * SP) - SC) - (( NS * PP) + PC)
where NS is the number of shares, SP is the sale price per share,
SC is the sale commission paid, PP is the purchase price per share,
and PC is the purchase commission paid.

If the calculation yields a positive value,
then the sale of the stock resulted in a profit.
If the calculation yields a negative number,
then the sale resulted in a loss.

Write a function that accepts as arguments the number of shares,
the purchase price per share, the purchase commission paid,
the sale price per share, and the sale commission paid.
The function should return the profit (or loss) from the sale of stock.
Demonstrate the function in a program that asks the user to enter the
necessary data and displays the amount of the profit or loss.
*/

#include <iostream>
using namespace std;

float stockProfit(int nShares, float purchSharePrice, float purchCommission,
                  float saleSharePrice, float saleCommission);

int main()
{
    int nSold = 0;
    float sPrice = 0.0, pPrice = 0.0, sCommission = 0.0,
           pCommission = 0.0, gainOrLoss = 0.0;
    cout << "Enter number of shares sold: ";
    cin >> nSold;
    cout << "Enter selling price: ";
    cin >> sPrice;
    cout << "Enter purchase price: ";
    cin >> pPrice;
    cout << "Enter sales commission: ";
    cin >> sCommission;
    cout << "Enter purchase commission: ";
    cin >> pCommission;
    gainOrLoss = stockProfit(nSold, pPrice, pCommission, sPrice, sCommission);
    if (gainOrLoss >= 0)
        cout << "The profit was: $" << gainOrLoss << endl;
    else
        cout << "The loss was: $" << -1 * gainOrLoss << endl;

    return 0;
}


float stockProfit(int nShares, float purchSharePrice, float purchCommission,
                  float saleSharePrice, float saleCommission)
{
    return nShares * saleSharePrice - nShares * purchSharePrice
                - saleCommission - purchCommission;
}

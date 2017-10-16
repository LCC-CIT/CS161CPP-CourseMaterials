/*  12. Multiple Stock Sales
Use the function that you wrote for problem 10 ( Stock Profit)
in a program that calculates the total profit or loss
from the sale of multiple stocks. The program should
ask the user for the number of stock sales, and the
necessary data for each stock sale. It should accumulate
the profit or loss for each stock sale and then display the total.
*/

#include <iostream>
using namespace std;

float stockProfit(int nShares, float purchSharePrice, float purchCommission,
                  float saleSharePrice, float saleCommission);


int main()
{
    int nSales = 0, nSold = 0;
    float sPrice = 0.0, pPrice = 0.0, sCommission = 0.0,
           pCommission = 0.0, gainOrLoss = 0.0, totalProfit = 0.0;

    cout << "Enter the number of stock sales: ";
    cin >> nSales;

    for (int sale = 1; sale <= nSales; sale++)
    {
        cout << "For stock sale number " << sale << " Enter:" << endl;
        cout << "Number of shares sold: ";
        cin >> nSold;
        cout << "Selling price: ";
        cin >> sPrice;
        cout << "Purchase price: ";
        cin >> pPrice;
        cout << "Sales commission: ";
        cin >> sCommission;
        cout << "Purchase commission: ";
        cin >> pCommission;
        gainOrLoss = stockProfit(nSold, pPrice, pCommission, sPrice, sCommission);
        cout << "This sale resulted in a profit/loss of: " << gainOrLoss << endl << endl;
        totalProfit += gainOrLoss;
    }

    if (totalProfit >= 0)
        cout << "The profit for all sales was: $" << totalProfit << endl;
    else
        cout << "The loss for all sales was: $" << -1 * totalProfit << endl;

    return 0;
}

float stockProfit(int nShares, float purchSharePrice, float purchCommission,
                  float saleSharePrice, float saleCommission)
{
    return nShares * saleSharePrice - nShares * purchSharePrice
                - saleCommission - purchCommission;
}

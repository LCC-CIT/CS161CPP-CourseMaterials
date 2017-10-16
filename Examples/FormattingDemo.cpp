#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Convert Euros to US Dollars
    float dollar = 0.0f, euro = 0.0f;
    float EXCHANGE_RATE = 1.2847f;
/*    cout << "Enter amount in Euros: ";
    cin >> euro;
    cout << fixed << setprecision(2);
    cout << "The value in US dollars is: $"
            << euro * EXCHANGE_RATE << endl;
*/

    // Display conversion table
    euro = 1.0f;
    const char E = 128; // Euro symbol
    cout << setw(5) << left << "Euros" << "  " << setw(7) << "Dollars" << endl;
    cout << setw(5) << left << "-----" << "  " << setw(7) << "-------" << endl;
    cout << setw(5) << right << E << euro << "  " << setw(7) << euro++ * EXCHANGE_RATE << endl;
    cout << setw(5) << right << euro << "  " << setw(7) << euro++ * EXCHANGE_RATE << endl;
    cout << setw(5) << right << euro << "  " << setw(7) << euro++ * EXCHANGE_RATE << endl;
    return 0;
}

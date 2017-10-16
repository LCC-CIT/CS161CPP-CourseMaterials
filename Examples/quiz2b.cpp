#include <iostream>
using namespace std;

int main ()
{
int decimalNumber, eightBit, fourBit, twoBit, oneBit;

cout << "Enter an integer between 0-15 " << endl;
cin >> decimalNumber;

eightBit = decimalNumber / 8;
decimalNumber = decimalNumber - eightBit * 8;
fourBit = decimalNumber / 4;
decimalNumber = decimalNumber - fourBit * 4;
twoBit = decimalNumber / 2;
decimalNumber = decimalNumber - twoBit * 2;
oneBit= decimalNumber;

cout << "unsigned binary value equals " << eightBit << fourBit << twoBit << oneBit << endl;

return 0;
}

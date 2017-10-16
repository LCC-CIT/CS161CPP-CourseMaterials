#include <iostream>
using namespace std;

int main()
{
    const short DEC_NUM = 65;
    const short HEX_NUM = 0x7a;
    const char LETTER = 'f';

    cout << "Decimal version of each number" << endl;
    short letter = LETTER;
    cout << DEC_NUM << endl;
    cout << HEX_NUM << endl;
    cout << letter << endl;

    cout << "Hex versions of each number" << endl;
    cout << hex << DEC_NUM << endl;
    cout << hex << HEX_NUM << endl;
    cout << hex << letter << endl;

    cout << "char versions of each number" << endl;
    char decNum = DEC_NUM, hexNum = HEX_NUM;
    cout << decNum << endl;
    cout << hexNum << endl;
    cout << LETTER << endl;

    return 0;
}

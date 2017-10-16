#include <iostream>
using namespace std;

struct Player
{
    string first;
    string middle;
    string last;
    int highScore;
};

Player getInfo();

int main()
{
    Player player1;
    Player player2;
    Player player3;

    player1 = getInfo();
    player2 = getInfo();
    player3 = getInfo();

    return 0;
}


Player getInfo()
{
    Player pl;

    cout << "Enter your full name: ";
    cin >> pl.first;
    cin >> pl.middle;
    cin >> pl.last;

    return pl;
}

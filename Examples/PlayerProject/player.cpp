#include "player.h"

player::player()      // default constructor
{
    highScore = 0;
    userName = "None";
    health = 0;
    password = "abcd";
}

player::player( string name)
{
    userName = name;
}

player::player(int hs, string n, int h, string pw)
{
    highScore = hs;
    userName = n;
    health = h;
    password = pw;
}

#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <string>
using namespace std;

// This class represents a player in a computer game
class player
{
    private:
    // member variables
    int highScore;
    string userName;
    int health;
    string password;

    public:
    // constructors
    player();      // default constructor
    player( string name);
    player(int hs, string n, int h, string pw);

    // member functions (inline function definitions)
    int getHealth() { return health; }
    string getUserName() { return userName; }
    int getHighScore() { return highScore; }
    bool isPassword(string pw) { return pw.compare(password); }
    void setUserName(string name) { userName = name; }
};


#endif // PLAYER_H_INCLUDED

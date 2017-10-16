#include <iostream>
#include <string>
#include "player.h"
using namespace std;

// Author: Brian Bird, 12/2/10
// This program demonstrates writing and testing a simple class
// It also demonstrates creating a multi-file project in Code::Blocks.

int main()
{
    // test drivers

    // Create a player object using the default constructor
    player Brian;
    // Test setUserName
    string name;
    cout << "Enter your user name: ";
    cin >> name;
    Brian.setUserName(name);
    cout << Brian.getUserName() << endl;
   // Test getters, show default values
    cout << Brian.getHealth() << endl;
    cout << Brian.getHighScore() << endl;

    // create another player object, but use the overloaded constructor
    player Cameron(1000, "Cam", 100, "I like banannas");
    // use getters to show the values that were set by the constructor
    cout << Cameron.getHealth() << endl;
    cout << Cameron.getUserName() << endl;
    cout << Cameron.getHighScore() << endl;
    // Test the password. 0 = match, 1 = no match
    cout << Cameron.isPassword("I like chocolate") << endl;
    cout << Cameron.isPassword("I like banannas") << endl;

    // Create another object using the default constructor
    player Austin;
    // Use the getters to show the default values
    cout << Austin.getHealth() << endl;
    cout << Austin.getUserName() << endl;
    cout << Austin.getHighScore() << endl;

    // Test password. Neither password attempts should match
    cout << Austin.isPassword("I like snow") << endl;
    cout << Austin.isPassword("I like banannas") << endl;

    return 0;
}
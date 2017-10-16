#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayInstructions();
bool getYesNo(string);
int rollDie(int compRoll);
int highScore(int score);
int lowScore(int score);

int high = 0;
int low = 10000000;

int main()
{
    srand(time(NULL));
    displayInstructions();

    do
    {
        int compRoll = rand() % 6 + 1;
        cout << "The computer rolled " << compRoll << endl;
        int score = rollDie(compRoll);
        highScore(score);
        lowScore(score);
        cout << "Your score is " << score << endl << endl;
    }while(getYesNo("Do you want to play again"));
    cout << "Your low score (good!) was " << low << endl;
    cout << "Your high score (bad!) was " << high << endl;
/*
    // Test drivers
  //  cout << getYesNo("Enter a y for yes and n for no");
  //  cout << rollDie(6);
  cout << highScore(12) << endl;
  cout << highScore(3) << endl;
  cout << highScore(15) << endl;
  cout << highScore(1) << endl;
    cout << lowScore(12) << endl;
  cout << lowScore(3) << endl;
  cout << lowScore(15) << endl;
  cout << lowScore(1) << endl;
*/
    return 0;
}

void displayInstructions()
{
    cout << "Welcome to this simple dice game!" << endl;
    cout << "The computer will roll a die and the number will be displayed" << endl;
    cout << "You will keep rolling your die until you roll the same number." << endl;
    cout << "If your luck is bad and you want to stop rolling, you can" << endl;
    cout << "but you will be given a 10 point penalty" << endl << endl;
}

bool getYesNo(string question)
{
    cout << question << "? ";
    char yesno;
    cin >> yesno;
    return yesno == 'Y' || yesno == 'y';
}

int rollDie(int compRoll)
{
    int playerRoll = 0;
    int score = 0;
    do
    {
        if ( getYesNo("Press y to roll your die") )
            {
                playerRoll = rand() % 6 + 1;
                cout << "You rolled " << playerRoll << endl;
                score++;
            }
        else
            {
                cout << "You must be having bad luck!" << endl;
                score += 10;
                break;
            }
    } while( compRoll != playerRoll);
    return score;
}

int highScore(int score)
{
    if (score > high)
        high = score;

    return high;
}

int lowScore(int score)
{
    if (score < low)
        low = score;

    return low;
}









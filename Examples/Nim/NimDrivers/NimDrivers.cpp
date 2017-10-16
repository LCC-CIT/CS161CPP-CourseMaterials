// Driver example for Nim

#include <iostream>

using namespace std;

int chooseFirstPlayer();
void getCurrentPlayerMove(int &numSticksOnPile);
void switchPlayers(int &currentPlayer);
bool playAgain();

int main()
{
	cout << "Testing chooseFirstPlayer" << endl;
	cout << chooseFirstPlayer() << endl << endl;

	cout << "Testing getCurrentPlayerMove" << endl;
	int numSticks = 10;
	getCurrentPlayerMove(numSticks);
	cout << numSticks << endl << endl;

	cout << "Testing switchPlayers" << endl;
	int playerNum = 2;
	switchPlayers(playerNum);
	cout << playerNum << endl << endl << endl;

	cout << "Testing playAgain" << endl;
	cout << playAgain() << endl;

	return 0;
}

int chooseFirstPlayer()
{
	cout << "In chooseFirstPlayer()" << endl;
	return 1;
}

void getCurrentPlayerMove(int &numSticksOnPile)
{
	cout << "numSticksOnPile: " << numSticksOnPile<< endl;
	numSticksOnPile -= 1;
}

void switchPlayers(int &currentPlayer)
{
	cout << "Current Player: " << currentPlayer << endl;
	if (currentPlayer == 1)
		currentPlayer = 2;
	else
		currentPlayer = 1;
	cout << "Current Player after switch: " << currentPlayer << endl;
	return;
}

bool playAgain()
{
	char answer;

	cout << "Do you want to play again? (y/n)" << endl;
	cin >> answer;
	if (answer == 'y')
		return true;
	else
		return false;
}
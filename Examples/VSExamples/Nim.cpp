// Stub and driver example for Nim
/* main algorithm:
		display instructions
		loop
			choose first player 
			while pileSize > 0
				display pileSize
				display playerNumber
				get current player's move
				if pileSize = 0
					display winner
				end if
				switch players
			end while
			prompt to see if user wants to play again
			get playAgain
		until playAgain == no
	 end main
*/
/* chooseFirstPlayer algorithm
		display "Which player will go first, 1 or 2?"
		get firstPlayerNumber
		return firstPlayerNumber
   end chooseFirstPlayer
*/
/* getCurrentPlayerMove algorithm
		pass numSticksOnPile by reference
		do
			display "How many sticks do you want to take?"
			display	"You must enter a number from 1 to 4"
			get numSticks
		until numSticks >= 1 and numSticks 	<= 4
		numSticksOnPile -= numSticks
	end getCurrentPlayerMove
*/
#include <iostream>

using namespace std;

int chooseFirstPlayer();
void getCurrentPlayerMove(int &numSticksOnPile);
void switchPlayers(int &currentPlayer);
bool playAgain();

int main()
{
	int playerNum = 1,		// Valid player numbers are 1 or 2
		pileSize = 22;		// Initial number of sticks in pile

	cout << "Welcome to the game of Nim" << endl;
	do
	{
		playerNum = chooseFirstPlayer();
		while (pileSize > 0)
		{
			cout << "Sticks left on pile: " << pileSize << endl;
			cout << "Turn for player: " << playerNum << endl;
			getCurrentPlayerMove(pileSize);
			if (pileSize == 0)
				cout << "The winner is player " << playerNum << endl;
			switchPlayers(playerNum);
		}
	}
	while (true == playAgain());

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
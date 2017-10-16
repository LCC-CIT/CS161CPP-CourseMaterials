#include "Moderator.h"

void Moderator::play()
{
	do
	{
		Pile nimPile;
		while (nimPile.getSize() > 0)
		{
			changePlayers();
			cout << "Current player is " << getCurrentPlayer() << endl;
			cout << nimPile.getSize() << " sticks are left on the pile." << endl;
			nimPile.takeSticks( prompt("How many sticks do you want to take?", 1, 5) );
			cout << endl;
		}
		cout << "Player " << getCurrentPlayer() << " wins!" << endl;
	} while ( prompt("Do you want to play again?", 'Y', 'N') );
}


bool Moderator::prompt(string question, char answerTrue, char answerFalse)
{
		char answer;

		cout << question << endl;
		cout << "Enter " << answerTrue << " or " << answerFalse << endl;
		cin >> answer;
		if (toupper(answer) == answerTrue)
			return true;
		else
			return false;
}


int Moderator::prompt(string question, int answerLow, int answerHigh)
{
	int answer;
	bool correct = false;

	do
	{
		cout << question << endl;
		cout << "Enter a number from " << answerLow << " to " << answerHigh << endl;
		cin >> answer;
		if (answer >= answerLow && answer <= answerHigh)
			correct = true;
		else
			cout << "Incorrect entry." << endl;
	} while(!correct);
	return answer;
}


int Moderator::changePlayers()
{
	if (currentPlayer == 1)
		currentPlayer = 2;
	else
		currentPlayer = 1;
	return currentPlayer;
}

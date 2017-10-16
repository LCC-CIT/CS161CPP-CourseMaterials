#include <iostream>
#include <string>
#include "Pile.h"
using namespace std;


class Moderator
{
	int currentPlayer;

public:
	Moderator()
	{
		currentPlayer = 2;
	}

	bool prompt(string question, char answerTrue, char answerFalse);
	int prompt(string question, int answerLow, int answerHigh);

	void play();
	int changePlayers();
	int getCurrentPlayer()
	{
		return currentPlayer;
	}


};


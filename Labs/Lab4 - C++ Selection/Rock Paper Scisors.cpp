// Horner, Chas; CS 133G Lab 4 Problem 3 (Rock - Paper - Scissors)
 
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int  main()
{
	char userAnswerChar, computerAnswerChar;
	int computerAnswerInt;

	cout << endl;
	cout << "It's time to play another great round of Rock-Paper-Scissors!" << endl;
	cout << "Please type your choice (R for Rock, P for Paper, S for Scissors) : ";
	cin >> userAnswerChar;
	cout << endl;
	
	
	// I'm trying to validate the input without a loop! Let's try a threat...
	 
	if (userAnswerChar != 'R' && userAnswerChar != 'r')
		if (userAnswerChar != 'P' && userAnswerChar != 'p')
			if (userAnswerChar != 'S' && userAnswerChar != 's')
			{
			cout << "I'm sorry, you must enter R for Rock, P for Paper, or S for Scissors, " << endl;
			cout << "or you will lose automatically!" << endl;
			cout << "Please type your choice (R for Rock, P for Paper, S for Scissors) : ";
			cin >> userAnswerChar;
			cout << endl;
			}

	// Here's the randomizer:
	unsigned int seed = time(0);
	srand(seed);

		unsigned int firstRandom = rand();
		computerAnswerInt = 1 + firstRandom % 3;

	// Store the computer answer also as a character
	
	if (computerAnswerInt == 1)
			computerAnswerChar = 'R';
	if (computerAnswerInt == 2)
			computerAnswerChar = 'P';
	if (computerAnswerInt == 3)
			computerAnswerChar = 'S';		

	switch (userAnswerChar)
	{
		case 'R':
		case 'r':	if (computerAnswerChar == 'R')
					cout << "It's a draw!";
					else if (computerAnswerChar == 'P')
					cout << "Computer wins!";
					else if (computerAnswerChar == 'S')
					cout << "You win!";
						break;
		
		case 'P':
		case 'p': if (computerAnswerChar == 'P')
					cout << "It's a draw!";
					if (computerAnswerChar == 'S')
					cout << "Computer wins!";
					if  (computerAnswerChar == 'R')
					cout << "You win!";			
					break;
		case 'S':
		case 's': if (computerAnswerChar == 'S')
					cout << "It's a draw!";
					if (computerAnswerChar == 'R')
					cout << "Computer wins!";
					if (computerAnswerChar == 'P')
					cout << "You win!";
					break;
	
		default:  cout << "You provided defective information; you lose by default!\n";
	}
	
	cout << endl << "Computer Answer : " << computerAnswerChar << endl ;
	cout << "User Answer : " << userAnswerChar << endl ;

	
	return 0;
}

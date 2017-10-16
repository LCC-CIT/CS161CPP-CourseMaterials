#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

int main()
{
//	Movie myFavoriteMovie = { "Big Fish", "PG-13",125.0/60.0,
//									8.1, 2003};
	Movie myFavoriteMovie;
	Movie JaredsFavoriteMovie("Fear and Loathing in Las Vegas", "R", 
								118.0/60.0, 7.6, 1998);

	JaredsFavoriteMovie.outputMovie();
	JaredsFavoriteMovie.changeMovie();
	JaredsFavoriteMovie.outputMovie();

	return 0;
}

void Movie::outputMovie()
{
	cout << "Title: " << name << endl;
	cout << "Rating: " << rating << endl;
	cout << "Length: " << length << " hours" << endl;
	cout << endl;

	return;
}

void Movie::changeMovie()
{
	cout << "Enter a new movie name: ";
	getline(cin, name);
	cout << "Enter a new rating: ";
	getline(cin, rating);
	cout << "Enter the length in hours: ";
	cin >> length;
	cout << endl;

	return;
}


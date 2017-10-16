
#include <iostream>
#include "StructExamples.h"
using namespace std;

int main()
{
	Movie myFavoriteMovie;

	myFavoriteMovie.name = "Big Fish";
	myFavoriteMovie.length = 125.0/60.0;
	myFavoriteMovie.year = 2003;
	myFavoriteMovie.rating = "PG-13";
	myFavoriteMovie.viewerRating = 8.1;

	cout << "Title: " << myFavoriteMovie.name << endl;
	cout << "Viewer Rating: " << myFavoriteMovie.viewerRating << endl;
	cout << "Length: " << myFavoriteMovie.length << " hours" << endl;
	
}


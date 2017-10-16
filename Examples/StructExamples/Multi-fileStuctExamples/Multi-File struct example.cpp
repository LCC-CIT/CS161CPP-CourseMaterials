
#include <iostream>
#include "StructExamples.h"
#include "AnotherHeader.h"
using namespace std;

int main()
{
	Car myCar;

	myFavoriteMovie.name = "Big Fish";
	myFavoriteMovie.length = 125.0/60.0;
	myFavoriteMovie.year = 2003;
	myFavoriteMovie.rating = "PG-13";
	myFavoriteMovie.viewerRating = 8.1;

	
}

void outputMovie()
{
		cout << "Title: " << myFavoriteMovie.name << endl;
	cout << "Viewer Rating: " << myFavoriteMovie.viewerRating << endl;
	cout << "Length: " << myFavoriteMovie.length << " hours" << endl;
	return;
}
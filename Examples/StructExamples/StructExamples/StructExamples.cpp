
#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct Movie
	{
		string	name,
				rating;
		double	length,
				viewerRating;
		int		year;
	};

	Movie myFavoriteMovie,
		movieTwo;

	myFavoriteMovie.name = "Big Fish";
	myFavoriteMovie.length = 125.0/60.0;
	myFavoriteMovie.year = 2003;
	myFavoriteMovie.rating = "PG-13";
	myFavoriteMovie.viewerRating = 8.1;

	cin >> movieTwo.name;


	cout << "Title: " << myFavoriteMovie.name << endl;
	cout << "Viewer Rating: " << myFavoriteMovie.viewerRating << endl;
	cout << "Length: " << myFavoriteMovie.length << " hours" << endl;
	
}


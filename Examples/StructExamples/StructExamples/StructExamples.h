#include <string>
using namespace std;

struct Movie
	{
		string	name,
				rating;
		double	length,
				viewerRating;
		int		year;

		Movie()
		{
			name = "Big Fish";
			rating = "PG-13";
			length = 2.1;
			viewerRating = 8.1;
			year = 2003;
			return;
		}
		

		Movie(string newName)
		{
			name = newName;
			rating = "PG-13";
			length = 2.1;
			viewerRating = 8.1;
			year = 2003;
			return;
		}
		


	};

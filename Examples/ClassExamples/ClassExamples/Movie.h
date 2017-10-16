#include <string>
using namespace std;

class Movie
	{
	private:
		string	name,
				rating;
		double	length,
				viewerRating;
		int		year;

	public:
		Movie()
		{
			name = "";
			rating = "";
			length = 0;
			viewerRating = 0;
			year = 0;
			return;
		}

		Movie(string newName, string newRating, 
			double newLength, double newVRating, int newYear)
		{
			name = newName;
			rating = newRating;
			length = newLength;
			viewerRating = newVRating;
			year = newYear;
			return;
		}
		
		void outputMovie();
		void changeMovie();
	};




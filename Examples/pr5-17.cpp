// This program averages 2 test scores for each student in a class.
// It contains logic errors.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
double Calculate (double);
int score();
string Name(string &name);

string Name(string &name)// function that gets the students name
{
    static int count=1;
    cout<<"Enter the first name of student " << count++<<" (Or q to quit):";
    cin>>name;
}

double Calculate(double total)// function that finds average score of student
{
    double average;
    average = total/2.0;
    return average;
}

int Score()// gets imput for score
{
    int score=0;
    cin>>score;
    if (score <= 0 || score >= 100)
	   {  cout << "Score must be between 0 and 100. Please reenter: ";
	      cin  >> score;
	   }
    return score;
}

int main()
{
	string name;                 // Student first name

	int    count = 1,            // Student counter
	       score,                // An individual score read in
	       totalScore = 0;       // Total of a student's 2 scores
	double average;              // Average of a student's 2 scores

	cout << fixed << showpoint << setprecision(1);
	Name(name);

	while (name != "Q" && name != "q")
	{
	   // Get and validate the first score
	   cout << "Enter score 1: ";
	   score= Score();
	   totalScore += score;      // Add the first score onto the total

	   // Get and validate the second score
	   cout << "Enter score 2: ";
	   score=Score();
	   totalScore += score;     // Add the second score onto the total

	   // Calculate and print average
	   average = Calculate(totalScore);
	   cout << name << setw(6) << average << endl;
	   totalScore=0;

	   // Get the next student name
	   Name(name);
	}
	return 0;
}

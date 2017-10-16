// This program can be used to find if a number is prime.
// Here is my algorithm:
//IsPrime
//  Display instructions
//  int num
//  int maxFactor = num / 2 // because any number greater then 1/2 the number will be between 2 and 1 with a remainder, therefore not prime.
//  int step = 2
//  Prompt user for num
//  get num
//  if num <= 0
//      Display "Number must be greater than 0."
//  while step <= maxFactor
//      if number % step == 0
//          Display "Not prime."
//          End while
//      else if step != 2
//          step += 2 // if step is 3 or more, it will go up by two and only odd numbers to test for remainders.
//      else if step = 2
//          step++ // if step is 2, it will be increased to 3.
//      Display "It's prime!" // if it makes it through all the possible factors without displaying not prime and ending the while, it will be prime.
//  End while
//End

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Function prototypes
bool isPrime(int, int);

int main()
{
    int num;
    int maxFactor;
    int ammount;

    ammount = isPrime(num, maxFactor);

    if (isPrime(ammount) == true);
        cout << "It's prime.\n";
    else
        cout << "It's not prime.\n";

 return 0;
}

bool isPrime(int num, int maxFactor)
{
    int step;

    cout << "Input a number and this program will tell you if it is prime.\n";
    cin >> num;

    maxFactor = num / 2;

    if (num <= 0)
            cout << "Your number needs to be greater then 0.";

    for (step = 1; step <= maxFactor; step++)
    {
        if (num % step == 0)
            return false;
    }
    return true;
}

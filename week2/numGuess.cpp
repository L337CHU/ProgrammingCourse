/******************************************************************************
 * *: Author: Christopher Chu
 * *: Date : 01/15/2018
 * *: Description: The program prompts the user to guess the number correctly
 		   and displays the number of times it takes.
******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main ()
{
	double randomNum;        //# for the player to guess
	double userGuess;        
	int totalTimes = 1;      //accumulator

	cout << "Enter the number for the player to guess." << endl;
	cin >> randomNum;

	cout << "Enter your guess." << endl;
	cin >> userGuess;
	
	// if user guesses in 1st try
	if (userGuess == randomNum)
		cout << "You guessed it in 1 try." << endl;

	//loop
	while ( userGuess != randomNum)
	{
		if (userGuess > randomNum)
		{
			cout << "Too high - try again." << endl;
			cin >> userGuess;
			totalTimes ++;

		}
		if (userGuess < randomNum)
		{
			cout << "Too low - try again." << endl;
			cin >> userGuess;
			totalTimes ++;
		}
		if (userGuess == randomNum)
		{	cout << "You guessed it in " << totalTimes 
			     << " tries." << endl;
			totalTimes ++;
		}
	}

	return 0;
}
	

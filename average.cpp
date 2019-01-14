/*******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/09/2018
 * * Description: This program prints out the average of the user's 5 numbers
 * ****************************************************************************/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;


// Thiis program calculates the average of 5 numbers
int main()
{
	double numberOne,
	       numberTwo,
	       numberThree,
	       numberFour,
	       numberFive,
	       totalNumber,
	       averageNumber;
	
	//Get user inputs
	cout << "Please enter five numbers." << endl;
	cin >> numberOne;
	cin >> numberTwo;
	cin >> numberThree;
	cin >> numberFour;
	cin >> numberFive;
	
	//Computer users average
	totalNumber = numberOne + numberTwo + numberThree + numberFour
		    + numberFive;
	averageNumber = totalNumber/5;
	cout << "The average of those numbers is:" << endl;
	cout << averageNumber << endl;

	return 0;
}


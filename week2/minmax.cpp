/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/15/2018
 * * Description: This program finds the min and max from the users integers
******************************************************************************/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;



int main()
{
	int numIntegers;
	double minValue;
	double maxValue;

	//Get number of integers from user
	cout << "How many integers would you like to enter?" << endl;
	cin >> numIntegers;
	cout << "Please enter " << numIntegers << " integers." <<  endl;

	//begin loop
	for ( int startingNum = 1; startingNum <= numIntegers; startingNum++ )
	{double assignedValue;      //Value assigned by user

		cin >> assignedValue;

		if ( startingNum == 1)
		{
			minValue = assignedValue;
			maxValue = assignedValue;
		}
		if (( assignedValue >= maxValue) && (startingNum > 1 ))
			maxValue = assignedValue;

		if (( assignedValue <= minValue) && (startingNum > 1 ))
			minValue = assignedValue;
	}

	//Display min and max values
	cout << "min: " << minValue << endl;
	cout << "max: " << maxValue << endl;

	return 0;

}

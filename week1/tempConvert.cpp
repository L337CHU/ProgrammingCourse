/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/09/2018
 * * Description: This program converts Celsius temperatures to Fahrenheit 
 		  temperatures. 
******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double celsiusTemp,
	       fahrenheitTemp;
	
	//Request Celsius input from user
	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsiusTemp;

	//Compute the Fahrenheit temp
	fahrenheitTemp  = (1.8 * celsiusTemp) + 32;
	cout << "The equivalent Fahrenheit temperature is:" << endl; 
	cout << fahrenheitTemp << endl;
	
	return 0;

}

	


/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/9/2018
 * * Description: User enters an amount in cents and receives each type of coin
                  that would represent the amount w/ the fewest total # of coins
******************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main()
{
	int cents,
	    quarters,
	    dimes,
	    nickels,
	    pennies;
	//Get user input
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> cents;

	//Display phrase
	cout << "Your change will be:" << endl;

	//Compute and display quarters
	quarters = cents / 25;
	cout << "Q: " << quarters << endl;

        //Compute and display dimes
	dimes = (cents % 25) / 10;
	cout << "D: " << dimes << endl;

	//Compute and display nickels
	nickels = ((cents % 25 ) % 10) / 5;
	cout << "N: " << nickels << endl;

        //Compute and display pennies
	pennies = ((cents % 25 ) % 10 ) % 5;
	cout << "P: " << pennies << endl;

	return 0;
}
	

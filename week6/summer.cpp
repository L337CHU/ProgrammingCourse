/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/08/2018
 * * Description: This recursive function summer takes two parameters, an array
 		  of doubles and the size of the array, and returns the sum of
		  the values in the array.
******************************************************************************/

#include <iostream>
using std::cin;
using std::endl;
using std::cout;

double summer(double [], int size);

/************************************************************
int main()
{
	double group1[4] = {3.5,5.6,6.2,10.3};
	cout << summer(group1, 4) << endl;
	
	return 0;		TESTING TESTING TESTING
}
*************************************************************/




/**********************************************************************
 * 			function summer
 * 	This function returns the sum of the values in the array
 *********************************************************************/

double summer(double array[], int size)
{
	if (size == 1)
		return array [0];
	else
		return array[size - 1] + summer(array, size - 1);
}

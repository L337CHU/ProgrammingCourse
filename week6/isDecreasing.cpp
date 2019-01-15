/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/10/2018
 * * Description: Recursive function isDecreasing takes two parameters, an
 		  array of ints and the size of an array, and returns 
		  true if elements of the array are decreasing, false otherwise
******************************************************************************/

#include <iostream>
using std::cin;
using std::endl;
using std::cout;

bool isDecreasing(int [], int);    // function prototype

/**************************************************
int main()
{
	int group[4] = {6,5,4,3};
	cout << isDecreasing(group, 4) << endl;

	return 0;	TESTING TESTING TESTING
}
***************************************************/



/****************************************************
 		function is Decreasing
	Returns true if array of ints are descending
****************************************************/
bool isDecreasing (int array[], int size)
{
	if (size == 1)
		return true;
	if (array[size - 1] < array[size - 2] )
		return isDecreasing (array, size - 1);
	else
		return false;
}

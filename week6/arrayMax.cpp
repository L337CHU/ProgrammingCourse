/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/09/2018
 * * Description: This function takes two parameters, an array of ints, and the
 		  size of the array, and returns the maximum value in the array
******************************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int arrayMax(int [], int);		//function prototype
/***************************************************
int main()
{
	int group1[2] = {18,3};
	cout << arrayMax(group1, 2) << endl;
	return 0;
}				TESTING TESTING
***************************************************/


/************************************************************
 * 		arrayMax function
 * 	Returns the maximum value in the array
************************************************************/


int arrayMax(int array[], int size)
{
	if (size == 1)
		return array[0];
	if (array[size - 1] >= arrayMax (array, size-1))
		return array[size - 1];
	else
		return arrayMax(array, size - 1);
}

	

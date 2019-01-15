/*****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/05/2018
 * * Description: This function sorts an array of Boxes from greatest volume to
 		  least volume. 
*****************************************************************************/

#include "Box.hpp"
#include <iostream>
using std::endl;
using std::cin;
using std::cout;

void boxSort (Box [], int);		//function prototype




/*****************************************************************************
 *			boxSort
 *This function performs a sort on Box objects, arranging them in descending
  order.
*****************************************************************************/
void boxSort(Box array[], int size)
{
	Box temp;
	bool swap;

do
{
swap = false;
for (int count = 0; count < (size-1); count++)
	{
		if(array[count].calcVolume() < array[count +1].calcVolume())
		{
			temp = array[count];
			array [count] = array [count +1];
			array [count +1] = temp;
			swap = true;
		}
	}
} while (swap);
}


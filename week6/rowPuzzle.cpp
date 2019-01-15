/*****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/14/2018
 * * Description: Given a puzzle consisting of a row of squares, the recursive
 		  function returns true if the puzzle is solvable for that row
*****************************************************************************/

#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::cin;
using std::vector;

bool rowPuzzle(vector <int> );				//function prototype
bool rowPuzzle(vector <int> , int , vector <bool> );	//function prototype

//recursive function
bool rowPuzzle(vector <int> vect, int index, vector <bool> position)
{
	//base case
	if (index == (vect.size() -1))			
		return true;

	//moving right w/in bounds
	if(((vect[index] + index) < vect.size()) &&
			(position [index + vect[index]] == true))
	{
		position [index + vect[index]] = false;
		if (rowPuzzle(vect, vect[index] + index, position))
			return true;
	}

	//moving left w/in bounds
	if (((index - vect[index]) > 0) &&
				(position [index - vect[index]] == true))
	{
		position [index - vect[index]] == false;
		if (rowPuzzle(vect, index - vect[index], position))
			return true;
	}

	return false;
}

//helper function
bool rowPuzzle (vector <int> vect)			
{
	vector <bool> position;
	for (int i = 0; i < vect.size(); i++)
	position.push_back(true);
	return rowPuzzle(vect, 0, position);
}
/***************************************************************
int main()
{
	vector <int> vect {2,4,5,3,1,3,1,4,0};
	cout << rowPuzzle(vect) << endl;
	return 0;		
				TESTING TESTING TESTING
}
****************************************************************/

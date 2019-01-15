/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/06/2018
 * * Description: The stringSort function sorts an array of C++ strings into
 		  dictionary order.It takes two parameters, an array of strings,
		  and the size of the array. 
*******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;

void stringSort(string[], int size);		//function prototype
bool compareStrings(string, string);		//function prototype
/****************************************************************************
int main()
{
	string group1[6] = {"Zeppelin", "zebra", "Zoe", "Zarn", "zae", "zooe"};
	stringSort(group1, 6);
	cout << group1[0] << endl;
	cout << group1[1] << endl;
	cout << group1[3] << endl;	TESTING TESTING TESTING
	cout << group1[4] << endl;
	cout << group1[5] << endl;

	return 0;
}
****************************************************************************/


/**************************************************************
 * 		stringSort function
 * 	This function performs a dicionary order selection
 * 	sort on array. 
**************************************************************/

void stringSort(string array[], int size)
{
	int startScan, minIndex;
	string minValue;

	for (startScan = 0; startScan < (size-1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan +1; index < size; index++)
		{
			string wordOne = array[index];
			string wordTwo = minValue;

			if (compareStrings(wordOne, wordTwo))
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
}

/*************************************************************
 * 		bool function
 * This function capitalizes the characters in the strings
 * and returns true if wordOne < wordTwo)
 ************************************************************/

bool compareStrings(string wordOne, string wordTwo)
{
	for (int i=0; i < wordOne.length(); i++)
		wordOne[i] = toupper(wordOne[i]);
	for (int i=0; i < wordTwo.length(); i++)
		wordTwo[i] = toupper(wordTwo[i]);
	if (wordOne < wordTwo)
		return true;
	else
		return false;
}



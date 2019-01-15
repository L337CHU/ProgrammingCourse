/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/15/2018
 * * Description: Open user's filename to get the sum of integers and write the
 		  sum of the integers to another file.
******************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	string fileName;
	double value;
	double total = 0;
	

	//Get filename from user
	cout << "Please enter your filename." << endl;
	cin >> fileName;
	
	//open the inputFile
	inputFile.open(fileName);         

	//if the file successfully opens
	if ( inputFile )
	{
		while ( inputFile >> value )
		{
			total += value;
		}
		//open outputfile
		outputFile.open("sum.txt");
		outputFile << total << endl;
		//print to the console
		cout << "result written to sum.txt" << endl;

	}
	else           //if file cannot be opened
	{
		cout << "could not access file" << endl;
	}

	//close outputfile
	outputFile.close();
	//close inputfile
	inputFile.close();

	return 0;
}

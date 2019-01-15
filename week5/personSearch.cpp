/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/02/2018
 * * Description: This binary search function takes in two parameters, a const
 		  vector of Persons, and the name of the Person.
******************************************************************************/
#include "Person.hpp"
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;




int personSearch(const vector<Person>, string);   //function prototype

/*************************************************************************
				TESTING TESTING TESTING
int main()
{
	vector<Person> class1 = {Person("Eric",24), Person("Hen", 25),
		Person("Ian", 26), Person("James",26), Person("Kyle",29)};
	cout << personSearch(class1, "James") << endl;
	return 0;
}
*************************************************************************/

/*******************************
 * 	personSearch
*******************************/

int personSearch( const vector<Person> object, string namePerson)
{
	int first = 0;		//first vector element
	int last = object.size() - 1;      // last array element
	int middle; 
	int position = -1;		//position of search value
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last)/ 2;	//midpoint calc
		if (object[middle].getName() == namePerson)
		{
			found = true;
			position = middle;
		}
		else if (object[middle].getName() > namePerson)
			last = middle -1;
		
		else
			first = middle +1;
		
	}
	return position;
}

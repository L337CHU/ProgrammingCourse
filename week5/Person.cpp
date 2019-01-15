/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/26/2018
 * * Description: This file is the Person class function implementation file.
******************************************************************************/

#include "Person.hpp"
#include <iostream>
#include <cmath>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


/***********************************************************
 * 	Constructor for Person 
 * Takes two values and initializes them
***********************************************************/
Person::Person(string defaultName, double defaultAge)
{
	name = defaultName;
	age = defaultAge;
}
/**********************************************************
 * 	Person:getName
**********************************************************/
string Person::getName() const
{
	return name;
}

/*********************************************************
 * 	Person:getAge()
 ********************************************************/
double Person::getAge()
{
	return age;
}


/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/26/2018
 * * Description: This file includes the class declaration Person
******************************************************************************/

#include <iostream>
#include <string>
#ifndef PERSON_HPP
#define PERSON_HPP
using std::cout;
using std::cin;
using std::endl;
using std::string;



//class declaration Person
class Person
{
	private:
		string name;
		double age;
	public:
		Person(string, double);
		string getName() const;
		double getAge();
};
#endif

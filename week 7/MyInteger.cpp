;/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/19/2018
 * * Description: This includes the MyInteger implementation
****************************************************************************/

#include "MyInteger.hpp"
#include <iostream>
using namespace std;

//overloaded operator
MyInteger &MyInteger::operator = (MyInteger &right)
{
	pInteger = new int;
	*pInteger = *right.pInteger;
	return *this;
}

//copy constructor
MyInteger::MyInteger(const MyInteger &obj)
{
	pInteger = new int;
	*pInteger = *obj.pInteger;
}
//constructor
MyInteger::MyInteger(int value)
{
	pInteger = new int;
	setMyInt(value);
}
//deconstructor
MyInteger::~MyInteger()
{
	delete pInteger;
}

//set member function
void MyInteger::setMyInt(int value)
{
	*pInteger = value;
}
//get member function
int MyInteger::getMyInt()
{
	return *pInteger;
}
/*
int main()
{
	MyInteger obj1(17);
	MyInteger obj2 = obj1;
	cout << obj1.getMyInt() << endl;
	cout << obj2.getMyInt() << endl;
						TESTING TESTING TESTING
	obj2.setMyInt(9);
	cout << obj1.getMyInt() << endl;
	cout << obj2.getMyInt() << endl;

	MyInteger obj3(42);
	obj2 = obj3;
	cout << obj2.getMyInt() << endl;
	cout << obj3.getMyInt() << endl;

	obj3.setMyInt(1);
	cout << obj2.getMyInt() << endl;
	cout << obj3.getMyInt() << endl;
	return 0;
}
*/


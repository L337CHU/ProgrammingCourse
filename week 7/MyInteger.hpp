/*****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/19/2018
 * * Description: This file includes a class called MyInteger. 
*****************************************************************************/

#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP
#include <iostream>
using namespace std;

//MyInteger class declaration

class MyInteger
{
	private: 
		int *pInteger;				
	public:
		MyInteger &operator = (MyInteger &right);	//overloaded
		MyInteger (const MyInteger &obj);		//copy const.
		MyInteger (int value);				//constructor
		~MyInteger();					//destructor
		void setMyInt(int value);
		int getMyInt();
};
#endif

								

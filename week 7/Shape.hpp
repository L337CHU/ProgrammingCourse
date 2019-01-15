/**************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/21/2018
 * * Description: Assignment 7.b  Abstract class Shape
**************************************************************************/


#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <iostream>
using namespace std;

class Shape
{
	public:
		virtual double area() = 0;
		virtual double perimeter() = 0;
};
#endif

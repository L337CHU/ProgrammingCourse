/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/18/2018
 * * Description: class Rectangle inherits from Shape
***************************************************************************/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Shape.hpp"
#include <iostream>
using namespace std;

class Rectangle : public Shape
{
	protected:
		double length;
		double width;
	public:
		virtual double area();
		virtual double perimeter();
		Rectangle (double l, double w);		//constructor
		virtual void setLength(double l);	//virtual set method
		virtual void setWidth(double w);	//virtual set method
};
#endif


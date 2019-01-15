/***************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/18/18
 * * Description: class Rectangle implementation
***************************************************************************/

#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
using namespace std;


//constructor. setting length and width
Rectangle::Rectangle (double l, double w)
{
	setLength(l);
	setWidth(w);
}
//return area of Rectangle
double Rectangle::area()
{
	return length * width;
}
//return perimeter
double Rectangle::perimeter()
{
	return (2 * length) + (2 * width) ;
}

void Rectangle::setLength(double l)
{
	length = l;
}
void Rectangle::setWidth(double w)
{
	width = w;
}


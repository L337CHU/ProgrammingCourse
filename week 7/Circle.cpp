/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/21/2018
 * * Description: Circle class implementation
****************************************************************************/

#include "Shape.hpp"
#include "Circle.hpp"
#include <iostream>
using namespace std;

//Circle class implementation
void Circle::setRadius(double r)
{
	radius = r;
}
//Constructor
Circle::Circle(double r)
{
	setRadius(r);
}
//virtual functions
double Circle::area()
{
	return (3.14159) * radius * radius;
}

double Circle::perimeter()
{
	return (3.14159) * radius * 2;
}


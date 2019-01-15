/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/26/2018
 * * Description: Project 8a. Circle cpp. Circle class implementation
****************************************************************************/

#include "Circle.hpp"
#include <iostream>
using namespace std;


//definition of the static member of Circle class
double Circle::maxRadius = 10.0;

//default Circle constructor
Circle::Circle()			
{
	radius = 1.0;
}
//constructor w/ passing parameter
Circle::Circle (double r)
{
	radius = r;
	if (radius > maxRadius)
		throw IllegalRadius(r);
}
//calc Area of Circle
double Circle::calcArea()
{
	return (3.14159 * radius * radius);
}
//set max radius
void Circle::setmaxRadius(double max)
{
	maxRadius = max;
}



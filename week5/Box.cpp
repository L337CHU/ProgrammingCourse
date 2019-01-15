/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/21/2018
 * * Description: This includes the Box function implementation
******************************************************************************/


#include <iostream>
#include "Box.hpp"

//Default constructor. Initializes each field to 1
Box::Box()
{
	height = 1.0;
	width = 1.0;
	length = 1.0;
}

//Constructor w/ 3 parameteres
Box::Box(double h, double w, double l)
{
	height = h;
	width = w;
	length = l;
}
//setHeight
void Box::setHeight(double h)
{
	height = h;
}
//setWidth
void Box::setWidth(double w)
{
	width = w;
}
//setLength (double l)
void Box::setLength(double l)
{
	length = l;
}

/***********************************************
 * 		Box::calcVolume()
 * This function returns the volume of the box
***********************************************/

double Box::calcVolume()
{
	return height * width * length;
}

/****************************************************
 * 		Box::calcSurfaceArea()
 * This function returns the surface area of the box.
****************************************************/

double Box::calcSurfaceArea()
{
	return (2 * length * width) + (2 * length * height) + 
		(2 * height * width);
}





/*********************************************************************
 * * Author: Christopher Chu
 * * Date: 02/18/18
 * * Description: This file has a function called average Area 
*********************************************************************/

#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include <vector>
#include <iostream>

using namespace std;

double averageArea(const vector <Shape *> shapes);	//prototype

double averageArea(const vector <Shape *> shapes)
{
	double area = 0;
	for (int index = 0; index < shapes.size(); index++)
	{
		area = area + shapes[index] -> area();
	}

	return (area / shapes.size() );
}




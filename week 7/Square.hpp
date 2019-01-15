/****************************************************************************
 * * Author: Christopher chu
 * * Date: 02/18/18
 * * Description: class Square inherits from Rectangle
****************************************************************************/

#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include <iostream>
using namespace std;

class Square : public Rectangle
{
	public:
		Square (double s) : Rectangle(s, s)
	{

	}
	virtual void setLength(double s);
	virtual void setWidth(double s);
};
#endif


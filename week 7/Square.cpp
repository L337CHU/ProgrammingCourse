
/*******************************************************************
 * * Author: Christopher Chu
 * * Date: 02/28/18
 * * Description: Square class implmentation
*******************************************************************/
#include "Square.hpp"
#include <iostream>
using namespace std;


void Square::setLength(double s)
{
	Rectangle::setLength(s);
	Rectangle::setWidth(s);
}
void Square::setWidth(double s)
{
	Rectangle::setWidth(s);
	Rectangle::setLength(s);
}


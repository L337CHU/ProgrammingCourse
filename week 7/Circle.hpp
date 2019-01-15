/********************************************************************
 * * Author: Christopher Chu
 * * Date: 02/21/2018
 * * Description: 7b. class called Circle that inherits from Shape
********************************************************************/
#include "Shape.hpp"
#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <iostream>
using namespace std;

class Circle : public Shape
{
	protected:
		double radius;
	public:
		void setRadius(double r);	//set method for radius
		Circle (double r);		//constructor w/ double param
		virtual double area();		
		virtual double perimeter();
}; 
#endif 

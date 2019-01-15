/*****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/26/2018
 * * Description: Project 8a.   Class named Circle      Circle.hpp
*****************************************************************************/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <iostream>
using namespace std;

class Circle
{
	protected:
		double radius;
		static double maxRadius;
	public:
		Circle();			//default constructor
		Circle (double r);		// constructor
		double calcArea();		//returns area of Circle
		static void setmaxRadius(double max); 		//maxRadius
		class IllegalRadius
		{
			public:
				double badRadius;
				IllegalRadius (double badvar)
				{
					badRadius = badvar;
				}
		};
};
#endif 

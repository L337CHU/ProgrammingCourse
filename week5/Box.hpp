/******************************************************************************
 * * Author: Christopher Chu
 * * Date: 01/21/2018
 * * Description: This file holds the class declaration BOX
******************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP



//Box class declaration
class Box
{
	private:
		double height;
		double width;
		double length;
	public:
		Box();
		Box( double, double, double);
		void setHeight(double);
		void setWidth(double);
		void setLength(double);
		double calcVolume ();
		double calcSurfaceArea();
};
#endif


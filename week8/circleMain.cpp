/****************************************************************************
 * * Author: Christopher Chu
 * * Date: 02/26/2018
 * * Description: Project 8a circleMain.cpp
****************************************************************************/

#include "Circle.hpp"
#include <iostream>
using namespace std;

int main()
{
	Circle obj;
	double userMax;			//users maxradius
	double userRad;			//users radius for new circle

	cout << "Enter the maxRadius for Circles." << endl;
	cin >> userMax;
	obj.setmaxRadius(userMax);
	cout << "Enter the radius for a new Circle object." << endl;

	try
	{
		cin >> userRad;
		Circle obj(userRad);
		cout << "The Circle object was successfully created." << endl;
		cout << "The area of the circle is " << obj.calcArea() 
			<< "." << endl;

	}
	catch (Circle::IllegalRadius ex)
	{
		cout << "The Circle object could not be created." << endl;
		cout << "A radius of " << ex.badRadius << " exceeds the maximum"
			<< " allowed radius." << endl;
	}
	return 0;
}


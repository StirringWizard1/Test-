#include "Shape.h"
#include "Circle.h"
#include <string>
#include <math.h>


Circle::Circle():Shape("Circle")
{}
Circle::Circle(int diameter):Shape("Circle")
{
	
	Diameter = diameter; 
}

double Circle::get_perimeter()
{
	double Perimeter = M_PI*Diameter;
	return Perimeter; 

}
double Circle::get_area()
{
	double Area = M_PI*Diameter*Diameter;
	return Area; 
}

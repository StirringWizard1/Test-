#include "Shape.h"

#include <string>


Shape::Shape(){}
Shape::Shape(std::string name)
{
	Name = name;
}
std::string Shape::get_name()
{
	return Name; 
}

double Shape::get_area(){}
double Shape::get_perimeter(){}

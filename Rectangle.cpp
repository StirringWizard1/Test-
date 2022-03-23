#include <string> 
#include "Rectangle.h"
#include "Shape.h"


Rectangle:: Rectangle(){}
Rectangle::Rectangle(int length, int width) : Shape ("Rectangle")
{
	Length = length;
	Width = width; 
}
double Rectangle:: get_area()
{
	double Area = Length * Width;
	return Area; 
}
double Rectangle:: get_perimeter()
{
	double Perimeter = 2*Length + 2*Width;
	return Perimeter; 
}
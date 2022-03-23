#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
class Rectangle: public Shape
{
private: 
	int Length;
	int Width;

public: 
	Rectangle();
	Rectangle(int length, int width);
	double get_area();
	double get_perimeter();

};
#endif
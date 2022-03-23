#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle:  public Shape
{
private:
	int Diameter; 
public: 

	Circle();
	Circle(int num);
	double get_area();
	double get_perimeter();
};
#endif
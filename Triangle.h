#ifndef TRIANGLE_H
#define TRIANGLE_H


#include "Shape.h"
#include <string>

class Triangle : public Shape
{
	private:
		int Base; 
		int Height;
		int Length1;
		int Length2;
		//std::string Name;

	public: 
		Triangle();
		Triangle(int base, int length1, int length2, int height);
		double get_area();
		double get_perimeter();
		//std::string get_name(); 
};
#endif
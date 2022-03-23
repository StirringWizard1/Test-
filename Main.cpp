#include "Shape.h"
#include "Circle.h"
#include <iostream>
#include <string>
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
	Shape *s1 = new Circle(1);
	Shape *s2 = new Rectangle(2,3);
	Shape *s3 = new Triangle(2,2,2,2); 


	std::cout<< s1->get_name()<<" : " << s1->get_area() <<" : "<< s1->get_perimeter()<<" : " << std::endl;
	std::cout<< s2->get_name() <<" : "<< s2->get_area() <<" : "<< s2->get_perimeter() <<" : "<< std::endl;
	std::cout<< s3->get_name() <<" : " << s3->get_area() <<" : "<< s3->get_perimeter()<<" : " << std::endl;

	return 0;
}
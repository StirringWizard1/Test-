#include "Shape.h"
#include "Triangle.h"
#include <string>


Triangle:: Triangle()
{}
Triangle::Triangle(int base, int length1, int length2, int height): Shape ("Triangle")
{
	Base = base;
	Height = height ;
	Length1 = length1;
	Length2 = length2;
	//if (Length2 + Length1 > Base)
	//{
	//	if (Length2 == Length1 == Base)
	//	{
	//		Name = "Equilateral";
	//	}
	//	if else (Length2 == Length1)
	//	{
	//		Name =  "Isosceles"; 

	//		}
	//	else 
	//	{
	//		Name = "Scalene";
	//	}

	//}
	//else 
	//{
	//	Base = 0;
	//	Height = 0;
	///}
	return 0; 
}

		double Triangle::get_area()
		{
			double Area = 1/2 * Base * Height;
			return Area; 
		}
		double Triangle::get_perimeter()
		{
			double Perimeter = Length1 + Length2 + Base; 
			return Perimeter; 
		}
		std::string Triangle::get_name()
		{
			return Name;
		}
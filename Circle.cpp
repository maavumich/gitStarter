#include "Circle.hpp"

Circle::Circle(double r)
	: radius(r) {}

double Circle::circum()
{
	return 2*radius*3.14159265;
}
#include <iostream>
#include "Circle.hpp"
#include "Rectangle.hpp"

using namespace std;

int main()
{
	Rectangle rect(50, 100);
	Circle circ(10);

	cout << "Rectangle Area: " << rect.area() << endl;
	cout << "Circle Circumference: " << circ.circum() << endl;
}
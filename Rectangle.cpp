#include "Rectangle.hpp"

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int Rectangle::area()
{
	return (width*height);
}
// Point.cpp
#include "Point.h"

Point::Point() : x(0), y(0)
{
}

Point::Point(int a, int b) : x(a), y(b)
{
}

void Point::set(int a, int b)
{
	x = a;
	y = b;
}
void Point::print()
{
	std::cout << x << ", " << y << std::endl;
}
// 파일분할1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
	void print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};
int main()
{
	Point pt(1, 2);
}

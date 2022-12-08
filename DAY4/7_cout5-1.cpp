// 7_cout5-1
// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << p.x << ", " << p.y;

	return os;
}

int main()
{
	Point p(1, 2);

	std::cout << p ; // operator<<(cout, p);
}



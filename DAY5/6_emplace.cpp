// 6_emplace
#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int,int)" << std::endl; }

	Point(const Point& pt) : x(pt.x), y(pt.y) { std::cout << "Point(const Point&)" << std::endl; }

	~Point() { std::cout << "~Point(" << std::endl; }
};

int main()
{
	std::vector<Point> v;

	// vector 俊 夸家甫 持绰 规过
	// 1. 
	Point pt(1, 2);
	v.push_back(pt);
}

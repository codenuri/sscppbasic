#include <iostream>

// 핵심 1. 클래스 안에는 멤버 함수의 선언만 제공합니다.
class Point
{
	int x, y;
public:
	Point();
	Point(int a, int b);

	void set(int a, int b);
	void print();
};


// 2. 멤버 함수 구현은 클래스 외부에서 작성 합니다.
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




int main()
{
	Point pt(1, 2);
}

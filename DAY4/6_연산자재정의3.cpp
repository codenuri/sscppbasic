#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const { std::cout << x << ", " << y << std::endl; }

	/*
	Point operator+(const Point& p) const
	{
		std::cout << "member operator+" << std::endl;
		Point temp(x + p.x, y + p.y);
		return temp;
	}
	*/
	friend Point operator+(const Point& p1, const Point& p2);
};

Point operator+(const Point& p1, const Point& p2)
{
	std::cout << "non-member operator+" << std::endl;

	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main()
{
	const Point p1(1, 1);
	Point p2(2, 2);

	Point p3 = p1 + p2; // operator+(p1, p2) 가 있어도 됩니다.
	
	operator+(p1, p2);

	// member vs 일반함수
	// member 의 장점 : private 멤버 접근이 쉽다
	// 일반 함수      : 1번째 인자가 객체 아닐때도 동작한다.

	int n = 0;

	Point p5 = p1 + p2; // p1.operator+(Point)
	Point p6 = p1 + n;	// p1.operator+(int)
	Point p7 = n  + p1; // n.operator+(Point) 가 필요한데..
						// n은 int 이므로 멤버 함수를 만들수 없다.
						// 이 경우 operator+(int, Point) 를 만들며 된다.

	// 멤버 함수로의 구현은 
	// => 1번째 인자가 user define type이 아닌것은 할수 없다.

	// 일반 함수는
	// => 1번째 인자가 user define type이 아니어도 할수 있다.
}


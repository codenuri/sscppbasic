#include <iostream>

// 핵심 1. 객체의 상태를 변경하지 않은 모든 멤버 함수는 반드시
//         "상수 멤버 함수"로 해야 합니다.
//			=> Rect 의 getArea(),  Point 의 print() 등..
//		    => 흔히 "getter" 라고 이야기 하는 모든 멤버함수들..

// 핵심 2. 선언과 구현으로 분리시 양쪽에 모두 const 를 붙여야 합니다.

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0);
	void set(int a, int b);

	// 핵심 1. 상수 멤버 함수를 만들때는 선언과 구현에 모두 const가 
	//        있어야 합니다
	void print()  const;
};

// 핵심 2. 디폴트 파라미터는 선언부에만 표기해야 합니다.
//         구현부에서는 디폴트 값을 제거하거나, 주석으로 막아야 합니다.
Point::Point(int a /*= 0*/, int b /*=0*/) : x(a), y(b) {}

void Point::set(int a, int b) { x = a; y = b; }

void Point::print()  const
{
	std::cout << x << ", " << y << std::endl;
}


int main()
{
	//	Point p(1, 2);
	const Point p(1, 2);

	p.x = 10;		
	p.set(10, 20);	
	p.print();		
}


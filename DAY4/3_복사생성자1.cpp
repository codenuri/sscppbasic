// 2_복사생성자1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point()             : x(0), y(0) {} // 1
	Point(int a, int b) : x(a), y(b) {} // 2

	// 핵심 1. 복사 생성자 개념
	// => 자신과 동일한 타입의 객체 한개를 인자로 가지는 생성자.
	// => 사용자가 만들지 않으면 컴파일러가 제공한다.
	// => 컴파일러가 제공하는 모양은 아래와 같다.

	Point(const Point& other) : x(other.x), y(other.y) {}
			// => 모든 멤버를 복사해 준다.
};
int main()
{
	// 아래 4줄에 대해서 생각해 봅시다.
	Point p1;		// ok.    "Point()"   모양의 생성자 호출
//	Point p2(1);    // error. "Point(int)"모양의 생성자는 없다
	Point p3(1,2);	// ok.    "Point(int, int)"모양의 생성자호출

	Point p4(p3);   // "Point(Point)" 의 생성자가 필요한데, 만들지 않았다
					// 그런데, 에러가 나지 않는다.

	Point p5 = p3;  // 복사 생성자 호출 ( 복사 초기화 )
					// explicit 라면 에러인데..
					// 복사 생성자는 explicit 로 만드는 경우는 거의 없습니다.
}
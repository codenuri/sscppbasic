// 4_상수멤버함수1.cpp    119 page ~
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a = 0, int b = 0) : x(a), y(b) {}

	void set(int a, int b) { x = a; y = b; }

	// 컴파일러는 선언만 보고 멤버 함수 호출가능여부를 판단합니다.
	// 상수 객체는 일반 멤버 함수를 호출할수 없습니다.
	// 상수 객체가 print 를 호출가능하게 하려면 
	// => 컴파일러에게 내부적으로 멤버 데이타를 변경하지 않겠다고
	//    알려주어야 합니다.
	void print()  const  
	{	
//		x = 100; // error. 상수 멤버 함수 안에서는
				 //	       멤버 데이타 수정할수 없습니다.

		std::cout << x << ", " << y << std::endl;
	}
};

int main() 
{
//	Point p(1, 2);
	const Point p(1, 2);

	p.x = 10;		// error. x는 public 에 있지만, 상수 이므로
	p.set(10, 20);	// error. 
	p.print();		// error. print()가 상수 멤버 함수가 아니라면
					// ok     print()가 상수 멤버 함수일때.. 
}

// 핵심 : 상수 객체는 상수 멤버 함수만 호출할수 있습니다.
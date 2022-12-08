//  5_연산자재정의 - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// 두개의 점을 더할수 있게 하고 싶습니다.
	// 다음중 어떤 코드가 보기 좋을 까요 ?
	Point p3 = Add(p1, p2); // 일반 함수로 만들자. => C언어!!

	Point p4 = p1.Add(p2);	// 멤버 함수로 하자	 => java 언어. 
	
	Point p5 = p1 + p2;		// + 연산자를 사용할수 있게 하자.
							// "단축 표기의 미학"!!
							// => C++의 선택!
	//===========================================
	// "a + b" 를 컴파일러가 해석하는 방법

	// 1. a, b 가 모두 primitive type 이면 그냥 덧셈수행

	// 2. 한개라도 user define type 이면 아래 2개중에 한개의 함수 사용

	// a.operator+(b) 가 가능한가 ?
	// operator+(a,b) 가 가능한가 ?
}


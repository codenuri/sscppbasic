#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};

int main()
{
	// 핵심 1. Rect 형 변수를 여러개 만들면
	// => 멤버 데이타만 각각 생성되게 됩니다.
	// => 멤버 함수는 변수의 갯수에 상관없이 한개만 코드 메모리에 있습니다.
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	// 핵심 2. 멤버 데이타면 크기에 포함됩니다.
	std::cout << sizeof(r1) << std::endl; // 16.

	// 핵심 3. 용어
	int n1 = 0;				// n1 은 "변하는 수" => 변수
	Rect r = { 1,1,10,10 };	// 변수 라고 하기 보다는
							// "사각형 한개" 로 보는 것이 좋습니다.
							// "객체" 라고 부르게 됩니다

	// 객체(Object) : 세상에 존재하는 모든 것. 
	// 엄격히 표현하면 "n1" 도 객체입니다.

	// 그런데.. 일반적으로!!
	// primitive type 의 instance : 변수
	// user define type의 instance : 객체 
}

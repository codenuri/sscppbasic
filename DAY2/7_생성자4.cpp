#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point() { x = 0; y = 0; std::cout << "Point()" << std::endl; } // 1
	Point(int a, int b) { x = a; y = b; std::cout << "Point(int, int)" << std::endl; } // 2
};

// 핵심 : 객체 생성시
// 1. 멤버 데이타의 생성자가 먼저 실행되고
// 2. 객체 자신의 생성자가 실행된다.

class Rect
{
	Point leftTop;
	Point rightBottom;
public:
	Rect()
	{
		std::cout << "Rect()" << std::endl;
	}
};

int main()
{
	Rect rc; // 화면 출력 결과 예측해 보세요
}

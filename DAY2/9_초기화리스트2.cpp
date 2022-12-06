#include <iostream>

class Point
{
	int x, y;
public:
//	Point()				: x(0), y(0) { std::cout << "Point()" << std::endl; }
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int, int)" << std::endl; }
};

// 핵심 : 현재 Point 에 디폴트 생성자가 없습니다.
// Point p1;		// error
// Point p2(0,0);	// ok

class Rect
{
	Point ptFrom;
	Point ptTo;
public:
	/*
	// 사용자 코드		컴파일러가 변경한 코드
	Rect()				// Rect() :	ptFrom(), ptTo()
	{
		std::cout << "Rect()" << std::endl;
	}
	*/

	// 핵심 : 디폴트 생성자가 없는 타입을 멤버로 가지게 되는 경우
	//		 반드시 초기화 리스트에서 인자가 있는 생성자를 호출하도록
	//		표기해야 합니다
	Rect() : ptFrom(0, 0), ptTo(0, 0)
	{
	}
};


int main()
{
	Rect r; 
}





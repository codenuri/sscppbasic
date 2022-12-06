#include <iostream>

// member field initialization
class Point
{
	// C++11 부터는 멤버 데이타를 직접 초기화 할수 있습니다.
	int x = 0;
	int y = 0;
public:
	Point() {}
	Point(int a) : y(a) {}
};

// 위 클래스를 컴파일하면 아래 처럼 변경됩니다.
class Point
{
	int x;
	int y;
public:
	// 필드 초기화 값을 가지고 아래 처럼 생성자를 변경하는 것. 
	Point()      : x(0), y(0) {}
	Point(int a) : x(0), y(a) {}
};

int main()
{

}





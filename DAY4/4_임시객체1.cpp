#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	: x(a), y(b) { std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
// 핵심 1. 임시객체를 만드는 법 : 클래스이름()
//      2. 임시객체의 수명.
int main()
{
//	Point pt(1, 2); // named object
					// 수명 : 자신을 선언한 블럭을 벗어날때 파괴

//	Point(1, 2);	// unnamed object ( 이름 없는 객체 )
					// 수명 : 자신을 선언한 문장의 끝..
					// temporary(임시객체) 라고도 합니다.

	Point(1, 2), std::cout << "X" << std::endl;

	std::cout << "-------" << std::endl;
}






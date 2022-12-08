#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// 핵심 : 임시객체의 특징 정리!
int main()
{
	Point pt(1, 2);
	
	pt.x = 10;			// ok
	Point(1, 2).x = 10;	// error.
						// 1. 임시객체는 등호의 왼쪽에 올수없다
						

	Point* p1 = &pt;			// ok 	
	Point* p2 = &Point(1, 2);	// error
								// 2. 임시객체는 주소연산자로	
								//	  주소를 구할수 없다.
	
	Point& r1 = pt;				// ok
	Point& r2 = Point(1, 2);	// error.
								// 3. 임시객체는 참조로 가리킬수 없다.
}






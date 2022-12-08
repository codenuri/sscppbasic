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
								// 
	// 중요한 규칙!!! 
	// 4. 상수 참조는 임시객체를 가리킬수 있다.
	const Point& cr = Point(1, 2); // ok..
					// => 이경우, 임시객체의 수명은 cr의 수명으로
					//    연장됩니다.
					//    이름없는 객체가 이름이 생긴것 입니다.

	cr.x = 10; // error. cr 는 상수 참조 입니다.

	// C++ ARM 책 
	// => CPU 의 ARM 이 아닙니다.
	// => C++ Annoted Reference Manual(저자 C++창시자)
	//    C++의 각 문법을 왜? 그렇게 설계 했는지 의도를 설명
}


// 등호에 왼쪽에 올수 없는것!
// const, 임시객체인데 임시객체를 흔히 rvalue 라고 합니다. 그래서
// const, rvalue 가 등호의 왼쪽에 올수 없습니다. 





// 2_복사생성자1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}  
	Point(int a, int b) : x(a), y(b) {}  

	// 복사 생성자를 사용자가 직접 만들어도 됩니다.
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) {}		// Point p = p1
void f2(Point& p) {} 

Point pt(1, 1);

Point  f3() { return pt; }	// pt 자체가 반환되는것이 아닙니다.
							// pt를 복사한 리턴용 복사본 객체(임시객체)
							// 를 생성해서 반환 합니다.
							// main 의 "f3()" 의 위치에는
							// 진짜 pt 가 아닌 임시객체가 놓이게 됩니다.

Point& f4() { return pt; }	// 리턴용 임시객체를 만들지 말고
							// pt 자체를 반환해 달라는 것!!!
							// 복사 생성자 호출 안됨.

int main()
{
	Point p1(1, 2);		

	// 복사 생성자가 사용되는 경우 3가지
	// 1. 객체가 자신과 동일한 타입으로 초기화 될때
	/*
	Point p2(p1);
	Point p3 = p1;
	Point p4{ p1 };
	Point p5 = { p1 };
	*/

	// 2. 함수 호출시 객체 인자를 call by value 로 전달할때
	//f1(p1);	// call by value.     복사본 만들때 복사 생성자 사용
	//f2(p1);	// call by reference. 복사본 생성 안됨. 복사생성자 호출안됨
				
	// 3. 함수가 객체를 값 타입으로 반환할때
	//    임시객체를 반환하게 됩니다.
	//    임시객체를 만들때 복사 생성자 호출.
	//f3();

	f4();
}
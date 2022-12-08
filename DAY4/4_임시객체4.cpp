#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
//==============================
// 임시객체와 함수 반환 타입.
Point pt(1, 2);

Point foo()		// return by value
{
	return pt;	// pt를 복사해서 리턴용 임시객체를 만들어서 반환
}

Point& goo()	// return by refernce
{
	return pt;	// 리턴용 임시객체를 만들지 말고, pt 자체를 반환해 달라.
}
int main()
{
//	foo().x = 10; // error. 리턴용임시객체.x = 10;
	goo().x = 10; // ok..   pt.x = 10
}
Point& hoo()
{
	Point p(1, 2);
	return p;	// 절대 안됩니다.
				// 지역변수는 참조 반환 하지 마세요..
				// 반드시 값 반환만 사용해야 합니다.
}
// 함수 호출이 종료되어도 파괴되지 않은 것들만 참조 반환해야 합니다
// => 전역변수, 멤버 변수, *this, 








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

Point foo() 
{
	return pt; 
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









// 5_this1.cpp      126 page ~
#include <iostream>

class Point
{
	int x, y;
public:
	void set(int a, int b) // void set(Point* this, int a, int b)
	{					   // {
		x = a;			   //		this->x = a;  
		y = b;				//		this->y = b;

		// 멤버 함수 안에서 this : 현재 함수를 호출할때 사용한
		//						  객체의 주소
		std::cout << this << std::endl;
	}
};
int main()
{
	Point p1;
	Point p2;
	std::cout << "p1 : " << &p1 << std::endl;
	std::cout << "p2 : " << &p2 << std::endl;
	p1.set(10, 20); // set(&p1, 10, 20)
	p2.set(10, 20);
}

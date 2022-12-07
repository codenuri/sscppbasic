#include <iostream>

class Car
{
public:
	// 다음중 에러는 ?
	// 핵심 1. this 는 현재 멤버함수를 호출한 객체의 주소
	//     2. static 멤버 함수는 객체없이 호출가능한 함수!
	void foo()
	{
		std::cout << this << std::endl; // 1
	}
	// static 멤버 함수에서는 this를 사용할수 없습니다.
	static void goo() 
	{
		std::cout << this << std::endl; // 2 .. error
	}
};

int main()
{
}

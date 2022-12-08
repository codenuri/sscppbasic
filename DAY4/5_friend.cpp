#include <iostream>

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }

	// friend 함수 선언
	// => 멤버 함수는 아니지만 private 멤버에 접근할수 있게 해달라는 요청.
	// => 다른 객체지향 언어에는 없는 "C++ 만의 특징"

	// 1. 멤버 함수로 하면 되는데.. 왜 일반함수로 만드나요 ?
	// => 멤버 함수로 만들수 없을때가 있습니다.(연산자 재정의 에서 배웁니다.)

	// 2. set_gear() 등을 만들면되지 않나요 ?
	// => setter 가 있다는 것은 누구나 접근 가능하다는 의미..!!
	// => fixBike()만 gear 에 접근할수 있게 하려며 friend 사용
	friend void fixBike();
};

void fixBike()
{
	Bike b;
	b.gear = 10;
}

int main()
{
	fixBike();
}
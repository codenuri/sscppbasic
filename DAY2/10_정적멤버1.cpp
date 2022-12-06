// 3_정적멤버1 - 110 page
#include <iostream>

// Car 의 객체를 몇개 생성했는지 객체의 갯수를 관리 하고 싶다.

// 방법 1. 멤버 데이타 cnt 사용
// => 멤버 데이타는 "객체당 한개" 씩 따로 만들어 진다..
// => 객체의 갯수 파악 실패!!

class Car
{
	int color;
	int speed;
public:
	int cnt = 0;

	Car() { ++cnt; }
	~Car() { --cnt; }
};

int main()
{
	Car c1;
	Car c2;

	std::cout << c1.cnt << std::endl; // ???
}



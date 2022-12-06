#include <iostream>

class Car
{
	int color;
	int speed;
	static int cnt; // private 이므로.. 멤버 함수만 접근 가능합니다.
public:	
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; }
			// => non-static 멤버 함수
			// => 호출하려면 반드시 객체가 필요 합니다.

	static int get_count() { return cnt; }
			// => static 멤버 함수 
			// => 객체 없이 호출 가능
			// => "Car::get_count()" 로 호출
};
int Car::cnt = 0;	// private 에 있어도 외부 선언시 초기화는 가능합니다.

int main()
{
	std::cout << Car::get_count() << std::endl;  // 0

	Car c1;
	Car c2;

	std::cout << c1.get_count() << std::endl; // 2
}

// static member data
//	=> 모든 객체가 공유하는 멤버 데이타
//  => 객체의 크기에는 포함되지 않음
//  => 접근 지정자를 사용할수 있는 "전역변수" 개념


// static member function
//	=> 객체 없이 호출가능한 멤버 함수
//	=> "클래스이름::함수이름()" 으로 호출
//  => "private"에 접근 가능한 일반 함수 개념
// 
// 참고 : 일반 멤버 함수는 반드시 객체를 생성해야만 호출가능하다.
// Car c;
// c.Go();


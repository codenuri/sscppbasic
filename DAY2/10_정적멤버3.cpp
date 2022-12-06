#include <iostream>

// 방법 3. 



class Car
{
	int color;
	int speed;
public:
	
//	int cnt = 0;	// 객체당 한개씩 따로 생성된다.
	static int cnt;	// 객체당 한개가 아니라 모든 객체가 공유하는
					// 멤버 데이타.

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// static 멤버 데이타는 반드시 클래스외부에서도 선언되어야 합니다.
// 초기값도 여기서 지정합니다.
int Car::cnt = 0;

int main()
{
	// static 멤버 데이타 특징
	// 1. Car 객체를 생성하지 않아도 Car::cnt 는 메모리에 놓이게 됩니다.
	//	=> "Car::cnt" 이름으로 접근 가능합니다(public 인 경우)

	std::cout << Car::cnt << std::endl; // 0


	// 2. Car 객체를 생성하면 "non-static 멤버" 만 메모리에 놓이게 됩니다.
	Car c1;
	Car c2;	

	// 3. static 멤버 데이타에 접근 방법은 2가지 입니다.
	// (A). 클래스 이름으로 접근     "Car::cnt"
	// (B). 객체 이름으로도 접근가능  "c1.cnt" 또는 "c2.cnt"

	std::cout << Car::cnt << std::endl;  
	std::cout << c1.cnt << std::endl;
	std::cout << c2.cnt << std::endl;


}



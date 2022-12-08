#include <iostream>

// C++11 부터 C++ 표준에서 스마트포인터 제공합니다.
#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

int main()
{
//	std::shared_ptr<Car> sp1 = new Car; // error. explicit 생성자
	std::shared_ptr<Car> sp1(new Car);  // ok

	// sp1 은 포인터는 아니지만 Car* 처럼 생각하고 사용하세요
	sp1->Go();

	// 객체를 new로 만들었지만 delete 는 별도로 할 필요 없습니다
	// 자동으로 삭제 됩니다.
}

// 스마트 포인터는 "전통적인 객체지향 디자인"은 아니지만
// C++ 진영의 아주 유명한 기술입니다.!!
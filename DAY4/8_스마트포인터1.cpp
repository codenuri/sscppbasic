#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// Ptr 이 핵심 입니다.
// 스마트 포인터
// 개념 : 객체가 다른 타입의 포인터 처럼 사용될수 있는것
// 원리 : -> 와 * 연산자를 재정의해서 객체를 포인터 처럼 보이도록 한것

// 장점 : new 로 할당한 객체를 raw pointer 로 관리하면
//		  반드시 직접 delete 해야 한다.
//	      하지만 스마트 포인터를 사용하면 자동으로 삭제된다.
//        사용자는 new 만하면 된다.
//        "파이썬 변수의 원리"!! 

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};


int main()
{
	// 아래 한줄을 잘 생각해 보세요
	// 1. p 는 "Ptr 타입" 의 "객체" 입니다.
	// 2. 그런데, A를 보면 p 가 "Car 타입의 포인터" 처럼 보입니다.
	Ptr p = new Car; // Ptr p(new Car)

	p->Go(); // A
			 // (p.operator->())Go() 의 모양인데
			 // (p.operator->())->Go() 처럼 해석해 줍니다.

	(*p).Go();  // p를 진짜 포인터 처럼 사용하려면 이 표기법도 가능해야 합니다
				// ( p.operator*()).Go()
}



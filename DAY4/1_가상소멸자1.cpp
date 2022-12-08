#include <iostream>

// 결론 : 모든 기반 클래스의 소멸자는 반드시 "virtual" 로 만들어야 합니다.!!!!
// => 기반 클래스 소멸자가 "virtual" 이면 모든 파생 클래스 소멸자는
//    자동으로 virtual 이 됩니다.!
// => 단, 고급 기법에서는 "virtual" 을 표기하지 않고도 이 문제를 해결하는 기법도
//    있긴합니다.

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  }
};

class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	 ~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d;

//	Derived* p = new Derived;	// 객체 생성 - 생성자 호출
//	delete p;					// 객체 파괴 - 소멸자 호출

	Base* p = new Derived;		// 객체 생성 - 생성자 호출

	delete p;	// 이순간 객체가 파괴 되므로 소멸자를 호출해야 합니다.
				// 소멸자를 호출하는 것도 결국 함수의 호출 입니다.
				// 1. static binding 을 할지 dynamic binding 을 할지 결정해야 합니다.
				// => p 가 Base* 이므로 Base 클래스의 선언을 조사해서
				//    소멸자가 가상인지 아닌지 조사.

				// 2. Base 클래스 안에서 ~Base()가 가상이 아니므로
				//    이순간 p의 타입인 Base 의소멸자 호출

				// 3. Base 소멸자가 가상이 었다면
				//    p 가 가리키는 곳을 조사후에 소멸자 호출을 결정


//	p->foo();	// 1. static binding 할것인가 dynamic binding 할것인가 판단
				// => p가 Base* 타입이므로 "Base 클래스" 에서 foo가
				//    가상인지 아닌지를 조사
			  
}
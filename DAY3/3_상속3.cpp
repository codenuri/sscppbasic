// 상속과 생성자.   135page ~
#include <iostream>

// 상속을 사용할때 생성자/소멸자가 호출되는 정확한 원리 

class Base
{
public:
	Base()      { std::cout << "Base()"  << std::endl; }
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base()     { std::cout << "~Base()" << std::endl; }
};
class Derived : public Base
{
public:
	// 사용자 코드		// 컴파일러가 변경한 코드
	Derived()			// Derived() : Base()
	{
		std::cout << "Derived()" << std::endl; 
	} 
	Derived(int a)		// Derived(int a) : Base()	
	{ 
		std::cout << "Derived(int)" << std::endl; 
	}
	~Derived()      
	{
		std::cout << "~Derived()" << std::endl; 

		// Derived 안의 코드를 모두 실행후에
		// ~Base();   기반 클래스 소멸자 호출
	}
};
int main()
{
//	Derived d;		// call Derived::Derived()
	Derived d(5);	// call Derived::Derived(5)
}





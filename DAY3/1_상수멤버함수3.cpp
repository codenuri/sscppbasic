#include <iostream>

class Test
{
public:
	// 동일이름의 함수를
	// 상수 멤버 함수와 비상수 멤버 함수로 각각 만들수 있습니다.
	void foo()       { std::cout << "foo" << std::endl; }
	void foo() const { std::cout << "foo const" << std::endl; }
};
int main()
{
	// 핵심 1. 상수가 아닌 일반 객체는 "상수 멤버 함수와 비상수 멤버함수"를
	//        모두 호출가능합니다
	//         non-const member function 이 우선 순위가 높습니다.
	Test t; 
	t.foo();  // 1. foo() 호출.   
			  // 2. (1) 이 없다면 "foo() const" 호출


	// 핵심 2. 상수 객체는 상수 멤버 함수만 호출 가능합니다.
	const Test ct;
	ct.foo();	// foo() const 가 호출됩니다.
}


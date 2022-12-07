﻿// 상속과 생성자.   135page ~
#include <iostream>

// 아래 코드에서 에러를 모두 찾아 보세요
class Base
{
public:
	Base(int a) { std::cout << "Base(int)" << std::endl; }
	~Base() { std::cout << "~Base()" << std::endl; }
};

class Derived : public Base
{
public:
	// 사용자 코드		// 컴파일러가 변경한 코드
//	Derived(){}			// Derived()     : Base() {}		
//	Derived(int a) {}	// Derived(int a): Base() {}

	// 기반 클래스에 디폴트 생성자가 없다면
	// "반드시 파생 클래스에서 기반 클래스의 다른 생성자를 명시적으로
	//  호출해 주어야 합니다."
	Derived()      : Base(0) {}
	Derived(int a) : Base(a) {}
};

int main()
{
}





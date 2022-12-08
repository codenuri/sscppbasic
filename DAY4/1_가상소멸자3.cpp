// 1_가상소멸자3
#include <iostream>

class Shape
{
public:
	// 핵심 1. 아래 코드의 의미는
	//  => 파생 클래스는 반드시 draw() 의 구현을 제공해야 한다"
	virtual void draw() = 0; 

	// 핵심 2. Special member function
	// => 사용자 만들지 않으면 컴파일러 제공해 주는 것
	// 1. 생성자 : 사용자가 생성자를 한개도 만들지 않으면 컴파일러가 제공
	// 2. 소멸자 : 사용자가 소멸자를 만들지 않으면 컴파일러가 제공.
	// 3. 복사 생성자
	// 4. 대입 연산자.
};
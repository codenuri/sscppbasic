#include <iostream>

class Object
{
	int data;
public:
	void f1() { std::cout << "f1" << std::endl; }
	void f2()
	{ 
		std::cout << "f2" << std::endl; 
		data = 10;  // this->data = 10 인데, 현재 this가 0
	}

	virtual void f3() { std::cout << "f3" << std::endl; }
};
int main()
{
	Object* p = nullptr;

	// 아래 3줄을 생각해 봅시다. 
	// => 핵심 : 현재 p 는 "0" 입니다.
//	p->f1();	// f1(p) => f1(0)
//	p->f2();	// f2(p) => f2(0)

	p->f3();	// p->vtptr[1]() 인데
				// p가 0 이므로 런타입 에러!!
}

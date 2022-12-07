#include <iostream>

class Animal
{
public:
	// 일반 멤버 함수 : static binding
	void Cry1() { std::cout << "Animal Cry1" << std::endl; }


	// 가상(virtual)함수 : dynamic binding 을 해달라는 지시어.
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; }
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }
	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;

	p->Cry1();	// Animal Cry1
	p->Cry2();	// Dog    Cry2
}

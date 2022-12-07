// RTTI1.cpp
#include <iostream>

class Animal
{
public:
	virtual void Cry() {}
};

class Dog : public Animal
{
public:
	virtual void Cry() override {}

	void Run() {}
};

void foo(Animal* p)
{
	// RTTI1.cpp 처럼 조사 하지 말고, 바로 캐스팅 하기!!

	Dog* pdog = static_cast<Dog*>(p);

	std::cout << pdog << std::endl;	

}

int main()
{
	Animal a;
	Dog    d;

	foo(&a);
	//	foo(&d);
}
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
	// RTTI1.cpp ó�� ���� ���� ����, �ٷ� ĳ���� �ϱ�!!

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
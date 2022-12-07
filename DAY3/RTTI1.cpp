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
};

void foo(Animal* p)
{
}
int main()
{
	Animal a;
	Dog    d;

	foo(&a);
	foo(&d);
}
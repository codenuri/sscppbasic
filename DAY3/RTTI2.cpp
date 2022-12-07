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

	// static_cast : ������ �ð� ĳ����!
	//			     downcast �� Ȯ���Ҽ� ����.

	// dynamic_cast : ����ð� ĳ����
	//				  p �� ����Ű�� ���� �ִ� ��ü�� ������ ĳ����
	//				  �����ϴ�.! �ݵ�� �ʿ��� ���ƴϸ� ������� ������
	//Dog* pdog = static_cast<Dog*>(p);

	Dog* pdog = dynamic_cast<Dog*>(p);

	std::cout << pdog << std::endl;	

	if (pdog != nullptr)
		pdog->Run();
}

int main()
{
	Animal a;
	Dog    d;

	foo(&a);
	foo(&d);
}
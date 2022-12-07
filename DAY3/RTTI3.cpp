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
/*
template<typename T1, typename T2>
T1* mydynamic_cast(T2* p)
{
	// Ÿ���� �´��� Ȯ���ϰ�
	if (typeid(T1) == typeid(*p))
	{
		// ������ ĳ�����ؼ� ��ȯ
		return static_cast<T1>(p);		
	}
	return nullptr;
}
*/


void foo(Animal* p)
{
	// 1. ��� ������ Ÿ���� ������ static_cast �� �����մϴ�.
	// => ������ ������ ������ �ʽ��ϴ�.
	// => �׷���, p�� ����Ű�� ���� Dog �� �ƴ϶� �ּҰ� ���ɴϴ�.
	//    ���� ����ϸ� �ȵ˴ϴ�.
	Dog* pdog1 = static_cast<Dog*>(p);

	// 2. p �� ���� Dog ���� Ȯ���� ĳ���� �Ϸ��� dynamic_cast �ؾ� �մϴ�.
	// => p�� ����Ű�� ��ü�� Dog �� �ƴϸ� 0�Դϴ�.
	Dog* pdog2 = dynamic_cast<Dog*>(p);

	// 3. dynamic_cast �� ������ �����մϴ�.
	Dog* pdog3 = mydynamic_cast<Dog*>(p);
}

int main()
{
	Animal a;
	Dog    d;
	foo(&a);
	foo(&d);
}

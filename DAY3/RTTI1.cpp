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
	// 1. foo �� ��� ������ü�� �ּҸ� ������ �ֽ��ϴ�.
	// 2. p�� Dog ��� Run �� ȣ���ϰ� �ͽ��ϴ�.
	// 3. p �� ������ � ������ ����Ű���� �����Ҽ� �־�� �մϴ�

	// 1. typeid() �����ڸ� ����ϸ� type_info ��ü�� ������ ������
	//    �ֽ��ϴ�.
	const std::type_info& t1 = typeid(*p); // typeid(��ü)
	const std::type_info& t2 = typeid(Dog); // typeid(Ŭ����)

	if (t1 == t2)
	{
		std::cout << "p �� Dog �� ����Ŵ" << std::endl;
	}

	// ��� 2. ��ó�� �������� typeid() �� ��ȯ���� �׳� ���ϸ� �˴ϴ�
	if (typeid(*p) == typeid(Dog))
	{

		// p�� ����Ű�� ���� Dog ��� p�δ� ���� ��� ���� �ȵ�
		//p->Run(); // error 

		// ĳ�����ؼ� ���
		Dog* pDog = static_cast<Dog*>(p);
		pDog->Run();
	}

}



int main()
{
	Animal a;
	Dog    d;

	foo(&a);
//	foo(&d);
}
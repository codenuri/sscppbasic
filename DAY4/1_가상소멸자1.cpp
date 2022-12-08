#include <iostream>

class Base
{
public:
	Base()  {  }
	~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d;

//	Derived* p = new Derived;	// ��ü ���� - ������ ȣ��
//	delete p;					// ��ü �ı� - �Ҹ��� ȣ��

	Base* p = new Derived;
	delete p;
}
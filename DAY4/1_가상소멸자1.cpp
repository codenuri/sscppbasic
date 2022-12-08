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

//	Derived* p = new Derived;	// °´Ã¼ »ý¼º - »ý¼ºÀÚ È£Ãâ
//	delete p;					// °´Ã¼ ÆÄ±« - ¼Ò¸êÀÚ È£Ãâ

	Base* p = new Derived;
	delete p;
}
#include <iostream>

class Object
{
	int data;
public:
	void f1() { std::cout << "f1" << std::endl; }
	void f2() { std::cout << "f2" << std::endl; data = 10; }
	virtual void f3() { std::cout << "f3" << std::endl; }
};
int main()
{
	Object* p = nullptr;

	// �Ʒ� 3���� ������ ���ô�.
	p->f1();
	p->f2();
	p->f3();
}
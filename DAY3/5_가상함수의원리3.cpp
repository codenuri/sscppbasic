#include <iostream>

class Object
{
	int data;
public:
	void f1() { std::cout << "f1" << std::endl; }
	void f2()
	{ 
		std::cout << "f2" << std::endl; 
		data = 10;  // this->data = 10 �ε�, ���� this�� 0
	}

	virtual void f3() { std::cout << "f3" << std::endl; }
};
int main()
{
	Object* p = nullptr;

	// �Ʒ� 3���� ������ ���ô�. 
	// => �ٽ� : ���� p �� "0" �Դϴ�.
//	p->f1();	// f1(p) => f1(0)
//	p->f2();	// f2(p) => f2(0)

	p->f3();	// p->vtptr[1]() �ε�
				// p�� 0 �̹Ƿ� ��Ÿ�� ����!!
}

#include <iostream>

// ��� : ��� ��� Ŭ������ �Ҹ��ڴ� �ݵ�� "virtual" �� ������ �մϴ�.!!!!
// => ��� Ŭ���� �Ҹ��ڰ� "virtual" �̸� ��� �Ļ� Ŭ���� �Ҹ��ڴ�
//    �ڵ����� virtual �� �˴ϴ�.!
// => ��, ��� ��������� "virtual" �� ǥ������ �ʰ� �� ������ �ذ��ϴ� �����
//    �ֱ��մϴ�.

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  }
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

	Base* p = new Derived;		// ��ü ���� - ������ ȣ��

	delete p;	// �̼��� ��ü�� �ı� �ǹǷ� �Ҹ��ڸ� ȣ���ؾ� �մϴ�.
				// �Ҹ��ڸ� ȣ���ϴ� �͵� �ᱹ �Լ��� ȣ�� �Դϴ�.
				// 1. static binding �� ���� dynamic binding �� ���� �����ؾ� �մϴ�.
				// => p �� Base* �̹Ƿ� Base Ŭ������ ������ �����ؼ�
				//    �Ҹ��ڰ� �������� �ƴ��� ����.

				// 2. Base Ŭ���� �ȿ��� ~Base()�� ������ �ƴϹǷ�
				//    �̼��� p�� Ÿ���� Base �ǼҸ��� ȣ��

				// 3. Base �Ҹ��ڰ� ������ ���ٸ�
				//    p �� ����Ű�� ���� �����Ŀ� �Ҹ��� ȣ���� ����


//	p->foo();	// 1. static binding �Ұ��ΰ� dynamic binding �Ұ��ΰ� �Ǵ�
				// => p�� Base* Ÿ���̹Ƿ� "Base Ŭ����" ���� foo��
				//    �������� �ƴ����� ����
			  
}
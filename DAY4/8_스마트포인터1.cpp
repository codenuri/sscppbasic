#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car()    { std::cout << "~Car" << std::endl; }
};
// Ptr �� �ٽ� �Դϴ�.
// ����Ʈ ������
// ���� : ��ü�� �ٸ� Ÿ���� ������ ó�� ���ɼ� �ִ°�
// ���� : -> �� * �����ڸ� �������ؼ� ��ü�� ������ ó�� ���̵��� �Ѱ�

// ���� : new �� �Ҵ��� ��ü�� raw pointer �� �����ϸ�
//		  �ݵ�� ���� delete �ؾ� �Ѵ�.
//	      ������ ����Ʈ �����͸� ����ϸ� �ڵ����� �����ȴ�.
//        ����ڴ� new ���ϸ� �ȴ�.
//        "���̽� ������ ����"!! 

class Ptr
{
	Car* obj;
public:
	Ptr(Car* p = 0) : obj(p) {}

	~Ptr() { delete obj; }

	Car* operator->() { return obj; }
	Car& operator*() { return *obj; }
};


int main()
{
	// �Ʒ� ������ �� ������ ������
	// 1. p �� "Ptr Ÿ��" �� "��ü" �Դϴ�.
	// 2. �׷���, A�� ���� p �� "Car Ÿ���� ������" ó�� ���Դϴ�.
	Ptr p = new Car; // Ptr p(new Car)

	p->Go(); // A
			 // (p.operator->())Go() �� ����ε�
			 // (p.operator->())->Go() ó�� �ؼ��� �ݴϴ�.

	(*p).Go();  // p�� ��¥ ������ ó�� ����Ϸ��� �� ǥ����� �����ؾ� �մϴ�
				// ( p.operator*()).Go()
}



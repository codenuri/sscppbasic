#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};
//==============================
// �ӽð�ü�� �Լ� ��ȯ Ÿ��.
Point pt(1, 2);

Point foo() 
{
	return pt; 
}

Point& goo()	// return by refernce
{
	return pt;	// ���Ͽ� �ӽð�ü�� ������ ����, pt ��ü�� ��ȯ�� �޶�.
}

int main()
{
//	foo().x = 10; // error. ���Ͽ��ӽð�ü.x = 10;
	goo().x = 10; // ok..   pt.x = 10
}









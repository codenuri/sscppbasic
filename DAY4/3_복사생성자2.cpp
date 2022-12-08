// 2_���������1.cpp
#include <iostream>

class Point
{
	int x, y;
public:
	Point() : x(0), y(0) {}  
	Point(int a, int b) : x(a), y(b) {}  

	// ���� �����ڸ� ����ڰ� ���� ���� �˴ϴ�.
	Point(const Point& p) : x(p.x), y(p.y)
	{
		std::cout << "copy ctor" << std::endl;
	}
};

void f1(Point  p) {}		// Point p = p1
void f2(Point& p) {} 

Point pt(1, 1);

Point  f3() { return pt; }	// pt ��ü�� ��ȯ�Ǵ°��� �ƴմϴ�.
							// pt�� ������ ���Ͽ� ���纻 ��ü(�ӽð�ü)
							// �� �����ؼ� ��ȯ �մϴ�.
							// main �� "f3()" �� ��ġ����
							// ��¥ pt �� �ƴ� �ӽð�ü�� ���̰� �˴ϴ�.

Point& f4() { return pt; }	// ���Ͽ� �ӽð�ü�� ������ ����
							// pt ��ü�� ��ȯ�� �޶�� ��!!!
							// ���� ������ ȣ�� �ȵ�.

int main()
{
	Point p1(1, 2);		

	// ���� �����ڰ� ���Ǵ� ��� 3����
	// 1. ��ü�� �ڽŰ� ������ Ÿ������ �ʱ�ȭ �ɶ�
	/*
	Point p2(p1);
	Point p3 = p1;
	Point p4{ p1 };
	Point p5 = { p1 };
	*/

	// 2. �Լ� ȣ��� ��ü ���ڸ� call by value �� �����Ҷ�
	//f1(p1);	// call by value.     ���纻 ���鶧 ���� ������ ���
	//f2(p1);	// call by reference. ���纻 ���� �ȵ�. ��������� ȣ��ȵ�
				
	// 3. �Լ��� ��ü�� �� Ÿ������ ��ȯ�Ҷ�
	//    �ӽð�ü�� ��ȯ�ϰ� �˴ϴ�.
	//    �ӽð�ü�� ���鶧 ���� ������ ȣ��.
	//f3();

	f4();
}
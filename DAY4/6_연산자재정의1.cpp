//  5_������������ - 182(131) page
#include <iostream>

class Point
{
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	void print() const 	{ std::cout << x << ", " << y << std::endl;	}
};

int main()
{
	Point p1(1, 1);
	Point p2(2, 2);

	// �ΰ��� ���� ���Ҽ� �ְ� �ϰ� �ͽ��ϴ�.
	// ������ � �ڵ尡 ���� ���� ��� ?
	Point p3 = Add(p1, p2); // �Ϲ� �Լ��� ������. => C���!!

	Point p4 = p1.Add(p2);	// ��� �Լ��� ����	 => java ���. 
	
	Point p5 = p1 + p2;		// + �����ڸ� ����Ҽ� �ְ� ����.
							// "���� ǥ���� ����"!!
							// => C++�� ����!
	//===========================================
	// "a + b" �� �����Ϸ��� �ؼ��ϴ� ���

	// 1. a, b �� ��� primitive type �̸� �׳� ��������

	// 2. �Ѱ��� user define type �̸� �Ʒ� 2���߿� �Ѱ��� �Լ� ���

	// a.operator+(b) �� �����Ѱ� ?
	// operator+(a,b) �� �����Ѱ� ?
}


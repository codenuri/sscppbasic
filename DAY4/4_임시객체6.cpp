#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
};
int main()
{
	// ���� ����� ���� "������ ����" ���� ������
	// �ݵ�� "ǥ�� ����"�� cppreference.com ���� Ȯ���ϼ���.!!
	Point(1, 2).x = 10; // error �� ������ ���� ����
						// "�ӽð�ü�� ���"��� �����ϴ� ��찡 �ʹ� �����ϴ�.
}
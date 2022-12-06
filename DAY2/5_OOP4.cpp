#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() { return (right - left) * (bottom - top); }
	void draw() { std::cout << "draw rect" << std::endl; }
};

int main()
{
	// �ٽ� 1. Rect �� ������ ������ �����
	// => ��� ����Ÿ�� ���� �����ǰ� �˴ϴ�.
	// => ��� �Լ��� ������ ������ ������� �Ѱ��� �ڵ� �޸𸮿� �ֽ��ϴ�.
	Rect r1 = { 1,1,10,10 }; 
	Rect r2 = { 1,1,10,10 };

	// �ٽ� 2. ��� ����Ÿ�� ũ�⿡ ���Ե˴ϴ�.
	std::cout << sizeof(r1) << std::endl; // 16.

	// �ٽ� 3. ���
	int n1 = 0;				// n1 �� "���ϴ� ��" => ����
	Rect r = { 1,1,10,10 };	// ���� ��� �ϱ� ���ٴ�
							// "�簢�� �Ѱ�" �� ���� ���� �����ϴ�.
							// "��ü" ��� �θ��� �˴ϴ�

	// ��ü(Object) : ���� �����ϴ� ��� ��. 
	// ������ ǥ���ϸ� "n1" �� ��ü�Դϴ�.

	// �׷���.. �Ϲ�������!!
	// primitive type �� instance : ����
	// user define type�� instance : ��ü 
}

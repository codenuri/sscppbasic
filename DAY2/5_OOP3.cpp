#include <iostream>

// ��ü ���� ���α׷��� : �ʿ��� ����Ÿ Ÿ���� ���� ���� ����.

// Ÿ���� �����Ҷ� "���¸� ��Ÿ���� ����Ÿ�� ���¸� ������ ������ �����ϴ�
// �Լ��� ��� ���� �Ѵ�."
// C ����ü : �Լ��� �����Ҽ� ����
// C++����ü : �Լ��� �����Ҽ� �ִ�.

// �Լ��� ����ü �ȿ� �־ ��� ������ ������ ?
// => �پ��� ��ü���� ������ ���ؼ� 
//    ���� �����ϰ� ����ϱ� ���� Ÿ���� ���� �Ҽ� �ֽ��ϴ�.

struct Rect
{
	// ��� ����Ÿ(�ʵ�)
	int left;
	int top;
	int right;
	int bottom;

	// ��� �Լ�(�޼ҵ�)
	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect rc = { 1, 1, 10, 10 };

//	int n1 = getRectArea(rc);	// �Լ��� �߽�.
//	drawRect(rc);

	int n2 = rc.getArea();		// rc�� �߽�!
	rc.draw();
}


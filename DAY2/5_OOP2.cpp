// 3_OOP1 - 57page
#include <iostream>


// ��ü ���� ���α׷��� : �ʿ��� ����Ÿ Ÿ���� ���� ���� ����.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

int getRectArea(Rect rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}
void drawRect(Rect rc)
{
	std::cout << "draw rect" << std::endl;
}
int main()
{
	Rect rc = { 1, 1, 10, 10 };

	int n1 = getRectArea(rc);

	drawRect(rc);
}


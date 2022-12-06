// 3_OOP1 - 57page
#include <iostream>

int getRectArea(int left, int top, int right, int bottom)
{
	return (right - left) * (bottom - top);
}

void drawRect(int left, int top, int right, int bottom)
{
	std::cout << "draw rect" << std::endl;
}

int main()
{
	int n1 = getRectArea(1, 1, 10, 10);
	drawRect(1, 1, 10, 10);
}
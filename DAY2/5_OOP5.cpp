#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() // �������ϸ� int getArea(Rect* this) ó�� ���ڰ� ����Եˈ�.
	{ 
		return (right - left) * (bottom - top);  // (this->right - this->left)
	}	
};

int main()
{
	Rect r1 = { 1,1,10,10 };
	Rect r2 = { 5,5,10,10 };

	r1.getArea(); // �̼����� ������ ������ ���ô�.
				  // getArea(&r1);
	r2.getArea(); // getArea(&r2)
}

#include <iostream>

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() // 컴파일하면 int getArea(Rect* this) 처럼 인자가 생기게됩닏.
	{ 
		return (right - left) * (bottom - top);  // (this->right - this->left)
	}	
};

int main()
{
	Rect r1 = { 1,1,10,10 };
	Rect r2 = { 5,5,10,10 };

	r1.getArea(); // 이순간의 원리를 생각해 봅시다.
				  // getArea(&r1);
	r2.getArea(); // getArea(&r2)
}

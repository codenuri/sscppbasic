#include <iostream>

// �ٽ� 1. Ŭ���� �ȿ��� ��� �Լ��� ���� �����մϴ�.
class Point
{
	int x, y;
public:
	Point();
	Point(int a, int b);

	void set(int a, int b);
	void print();
};


// 2. ��� �Լ� ������ Ŭ���� �ܺο��� �ۼ� �մϴ�.
Point::Point() : x(0), y(0) 
{
}

Point::Point(int a, int b) : x(a), y(b)
{
}

void Point::set(int a, int b)
{
	x = a;
	y = b;
}
void Point::print()
{
	std::cout << x << ", " << y << std::endl;
}




int main()
{
	Point pt(1, 2);
}

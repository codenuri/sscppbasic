// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
};

int main()
{
	Point p(1, 2);

	// cout ���� : "%d" ���� ��� << �ڿ� �ִ� ��Ҹ� ���!!
	// �׷��ٸ�, ����� ���� Ÿ���� ��ü�� ??

	std::cout << p;  // cout.operator<<(Point) �� �ʿ�
					// 1. Point �� ����ڰ� ���� Ÿ���̹Ƿ� �� �Լ��� ����
					// 2. �̹� ������� C++ ǥ���� ostream Ŭ������
					//    ����Լ��� �߰��Ҽ��� ����.
					
					// �ذ�å : ��� �Լ��� �ƴ� �Ϲ� �Լ��� �����ȴ�.
					// => operator<<(cout, p)

					
}



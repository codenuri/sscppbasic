#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b)	: x(a), y(b) { std::cout << "Point()" << std::endl;	}
	~Point()            { std::cout << "~Point()" << std::endl;	}
};
// �ٽ� 1. �ӽð�ü�� ����� �� : Ŭ�����̸�()
//      2. �ӽð�ü�� ����.
int main()
{
//	Point pt(1, 2); // named object
					// ���� : �ڽ��� ������ ���� ����� �ı�

//	Point(1, 2);	// unnamed object ( �̸� ���� ��ü )
					// ���� : �ڽ��� ������ ������ ��..
					// temporary(�ӽð�ü) ��� �մϴ�.

	Point(1, 2), std::cout << "X" << std::endl;

	std::cout << "-------" << std::endl;
}






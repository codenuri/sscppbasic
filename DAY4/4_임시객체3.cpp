
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

//======================================
// �Լ� ���ڷ� 
// non-const reference : ���ڷ� �޴� ��ü�� ���¸� �����ϰڴٴ� �ǵ�
//						 => �ӽð�ü�� ������ ����.
void reset(Point& pt) { pt.x = 0; pt.y = 0; }

// const-reference : ���ڷ� ���� ��ü�� �б⸸ �ϰڴٴ� �ǵ�
//						=> �ӽð�ü�� ������ �ְ� �ؾ� �Ѵ�.
//						=> �׷���, const reference �� �ӽð�ü�� ������ �ִ�.
void draw_line(const Point& pt1, const Point& pt2) {}

int main()
{
//	reset( Point(10, 20) );
//	draw_line(Point(0, 0), Point(10, 10));

	// �� �ӽð�ü�� ����ϳ��� ?
	// draw_line �Լ��� ����ؼ� (1,1)~(10,10) ������ ���� �׷� ���ô�.

	// ��� 1. ��ü�� ���� ����
//	Point p1(1, 1);
//	Point p2(10, 10);

//	draw_line(p1, p2);	// p1, p2 �� ���Լ��� ���ڷθ� ����Ұǵ�...
						// �� �Լ��� ȣ���� ����Ǿ �ı� ���� �ʽ��ϴ�.
						// �̸� �ִ� ��ü�̹Ƿ� {}�� ����� �ı� �˴ϴ�.

	// ��� 2. �Լ� ���ڸ� �ӽð�ü ���·� ����
	// => ���� �ڵ�. �Լ� ȣ���� ����Ǹ� ���ڷ� ���� ��ü�� ��� �ı�
	// => ��� : �Լ� ���ڷθ� ����� ��ü�� �ӽð�ü�� �����ϴ� ����
	//           �����ϴ�.
	draw_line(Point(1, 1), Point(10, 10));

	std::cout << "-----" << std::endl;
}






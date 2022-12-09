// 6_emplace
#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int,int)" << std::endl; }

	Point(const Point& pt) : x(pt.x), y(pt.y) { std::cout << "Point(const Point&)" << std::endl; }

	~Point() { std::cout << "~Point()" << std::endl; }
};

int main()
{
	std::vector<Point> v;

	// vector �� ��Ҹ� �ִ� ���
	// 1. Point ��ü�� �����ؼ� push_back ���� �ִ� ���.
	
//	Point pt(1, 2);
//	v.push_back(pt);

	// 2. �ӽð�ü ���·� ����
//	v.push_back( Point(1, 2) );


	// 3. ��ü�� �������� ����, ��ü�� ����� ����
	//    ������ ���ڸ� �������� - emplace_back
	v.emplace_back(1, 2); // ���������� new Point(1,2) �ؼ� ����


//	Point pt(1, 2);
//	v.emplace_back(pt);	// new Point(pt)

	std::cout << "=============" << std::endl;
}
// ���. STL �����̳ʰ�
// 1. primitive Ÿ���� �����ϴ� ��� : std::vector<int>
// => push_back(), emplace_back()  �������� �����ϴ�.

// 2. user define type �� �����͸� �����ϴ� ��� : std::vector<Point*>
// => push_back(), emplace_back()  �������� �����ϴ�.

// 3. user define type �� ��Ÿ������ �����ϴ� ��� : std::vector<Point>
// => v.push_back(Point(1,2));  // ��ü�� ������ ����
// => v.emplace_back(1,2);      // ��ü�� ����� ���� ������ ���� ����



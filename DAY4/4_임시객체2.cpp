#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

// �ٽ� : �ӽð�ü�� Ư¡ ����!
int main()
{
	Point pt(1, 2);
	
	pt.x = 10;			// ok
	Point(1, 2).x = 10;	// error.
						// 1. �ӽð�ü�� ��ȣ�� ���ʿ� �ü�����
						

	Point* p1 = &pt;			// ok 	
	Point* p2 = &Point(1, 2);	// error
								// 2. �ӽð�ü�� �ּҿ����ڷ�	
								//	  �ּҸ� ���Ҽ� ����.
	
	Point& r1 = pt;				// ok
	Point& r2 = Point(1, 2);	// error.
								// 3. �ӽð�ü�� ������ ����ų�� ����.
								// 
	// �߿��� ��Ģ!!! 
	// 4. ��� ������ �ӽð�ü�� ����ų�� �ִ�.
	const Point& cr = Point(1, 2); // ok..
					// => �̰��, �ӽð�ü�� ������ cr�� ��������
					//    ����˴ϴ�.
					//    �̸����� ��ü�� �̸��� ����� �Դϴ�.

	cr.x = 10; // error. cr �� ��� ���� �Դϴ�.
}


// ��ȣ�� ���ʿ� �ü� ���°�!
// const, �ӽð�ü�ε� �ӽð�ü�� ���� rvalue ��� �մϴ�. �׷���
// const, rvalue �� ��ȣ�� ���ʿ� �ü� �����ϴ�. 





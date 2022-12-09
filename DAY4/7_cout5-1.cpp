// 7_cout5-1
// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

// QA1. Point �տ��� ��?? const �� ���̳��� ?
// 1. ���ڸ� ���� p �� �������� �ʰڴٴ� �ǵ�
// 2. �ӽð�ü�� �ްڴٴ� �ǵ�!

// QA2. �׷�!! std::ostream& �տ��� �� const �� ������ ??
// => main �Լ� �Ʒ� �ڵ� ����.. 

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	// ���� os �� cout �� �����Դϴ�.
	os << p.x << ", " << p.y;

	return os;
}

int main()
{
	Point p(1, 2);

	std::cout << p ; // operator<<(cout, p);

	std::cout << Point(1, 2); // �Ǵ°� �������� ?? �ȵǴ°� ��������
								// operator<<(cout, Point(1,2));
	//----------------------------------------------------------

	// std::cout �� ������ ����� ���ô�.
	int n = 10;

	std::ostream&       os1 = std::cout; // ����� �ƴ� ����
	const std::ostream& os2 = std::cout; // ��� ����

	os1 << n; // os1.operator<<(n);   ok...
	os2 << n; // os2.operator<<(n);   error. 
				// => �����ü�� ��� ����Լ� �� ȣ�Ⱑ���մϴ�.
				// => �׷���, operator<<() �Լ��� ��� ��� �Լ��� �ƴմϴ�.
				// => operator<<() �ȿ����� �ڽ��� �����ϴ� ���ۿ� ���� ������
				//    ���۸� �����ϴ� �۾��� �ϰ� �ֽ��ϴ�.

	// ��� : std::cout �� ������ ���鶧, 
	//		 "��� ������ ����� <<  �����ڷ� ����� �ȵ˴ϴ�."
	//		 std::cout �� �Լ� ���ڷ� �޾Ƽ� << �����ڸ� ����Ϸ���
	//       const-reference �� ��������, �׳� referece�� �ϼ���!
}


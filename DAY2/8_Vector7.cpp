#include <iostream>

class Vector
{
	int* ptr;
	int  sz;
public:
	Vector(int s)
	{
		sz = s;
		ptr = new int[sz];
	}
	~Vector() {	delete[] ptr;}

	// ptr �� ������ �ε�. �����ʹ� �迭���� ���� �����մϴ�.
	int& at(int idx) { return ptr[idx]; }
};

int main()
{
	Vector v(4); // �ᱹ "ũ�� ������ ������ 4�� ¥�� �迭"

	v.at(0) = 10;  // v[0] = 10 �� �ǵ�!
	v.at(1) = 20;

//	v[0] = 10; // �̷��� �ǰ� �Ϸ��� "������ ������" ������ ������մϴ�.

	std::cout << v.at(0) << std::endl;

}
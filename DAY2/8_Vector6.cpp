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
	// �����ڿ��� �ڿ�(�޸�)�� �Ҵ��� ���
	// ���������� �Ҹ��ڸ� ���� �޸� ������ �ϸ�˴ϴ�.
	~Vector()
	{
		delete[] ptr;
	}
};

int main()
{
	Vector v(4);

}
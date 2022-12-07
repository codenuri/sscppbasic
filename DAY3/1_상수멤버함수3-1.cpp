// �������Լ�3-1
// ���� �ҽ��� - vector7 �� ������ ������
#include <iostream>

class Vector
{
	int* ptr;
	int  sz;
public:
	Vector(int s, int value = 0)
	{
		sz = s;
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~Vector() { delete[] ptr; }

	int& at(int idx) { return ptr[idx]; }
};

int main()
{
	Vector vv(4, 0);
	const Vector cv(4, 0);

	int n;
	// �Ʒ� 4���� �� ������ ������. 
	//			// ���ϴ� ��		// ���� ����
	vv.at(0) = 10;	// O		// O	
	cv.at(0) = 10;	// X		// X

	n = vv.at(0);	// O		// O
	n = cv.at(0);	// O		// X
	
}
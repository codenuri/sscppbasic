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

	// ������ �̸��� ��� �Լ���
	// �����ü�� �����ü�� �ƴҶ� �ٸ��� �����ϵ��� ����� ��������
	// �ֽ��ϴ�.
	// �� ��쿡 �Ʒ� ó�� 2���� ���� �ٸ��� �����ϸ� �˴ϴ�.
	int& at(int idx)             { return ptr[idx]; }
	const int& at(int idx) const { return ptr[idx]; }
};

int main()
{
	Vector vv(4, 0);			// int vv[4] = {0,0,0,0} �� �ǵ�
	const Vector cv(4, 0);		// const int cv[4] = {0,0,0,0} �� �ǵ�
					
								// vv[0] = 10; // �Ǿ� �մϴ�.
								// cv[0] = 10;	// �ȵǾ� �մϴ�.
		
	int n;

	//			// ���ϴ� ��		// ���� ����
	vv.at(0) = 10;	// O		// O	
	cv.at(0) = 10;	// X		// X

	n = vv.at(0);	// O		// O
	n = cv.at(0);	// O		// O

}
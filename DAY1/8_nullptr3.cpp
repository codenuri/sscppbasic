// 8_nullptr3
#include <iostream>

int main()
{
	// C/C++���� ��� ���� Ÿ���� �ֽ��ϴ�.
	// ���ͷ��� Ÿ���� �ֽ��ϴ�.
	0;		// int
	2;		// int
	3.4;	// double
	3.3f;	// float

	nullptr;// ���ͷ��Դϴ�. std::nullptr_t ��� Ÿ���Դϴ�.
			// std::nullptr_t Ÿ���� ��� ������ �����ͷ� �Ͻ���
			// ����ȯ �ȴٴ� ������ �ֽ��ϴ�.

	std::nullptr_t null = nullptr;	

	int* p1 = nullptr;
	int* p2 = null;
}
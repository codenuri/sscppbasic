#include <iostream>

/*
template<typename T1, typename T2>
decltype(a + b) Add(T1 a, T2 b) // �̷��� ����Ϸ��� decltype()����������ϴ�
{								// �׷��� ��.. �����ϱ�� ?
	return a + b;				// a, b ������ �������� ���Ǵ� ǥ���.
}
*/
// �Ʒ�ó�� C++11 �� ���� ��ȯ ǥ����� ����ϸ� ������ �ƴմϴ�.
// => �̷���쿡 ����Ϸ���, ���� ��ȯ ǥ����� ��������ϴ�.
// => ����, �������ε� ���� ��ȯ ǥ����� �½��ϴ�
template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}


int main()
{
	std::cout << Add(3, 2.1) << std::endl;

//	a = 10; // error. ������ �������� ���!
//	int a;
//	a = 10; // ok. ������ ������ ���!!
}


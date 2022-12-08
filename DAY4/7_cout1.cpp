// 6_cout - 187(136)page
//#include <iostream>

#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// �Ʒ��� ���� �Լ��� ��� ǥ�� Ÿ�Կ� ���ؼ� �����˴ϴ�.
		// => ���� ����� �Ʒ��� ���� "printf" �� �ƴ϶�
		// => �� OS �� system call ���� ����մϴ�.

		void operator<<(int n)    { printf("%d", n); }
		void operator<<(double d) { printf("%lf", d); }
		void operator<<(const char* s) { printf("%s", s); }
	};
	ostream cout;
}
int main()
{
	int    n = 10;
	double d = 3.4;

	std::cout << n; // cout.operator<<(int)    ȣ��
	std::cout << d; // cout.operator<<(double) ȣ��
}



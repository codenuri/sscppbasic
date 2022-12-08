#include <cstdio>

namespace std
{
	class ostream
	{
	public:

		ostream& operator<<(int n) { printf("%d", n); return *this; }
		ostream& operator<<(double d) { printf("%lf", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }
	};
	ostream cout;
}

int main()
{
	// std::endl �� ����(��ü)

	std::cout << std::endl;	// std::endl �� ����Ե�... "�Լ�" �Դϴ�.

	std::endl( std::cout );   // �� �ڵ�� �����մϴ�.
							// ������ ���� �ҽ�����
}



#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// �ٽ� : cout �� << �� ���������� ����ϱ� ����
		//       �ڱ� �ڽ��� ������ ��ȯ�ؾ� �մϴ�.
		ostream& operator<<(int n)			{ printf("%d", n); return *this; }
		ostream& operator<<(double d)		{ printf("%lf", d); return *this;}
		ostream& operator<<(const char* s)	{ printf("%s", s); return *this;}
	};
	ostream cout;
}
int main()
{
	int    n = 10;
	double d = 3.4;
	
	std::cout << n << ", " << d;
}



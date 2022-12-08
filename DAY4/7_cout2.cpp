#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// 핵심 : cout 은 << 을 연속적으로 사용하기 위해
		//       자기 자신을 참조로 반환해야 합니다.
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



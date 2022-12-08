// 6_cout - 187(136)page
//#include <iostream>

#include <cstdio>

namespace std
{
	class ostream
	{
	public:
		// 아래와 같은 함수가 모든 표준 타입에 대해서 제공됩니다.
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

	std::cout << n; // cout.operator<<(int)    호출
	std::cout << d; // cout.operator<<(double) 호출
}



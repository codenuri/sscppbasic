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
	// std::endl 의 원리(정체)

	std::cout << std::endl;	// std::endl 은 놀랍게도... "함수" 입니다.

	std::endl( std::cout );   // 위 코드와 동일합니다.
							// 원리는 다음 소스에서
}



#include <cstdio>

namespace std
{
	class ostream
	{
	public:

		ostream& operator<<(int n) { printf("%d", n); return *this; }
		ostream& operator<<(double d) { printf("%lf", d); return *this; }
		ostream& operator<<(const char* s) { printf("%s", s); return *this; }

		ostream& operator<<( ostream&(*f)(ostream&) )
		{
			f(*this);	// 현재 *this 는 cout 이므로
						// endl(cout) 이 됩니다. 즉, 개행!!
			return *this; 
		}
	};
	ostream cout;

	ostream& endl(ostream& os)
	{
		os << "\n";
		return os;
	}
}

int main()
{
	std::cout << std::endl; // 이 코드를 생각해 봅시다.
							// std::cout.operator<<(endl) 이므로
							// std::cout.operator<<(함수포인터)


	std::endl( std::cout ); // 1. 이코드를 먼저 이해 하세요.
							//    => 결국 개행하는 코드입니다.

	
}



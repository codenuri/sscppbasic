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
			f(*this);	// ���� *this �� cout �̹Ƿ�
						// endl(cout) �� �˴ϴ�. ��, ����!!
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
	std::cout << std::endl; // �� �ڵ带 ������ ���ô�.
							// std::cout.operator<<(endl) �̹Ƿ�
							// std::cout.operator<<(�Լ�������)


	std::endl( std::cout ); // 1. ���ڵ带 ���� ���� �ϼ���.
							//    => �ᱹ �����ϴ� �ڵ��Դϴ�.

	
}



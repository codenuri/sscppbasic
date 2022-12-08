// 6_연산자재정의4
#include <iostream>
#include <string>

/*
std::string operator*(const std::string& s, int n)
{
	// 아래 처럼 구현하는 + 를 할때마나 내부 버퍼가 재할당 됩니다.
	// => 성능저하가 아주 큽니다.
	std::string temp;

	for (int i = 0; i < n; i++)
	{
		temp = temp + s;
	}
	return temp;
}
*/

std::string operator*(const std::string& s, int n)
{
	std::string temp;
	temp.reserve( s.size() * n ); // 내부 메모리를 미리 확보

	for (int i = 0; i < n; i++)
	{
		temp = temp + s;
	}
	return temp;
}

std::string operator*(int n, const std::string& s)
{
	return s * n;
}

int main()
{
	std::string s1 = "*=*";

	std::string s2 = 20 * s1;
	std::string s3 = s1 * 20;	// s1.operator*(int) 가 있으면 되는데
								// => 이미 만들어진 표준 클래스에
								//    멤버 함수 추가 안됨..
								// operator*(string, int )

	std::cout << s2 << std::endl;
}


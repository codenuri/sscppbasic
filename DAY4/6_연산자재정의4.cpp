// 6_연산자재정의4
#include <iostream>
#include <string>

std::string operator*(const std::string& s, int n)
{
	std::string temp;

	for (int i = 0; i < n; i++)
	{
		temp = temp + s;
	}
	return temp;
}

int main()
{
	std::string s1 = "=";

	std::string s2 = s1 * 20;	// s1.operator*(int) 가 있으면 되는데
								// => 이미 만들어진 표준 클래스에
								//    멤버 함수 추가 안됨..
								// operator*(string, int )

	std::cout << s2 << std::endl;
}


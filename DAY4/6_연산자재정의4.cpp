// 6_������������4
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

	std::string s2 = s1 * 20;	// s1.operator*(int) �� ������ �Ǵµ�
								// => �̹� ������� ǥ�� Ŭ������
								//    ��� �Լ� �߰� �ȵ�..
								// operator*(string, int )

	std::cout << s2 << std::endl;
}


// 6_������������4
#include <iostream>
#include <string>

/*
std::string operator*(const std::string& s, int n)
{
	// �Ʒ� ó�� �����ϴ� + �� �Ҷ����� ���� ���۰� ���Ҵ� �˴ϴ�.
	// => �������ϰ� ���� Ů�ϴ�.
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
	temp.reserve( s.size() * n ); // ���� �޸𸮸� �̸� Ȯ��

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
	std::string s3 = s1 * 20;	// s1.operator*(int) �� ������ �Ǵµ�
								// => �̹� ������� ǥ�� Ŭ������
								//    ��� �Լ� �߰� �ȵ�..
								// operator*(string, int )

	std::cout << s2 << std::endl;
}


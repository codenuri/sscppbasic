#include <iostream>
#include <cstring> // C ����� string.h
#include <string>  // C++�� std::string �������

int main()
{
	// C ����� ���ڿ� : char �迭, char ������.
	// char s1[] = "ABCD";
	// char s2[5];

	// C++ ����� ���ڿ� : std::string Ÿ�Ի��
	// => Ŭ���� ��� �������� ������� Ÿ��
	// => ������ ������ ����ϴ� ��ó�� ���������� ��밡��.
	std::string s1 = "ABCD";
	std::string s2;
		
	s2 = s1;	
	if (s2 == s1)	
	{										
	}
	s2 = s1 + s2; // "s1 * 3" �� �ȵ˴ϴ�.
	std::cout << s2 << std::endl;
}
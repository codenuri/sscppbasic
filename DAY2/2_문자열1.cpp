#include <iostream>
#include <cstring>

int main()
{
	// C ����� ���ڿ� : char �迭, char ������.
	char s1[] = "ABCD";
	char s2[5];

	s2 = s1;	// �ǵ� : ���ڿ� ����
				// ������, �迭�� �̸��� �ּ�(���)�̹Ƿ� error
				// strcpy(s2, s1)
	if (s2 == s1)	// �ǵ� : ���ڿ� ��
	{				// ������, �ּҸ� ���ϴ� �ڵ�
					// �׻� false
					// �ǵ���� �Ϸ��� if( strcmp(s2, s1) == 0)
	}
}
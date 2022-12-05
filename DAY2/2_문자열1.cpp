#include <iostream>
#include <cstring>

int main()
{
	// C 언어의 문자열 : char 배열, char 포인터.
	char s1[] = "ABCD";
	char s2[5];

	s2 = s1;	// 의도 : 문자열 복사
				// 하지만, 배열의 이름은 주소(상수)이므로 error
				// strcpy(s2, s1)
	if (s2 == s1)	// 의도 : 문자열 비교
	{				// 하지만, 주소를 비교하는 코드
					// 항상 false
					// 의도대로 하려면 if( strcmp(s2, s1) == 0)
	}
}
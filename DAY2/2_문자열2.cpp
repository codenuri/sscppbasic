#include <iostream>
#include <cstring> // C 언어의 string.h
#include <string>  // C++의 std::string 사용위해

int main()
{
	// C 언어의 문자열 : char 배열, char 포인터.
	// char s1[] = "ABCD";
	// char s2[5];

	// C++ 언어의 문자열 : std::string 타입사용
	// => 클래스 라는 문법으로 만들어진 타입
	// => 정수형 변수를 사용하는 것처럼 직관적으로 사용가능.
	std::string s1 = "ABCD";
	std::string s2;
		
	s2 = s1;	
	if (s2 == s1)	
	{										
	}
	s2 = s1 + s2; // "s1 * 3" 는 안됩니다.
	std::cout << s2 << std::endl;
}
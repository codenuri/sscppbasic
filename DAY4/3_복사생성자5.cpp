#include <iostream>
#include <cstring>
#include <string>

// 복사 생성자는 내부적으로 "자원(메모리할당등)을 직접 관리할때" 만 고려하면 됩니다

std::string s1 = "to be or not to be"; 
	// => string 이 내부적으로 메모리 동적할당해서 문자열 관리

std::string s2 = s1;
	// => string 의 복사 생성자 호출. 깊은 복사로 구현되어 있음.

// 즉, string 자체는 "깊은 복사"로 복잡하게 구현되어 있지만
// 사용자는 그냥. "정수형 변수" 처럼 사용하면 됩니다.

// 사용자가 직접 할당하면 => 해지도 사용자가
// string 생성자가 할당하면 => string 소멸자가 해지해줌.!

class Person
{
	std::string name;
	int   age;
public:
	Person(const std::string& name, int age) : name(name), age(age)
	{
	}
	// 소멸자를 만들지 않으면
	// 1. 컴파일러가 기본 버전 제공
	// 2. 기본 버전안에서 다시 모든 멤버의 소멸자 호출
	//    즉, name의 소멸자호출!!!
	//    => 여기서 name이 가진 문자열 파괴.!
};

int main()
{
	Person p1("kim", 25);

	Person p2 = p1;  
}
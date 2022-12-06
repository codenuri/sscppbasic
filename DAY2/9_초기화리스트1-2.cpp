// 9_초기화리스트1-2
#include <iostream>
#include <string>

class Person1
{
	std::string name;
	int age;
public:
										// 컴파일러가 추가한 코드
	Person1(const std::string& s, int a)// : name() 	
	{
		// 아래 코드는 결국
		// 1. name 의 디폴트 생성자가 호출되고
		// 2. name.operator=(s) 즉, 대입연산자가 호출되어서 값을 넣은것

		name = s;
		age = a;
	}
};

// Person1 p1("kim", 28);

class Person2
{
	std::string name;
	int age;
public:
	// 이코드는 사용자가 초기화 리스트를 통해서
	// name에 대해서 인자가 한개인 생성자를 호출하는 것
	Person2(const std::string& s, int a) : name(s), age(a)
	{
	}
};
// Person2 p2("kim", 28);




int main()
{
	Person1 p1("kim", 28);
	Person2 p2("kim", 28);
}
#include <iostream>
#include <cstring>
#include <string>


class Person
{
	std::string name;
	int   age;
public:
	Person(const std::string& name, int age) : name(name), age(age)
	{
	}
	// 복사 생성자는 사용자가 만들지 않으면 컴파일러가 제공하므로
	// 모든 타입은 기본 적으로 복사 가능합니다.
	// 컴파일러에게 복사 생성자를 만들지 않도록 지시하려면
	// => "함수 삭제" 문법을 사용합니다.
	Person(const Person& other) = delete;
};

int main()
{
	Person p1("kim", 25);

	Person p2 = p1; // error. 복사 생성자가 삭제 되었기 때문에

	Person& r = p1;
}
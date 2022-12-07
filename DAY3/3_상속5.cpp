#include <iostream>
#include <string>

class Person
{
	std::string name;
	int age;
public:
	Person(const std::string& n, int a) : name(n), age(a) 
	{
	}
};
// Person 에서 파생된 Student 클래스 만들어 보세요
// 1. int id 멤버 추가하세요
// 2. 생성자 제공해 보세요
// 3. main 에서 student 객체 생성해 보세요..




int main()
{
//	Person p;	// 이름과 나이가 초기화되지 않은 객체 ??
				// => 안전한 코드를 위해서라면 이런 객체는 만들수 없어야 한다.

	Person p("kim", 28); // ok.. 모든 멤버가 초기화된 객체
}




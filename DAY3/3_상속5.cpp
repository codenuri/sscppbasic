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

class Student : public Person
{
	int id;
public:
//	Student(int n) : id(n) {} // Student(int n) : Person(), id(n) {}
							  // => 컴파일러가 이렇게 변경
							  // => Person() 에서 error. 디폴트생성자없음

	Student(const std::string& name, int age, int id) 
		: Person( name, age ), id(id) 
	{
		// id = id; // 이경우는 모두 인자의 id 이지만
					// 초기화 리스트에서는 컴파일러가 알아서 구별해 줍니다.
	}
};


int main()
{
	Student s("kim", 21, 15);
}


/*
int main()
{
	
//	Person p;	// 이름과 나이가 초기화되지 않은 객체 ??
				// => 안전한 코드를 위해서라면 이런 객체는 만들수 없어야 한다.

	Person p("kim", 28); // ok.. 모든 멤버가 초기화된 객체
}
*/



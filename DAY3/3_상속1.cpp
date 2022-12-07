// 5_상속1.cpp   132page ~
#include <iostream>
#include <string>

// 사람의 공통의 특징을 담은 타입을 먼저 설계
class Person
{
	std::string name;
	int age;
};

// 상속 : 기존 타입을 확장해서 새로운 타입을 만드는 문법
// C++    : class Student : public Person 
// C#     : class Student : Person 
// Python : class Student(Person)
// java   : class Student extends Person

// Person : Base(기반) Class,    Super Class,  Parent Class
// Student: Derived(파생) Class, Sub Class,    Child Class


// Person 을 확장해서 새로운 타입을 설계
class Student : public Person 
{	
	int    id;
};

class Professor : public Person
{
	int    major;
};

int main()
{
	Student s;
	Professor p;
}

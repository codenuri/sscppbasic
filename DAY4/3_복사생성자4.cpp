#include <iostream>
#include <cstring>

class Person
{
	char* name;
	int   age;
public:
	Person(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy_s(name, strlen(s) + 1, s);
	}
	~Person() { delete[] name; }


	Person(const Person& other) : age(other.age)
	{
		// 1. 포인터가 아닌 멤버데이타는 그냥 복사
		// age = other.age;	// 여기서 하지 말고, 초기화 리스트에서 하세요!


		// 2. 포인터 멤버는 주소 자체를 복사 하지 말고
		//    메모리 할당후, 메모리 자체를 복사
		//    "깊은 복사(DeepCopy)" 라고 불리는 기술
		name = new char[strlen(other.name) + 1];
		strcpy_s(name, strlen(other.name) + 1, other.name);)
	}
};

int main()
{
	Person p1("kim", 25);

	Person p2 = p1;  
}
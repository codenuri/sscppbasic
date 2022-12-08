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
		// 1. �����Ͱ� �ƴ� �������Ÿ�� �׳� ����
		// age = other.age;	// ���⼭ ���� ����, �ʱ�ȭ ����Ʈ���� �ϼ���!


		// 2. ������ ����� �ּ� ��ü�� ���� ���� ����
		//    �޸� �Ҵ���, �޸� ��ü�� ����
		//    "���� ����(DeepCopy)" ��� �Ҹ��� ���
		name = new char[strlen(other.name) + 1];
		strcpy_s(name, strlen(other.name) + 1, other.name);)
	}
};

int main()
{
	Person p1("kim", 25);

	Person p2 = p1;  
}
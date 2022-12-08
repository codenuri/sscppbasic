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
	// ���� �����ڴ� ����ڰ� ������ ������ �����Ϸ��� �����ϹǷ�
	// ��� Ÿ���� �⺻ ������ ���� �����մϴ�.
	// �����Ϸ����� ���� �����ڸ� ������ �ʵ��� �����Ϸ���
	// => "�Լ� ����" ������ ����մϴ�.
	Person(const Person& other) = delete;
};

int main()
{
	Person p1("kim", 25);

	Person p2 = p1; // error. ���� �����ڰ� ���� �Ǿ��� ������

	Person& r = p1;
}
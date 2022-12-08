#include <iostream>
#include <cstring>
#include <string>

// ���� �����ڴ� ���������� "�ڿ�(�޸��Ҵ��)�� ���� �����Ҷ�" �� ����ϸ� �˴ϴ�

std::string s1 = "to be or not to be"; 
	// => string �� ���������� �޸� �����Ҵ��ؼ� ���ڿ� ����

std::string s2 = s1;
	// => string �� ���� ������ ȣ��. ���� ����� �����Ǿ� ����.

// ��, string ��ü�� "���� ����"�� �����ϰ� �����Ǿ� ������
// ����ڴ� �׳�. "������ ����" ó�� ����ϸ� �˴ϴ�.

// ����ڰ� ���� �Ҵ��ϸ� => ������ ����ڰ�
// string �����ڰ� �Ҵ��ϸ� => string �Ҹ��ڰ� ��������.!

class Person
{
	std::string name;
	int   age;
public:
	Person(const std::string& name, int age) : name(name), age(age)
	{
	}
	// �Ҹ��ڸ� ������ ������
	// 1. �����Ϸ��� �⺻ ���� ����
	// 2. �⺻ �����ȿ��� �ٽ� ��� ����� �Ҹ��� ȣ��
	//    ��, name�� �Ҹ���ȣ��!!!
	//    => ���⼭ name�� ���� ���ڿ� �ı�.!
};

int main()
{
	Person p1("kim", 25);

	Person p2 = p1;  
}
// 9_�ʱ�ȭ����Ʈ1-2
#include <iostream>
#include <string>

class Person1
{
	std::string name;
	int age;
public:
										// �����Ϸ��� �߰��� �ڵ�
	Person1(const std::string& s, int a)// : name() 	
	{
		// �Ʒ� �ڵ�� �ᱹ
		// 1. name �� ����Ʈ �����ڰ� ȣ��ǰ�
		// 2. name.operator=(s) ��, ���Կ����ڰ� ȣ��Ǿ ���� ������

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
	// ���ڵ�� ����ڰ� �ʱ�ȭ ����Ʈ�� ���ؼ�
	// name�� ���ؼ� ���ڰ� �Ѱ��� �����ڸ� ȣ���ϴ� ��
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
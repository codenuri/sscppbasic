// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
	
public:
	void init(const std::string& s, int a)
	{
		name = s;
		age = a;
	}
	// ������
	// => Ŭ���� �̸��� ������ �̸��� �Լ�
	// => ��ȯ Ÿ���� ������ ����, ��ȯ���� ����.
	// => ��ü�� �����ϸ� �ڵ����� ȣ��ȴ�.
	// => ��ü �ʱ�ȭ�� ���� ���Ǵ� �Լ�
	Person(const std::string& s, int a)
	{
		name = s;
		age = a;
	}
};
int main()
{
	// ����ü �� ���� �Ʒ�ó�� �ʱ�ȭ �ϴ� ����
	// ��� ����� public �� �������� �����մϴ�.
	// Person p = { "kim", 28 };

	// Person p;
	// p.init("kim", 28);

	Person p("kim", 28); // �� ���� �����ڰ� �ڵ����� ȣ��!!

}




// 4_����������1 - 74page
#include <iostream>
#include <string>

// ���α׷�����!! ����� �ٷ�� �ڵ带 �ۼ��ؾ� �Ѵ�.
// "���"�̶�� Ÿ���� ���� ��������.

struct Person
{
private:
	std::string name;
	int  age;		

public:
	void set_age(int a)
	{
		age = a;
	}
};
int main()
{
	Person p;

//	p.age = -10; // ����ڰ� �Ǽ��ؼ�, 
				 // ���Ǽ��迡 �����Ҽ� ���� �Ҿ����� ��ü ź��!
				 // age �� private ������ �ִٸ� ����!!
	p.set_age(-10);

				 
}

// 5_������1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// �����ڴ� ���ڰ� �־ �ǰ� ��� �˴ϴ�.
	// => 2�� �̻� ����� �ֽ��ϴ�.
	// => ��ü�� �����Ҷ� ȣ��˴ϴ�.
	Person(const std::string& n, int a)
	{
		std::cout << "���� 2�� ������ ȣ���" << std::endl;
		name = n;
		age = a;
	}	
	Person()
	{
		std::cout << "���� 0�� ������ ȣ���" << std::endl;
		name = "unknown";
		age = 0;
	}
	// �Ҹ��� : "~Ŭ�����̸�" ����� �Լ�
	//			��ȯ���� ���ڰ� ����. ���� �Ѱ��� ����� �ִ�.
	//		    ��ü�� �ı� �ɶ� ȣ��.
	~Person() { std::cout << "�Ҹ���" << std::endl; }
	
	// �Ҹ��ڴ� ���� ? �� ���峪�� ?
	// => �ʿ� ������ �����ʿ� �����ϴ�.
	// => �ʿ� �� ��츸 ���弼��!!
	// => Vector ���� ����.. 


};
int main()
{
	Person p1("kim", 28); 
	Person p2;

} //<== p2, p1 �ı�. �Ҹ��� ȣ���




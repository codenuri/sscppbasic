#include <iostream>

class Car
{
	int color;
	int speed;
	static int cnt; // private �̹Ƿ�.. ��� �Լ��� ���� �����մϴ�.
public:	
	Car() { ++cnt; }
	~Car() { --cnt; }

//	int get_count() { return cnt; }
			// => non-static ��� �Լ�
			// => ȣ���Ϸ��� �ݵ�� ��ü�� �ʿ� �մϴ�.

	static int get_count() { return cnt; }
			// => static ��� �Լ� 
			// => ��ü ���� ȣ�� ����
			// => "Car::get_count()" �� ȣ��
};
int Car::cnt = 0;	// private �� �־ �ܺ� ����� �ʱ�ȭ�� �����մϴ�.

int main()
{
	std::cout << Car::get_count() << std::endl;  // 0

	Car c1;
	Car c2;

	std::cout << c1.get_count() << std::endl; // 2
}

// static member data
//	=> ��� ��ü�� �����ϴ� ��� ����Ÿ
//  => ��ü�� ũ�⿡�� ���Ե��� ����
//  => ���� �����ڸ� ����Ҽ� �ִ� "��������" ����


// static member function
//	=> ��ü ���� ȣ�Ⱑ���� ��� �Լ�
//	=> "Ŭ�����̸�::�Լ��̸�()" ���� ȣ��
//  => "private"�� ���� ������ �Ϲ� �Լ� ����
// 
// ���� : �Ϲ� ��� �Լ��� �ݵ�� ��ü�� �����ؾ߸� ȣ�Ⱑ���ϴ�.
// Car c;
// c.Go();


#include <iostream>
#include <string>

// struct vs class
// struct : ���� �����ڸ� ǥ������ ������ ����Ʈ�� public
// class  : ���� �����ڸ� ǥ������ ������ ����Ʈ�� private

// C++ ������ �� �������� �ֽ��ϴ�
// ������, C#, java, swift ���� ��κ��� ��ü���� ����
// struct �� class �� �������� �� Ů�ϴ�.!!

//struct Person
class  Person
{
//private:
	std::string name;
	int  age;

public:
	void set_age(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}
	int get_age() { return age; }
};
int main()
{
	Person p;

	p.set_age(-10);

}

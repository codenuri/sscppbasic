#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
// ��ü���� ���α׷��� :	��� ���� ��ü�̴�.!!
//						���α׷��� �⺻ ������ �Լ��� �ƴ� Ŭ����
//						�ʿ��� Ÿ���� ���� ���� �Ѵ�.

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& title, int id)
		: title(title), id(id) {}

	std::string get_title() const { return title; }

	// �޴� ���ý� ȣ��Ǵ� �Լ�
	void command()
	{
		std::cout << get_title() << " �޴��� ������" << std::endl;
		_getch(); // ��� ����
	}
};

int main()
{
	// �޴��� 3�� �ʿ��ϸ� �Ʒ�ó�� 3���� ��ü�� �����մϴ�.
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	MenuItem m3("�쵿", 13);

	m1.command(); // �޴� ����
}


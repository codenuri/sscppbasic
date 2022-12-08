#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& title, int id)
		: title(title), id(id) {}

	std::string get_title() const { return title; }

	void command()
	{
		std::cout << get_title() << " �޴��� ������" << std::endl;
		_getch(); 
	}
};

// �������� �޴� �������� �����ϴ� PopupMenu Ŭ����
class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& title) : title(title) {}

	void add_menu(MenuItem* p) { v.push_back(p); }


	void command()
	{
		while (1)
		{
			system("cls");

			int sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i+1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". ����" << std::endl;

			std::cout << "�޴��� �����ϼ��� >> ";
		
			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) // ����޴� ����
				break;

			if (cmd < 1 || cmd > sz + 1) // �߸��� �Է�
				continue;

			v[cmd - 1]->command(); // ���õ� �޴� ����!!
		}



	}
};





int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	MenuItem m3("�쵿", 13);
	
	PopupMenu pm("������ �޴�");

	pm.add_menu(&m1);
	pm.add_menu(&m2);
	pm.add_menu(&m3);

	pm.command(); // �˾��޴��� �����ϴ� ��쿡 �ؾ� ������ �����غ�����
				  // 1. ���
				  // 2. ���
				  // 3. �쵿
				  // 4. ����
				  // �޴��� �����ϼ��� >> 
}


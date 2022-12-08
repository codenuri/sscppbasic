#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// ��� �޴��� ������ ��� Ŭ����
class BaseMenu
{	
	std::string title;
public:
	BaseMenu(const std::string& title) : title(title) {}
	virtual ~BaseMenu() {}

	std::string get_title() const { return title; }

	// ��� �޴��� ���õɼ� �ִ�.
	// ��� �Ļ� Ŭ������ ���Ѿ��ϴ� ��Ģ�� �ݵ�� ��� Ŭ��������
	// ����
	virtual void command() = 0;
};



class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& title, int id)
		: BaseMenu(title), id(id) {}

	void command()
	{
		std::cout << get_title() << " �޴��� ������" << std::endl;
		_getch();
	}
};


class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& title) : BaseMenu(title) {}

	void add_menu(BaseMenu* p) { v.push_back(p); }


	void command()
	{
		while (1)
		{
			system("cls");

			int sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". ����" << std::endl;

			std::cout << "�޴��� �����ϼ��� >> ";

			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) 
				break;

			if (cmd < 1 || cmd > sz + 1)
				continue;

			v[cmd - 1]->command(); 
		}
	}
};





int main()
{
	MenuItem k1("��ġ���",   11);
	MenuItem k2("�Ұ����", 12);
	MenuItem k3("��ä���",  13);

	PopupMenu kimbam("����");
	kimbam.add_menu(&k1);
	kimbam.add_menu(&k2);
	kimbam.add_menu(&k3);
	
	MenuItem m1("���", 21);
	MenuItem m2("�쵿", 22);

	PopupMenu pm("������ �޴�");

	pm.add_menu(&kimbam); // �ٽ�!!!???
	pm.add_menu(&m1);
	pm.add_menu(&m2);

	pm.command();
}


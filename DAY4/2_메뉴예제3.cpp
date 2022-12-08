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
		std::cout << get_title() << " ¸Þ´º¸¦ ¼±ÅÃÇÔ" << std::endl;
		_getch();
	}
};


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
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". Á¾·á" << std::endl;

			std::cout << "¸Þ´º¸¦ ¼±ÅÃÇÏ¼¼¿ä >> ";

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
	MenuItem k1("ÂüÄ¡±è¹ä",   11);
	MenuItem k2("¼Ò°í±â±è¹ä", 12);
	MenuItem k3("¾ßÃ¤±è¹ä",  13);

	PopupMenu kimbam("±è¹ä·ù");
	kimbam.add_menu(&k1);
	kimbam.add_menu(&k2);
	kimbam.add_menu(&k3);
	
	MenuItem m1("¶ó¸é", 21);
	MenuItem m2("¿ìµ¿", 22);

	PopupMenu pm("¿À´ÃÀÇ ¸Þ´º");

	pm.add_menu(&kimbam); // ÇÙ½É!!!
	pm.add_menu(&m2);
	pm.add_menu(&m3);

	pm.command();
}


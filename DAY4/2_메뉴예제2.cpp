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
		std::cout << get_title() << " 메뉴를 선택함" << std::endl;
		_getch(); 
	}
};

// 여러개의 메뉴 아이템을 관리하는 PopupMenu 클래스
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
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴를 선택하세요 >> ";
		
			int cmd;
			std::cin >> cmd;

			if (cmd == sz + 1) // 종료메뉴 선택
				break;

			if (cmd < 1 || cmd > sz + 1) // 잘못된 입력
				continue;

			v[cmd - 1]->command(); // 선택된 메뉴 실행!!
		}



	}
};





int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	MenuItem m3("우동", 13);
	
	PopupMenu pm("오늘의 메뉴");

	pm.add_menu(&m1);
	pm.add_menu(&m2);
	pm.add_menu(&m3);

	pm.command(); // 팝업메뉴를 선택하는 경우에 해야 할일을 생각해보세요
				  // 1. 김밥
				  // 2. 라면
				  // 3. 우동
				  // 4. 종료
				  // 메뉴를 선택하세요 >> 
}


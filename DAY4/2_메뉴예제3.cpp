#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// 모든 메뉴의 공통의 기반 클래스
class BaseMenu
{	
	std::string title;
public:
	BaseMenu(const std::string& title) : title(title) {}
	virtual ~BaseMenu() {}

	std::string get_title() const { return title; }

	// 모든 메뉴는 선택될수 있다.
	// 모든 파생 클래스가 지켜야하는 규칙은 반드시 기반 클래스에서
	// 제공
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
		std::cout << get_title() << " 메뉴를 선택함" << std::endl;
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
			std::cout << sz + 1 << ". 종료" << std::endl;

			std::cout << "메뉴를 선택하세요 >> ";

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
	MenuItem k1("참치김밥",   11);
	MenuItem k2("소고기김밥", 12);
	MenuItem k3("야채김밥",  13);

	PopupMenu kimbam("김밥류");
	kimbam.add_menu(&k1);
	kimbam.add_menu(&k2);
	kimbam.add_menu(&k3);
	
	MenuItem m1("라면", 21);
	MenuItem m2("우동", 22);

	PopupMenu pm("오늘의 메뉴");

	pm.add_menu(&kimbam); // 핵심!!!???
	pm.add_menu(&m1);
	pm.add_menu(&m2);

	pm.command();
}
// 객체지향 언어에서 프로그램이란 ?
// 1. 객체를 생성하고
// 2. 객체간의 관계를 설정하고  (pm.add_menu(&m1))
// 3. 객체간에 메세지를 주고 받는 과정이다.( 서로의 멤버 함수를 호출한다는것)
// 4. 프로그램의 기본 단위는 클래스 이다.

// C++ 언어를 배우는 순서
// 기본 문법 + 객체지향 의 기본 개념을 배우고 : 1일차 ~ 지금 까지...
//	 => 1. 다양한 객체지향 디자인 기술을 익힌다... "디자인 패턴 과정"
// 
//   => 2. 표준 라이브러리인 STL 사용법을 배운다 : 내일(5일차), STL 과정
// 
//   => 3. 좀더 복잡한 다양한 C++ 문법이 배운다 : 오늘 계속 이야기, modern c++, 
//												template, C++중고급 과정
//			

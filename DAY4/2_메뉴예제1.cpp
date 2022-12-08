#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
// 객체지향 프로그래밍 :	모든 것은 객체이다.!!
//						프로그램의 기본 단위는 함수가 아닌 클래스
//						필요한 타입을 먼저 설계 한다.

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& title, int id)
		: title(title), id(id) {}

	std::string get_title() const { return title; }

	// 메뉴 선택시 호출되는 함수
	void command()
	{
		std::cout << get_title() << " 메뉴를 선택함" << std::endl;
		_getch(); // 잠시 멈춤
	}
};

int main()
{
	// 메뉴가 3개 필요하면 아래처럼 3개의 객체를 생성합니다.
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	MenuItem m3("우동", 13);

	m1.command(); // 메뉴 선택
}


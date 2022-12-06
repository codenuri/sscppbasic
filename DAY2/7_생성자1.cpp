// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
	
public:
	void init(const std::string& s, int a)
	{
		name = s;
		age = a;
	}
	// 생성자
	// => 클래스 이름과 동일한 이름의 함수
	// => 반환 타입을 가질수 없고, 반환값도 없다.
	// => 객체를 생성하면 자동으로 호출된다.
	// => 객체 초기화를 위해 사용되는 함수
	Person(const std::string& s, int a)
	{
		name = s;
		age = a;
	}
};
int main()
{
	// 구조체 와 같이 아래처럼 초기화 하는 것은
	// 모든 멤버가 public 에 있을때만 가능합니다.
	// Person p = { "kim", 28 };

	// Person p;
	// p.init("kim", 28);

	Person p("kim", 28); // 이 순간 생성자가 자동으로 호출!!

}




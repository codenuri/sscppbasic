// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 프로그램에서!! 사람을 다루는 코드를 작성해야 한다.
// "사람"이라는 타입을 먼저 설계하자.

struct Person
{
private:
	std::string name;
	int  age;		

public:
	void set_age(int a)
	{
		age = a;
	}
};
int main()
{
	Person p;

//	p.age = -10; // 사용자가 실수해서, 
				 // 현실세계에 존재할수 없는 불안정한 객체 탄생!
				 // age 가 private 영역에 있다면 에러!!
	p.set_age(-10);

				 
}

// 4_접근지정자1 - 74page
#include <iostream>
#include <string>

// 프로그램에서!! 사람을 다루는 코드를 작성해야 한다.
// "사람"이라는 타입을 먼저 설계하자.


// 캡슐화(encapsulation)
// => 멤버 데이타는 private 영역에 놓아서 외부의 잘못된 사용을 막는다
// => 객체의 상태는 잘정의된 멤버 함수를 통해서만 변경될수 있다.

// 정보은닉 
// => 외부에서는 객체의 상태를 직접 확인할수 없다는 의미!!

// 거의 모든 객체지향 언어가 지원 하는 문법 입니다.
// 단, Python 이 지원하지 않습니다.

struct Person
{
private:
	std::string name;
	int  age;	

public:
	void set_age(int a)
	{
		// 인자값의 유효성을 확인한후, 유효한 경우만 객체의 상태를 변경
		if ( age > 0 && age < 150)
			age = a;
	}
	int get_age() { return age; }
};
int main()
{
	Person p;

//	p.age = -10; // 사용자가 실수해서, 
				 // 현실세계에 존재할수 없는 불안정한 객체 탄생!
				 // age 가 private 영역에 있다면 에러!!
	p.set_age(-10);

	int n = p.age; // error.!! get_age()를 제공해서 읽어야 합니다.
}

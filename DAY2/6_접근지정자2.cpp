#include <iostream>
#include <string>

// struct vs class
// struct : 접근 지정자를 표기하지 않으면 디폴트로 public
// class  : 접근 지정자를 표기하지 않으면 디폴트로 private

// C++ 에서는 위 차이점만 있습니다
// 하지만, C#, java, swift 등의 대부분의 객체지향 언어는
// struct 와 class 의 차이점이 꽤 큽니다.!!

//struct Person
class  Person
{
//private:
	std::string name;
	int  age;

public:
	void set_age(int a)
	{
		if (age > 0 && age < 150)
			age = a;
	}
	int get_age() { return age; }
};
int main()
{
	Person p;

	p.set_age(-10);

}

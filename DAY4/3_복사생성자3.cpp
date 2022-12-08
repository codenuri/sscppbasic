#include <iostream>
#include <cstring>

// 왜!!! 복사 생성자가 중요한가요 ?
// 컴파일러가 자동으로 만들어주는 것을 사용하면 되지 않나요 ??
// => 대부분의 경우는 컴파일러 제공 버전을 사용하세요.!!
// 그런데, 아래 같은 경우는 주의 하세요.!!

// 핵심 : 클래스 내부에 포인터 멤버가 있고, 메모리를 동적할당하는 코드가 있다면
//        컴파일러가 제공하는 디폴트 복사 생성자는
//	      메모리 자체를 복사 하지 않고, 주소만 복사 하는 얕은 복사(Shallow Copy)
//        현상을 발생 시킵니다.
//		  반드시 사용자가 복사 생성자를 제공해서 이문제를 해결해야 합니다.
//		  해결은 "4번소스에서"


class Person
{
	char* name;
	int   age;
public:
	Person(const char* s, int a) : age(a)
	{
		name = new char[strlen(s) + 1];
		strcpy_s(name, strlen(s) + 1, s);
	}
	~Person() { delete[] name; }
};

int main()
{
	Person p1("kim", 25);

	Person p2 = p1;  // 핵심!!!
					 // 이 코드 때문에 
					 // runtime- error
					// 컴파일러가 제공하는 디폴트 복사 생성자 사용
					// 얕은 복사 현상 발생

					
}
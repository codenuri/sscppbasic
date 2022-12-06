// 5_생성자1.cpp
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 생성자는 인자가 있어도 되고 없어도 됩니다.
	// => 2개 이상 만들수 있습니다.
	// => 객체를 생성할때 호출됩니다.
	Person(const std::string& n, int a)
	{
		std::cout << "인자 2개 생성자 호출됨" << std::endl;
		name = n;
		age = a;
	}	
	Person()
	{
		std::cout << "인자 0개 생성자 호출됨" << std::endl;
		name = "unknown";
		age = 0;
	}
	// 소멸자 : "~클래스이름" 모양의 함수
	//			반환값과 인자가 없다. 오직 한개만 만들수 있다.
	//		    객체가 파괴 될때 호출.
	~Person() { std::cout << "소멸자" << std::endl; }
	
	// 소멸자는 언제 ? 왜 만드나요 ?
	// => 필요 없으면 만들필요 없습니다.
	// => 필요 한 경우만 만드세요!!
	// => Vector 예제 참고.. 


};
int main()
{
	Person p1("kim", 28); 
	Person p2;

} //<== p2, p1 파괴. 소멸자 호출됨




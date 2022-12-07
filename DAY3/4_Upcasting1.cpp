// 6_Upcasting1.cpp      140 page ~
#include <vector>

class Animal
{
public:	
	int age;
};
class Dog : public Animal
{
public:	
	int color;
};

int main()
{
	Dog     dog;

	Dog*    p1 = &dog;	// ok
	int*    p2 = &dog;	// error

	// 핵심 1. 기반 클래스 포인터로 파생 클래스 주소를 담을수 있다
	// => "Upcasting" 이라고 합니다.
	Animal* p3 = &dog;	// ok..
	Animal& r  = dog;   // ok

	// 핵심 2. 기반 클래스 포인터 타입으로 파생 클래스 객체를 가리킬때
	//		   파생 클래스 고유 멤버에는 접근 할수 없습니다.
	p3->age = 10;	// ok
//	p3->color = 10;	// error


	// 핵심 3. 파생 클래스 고유 멤버에 접근하려면 캐스팅이 필요 합니다.
	// => 단, 이경우는 p3가 가리키는 곳이 반드시 Dog 라는 확신이 있을때만
	//    캐스팅해야 합니다.
	static_cast<Dog*>(p3)->color = 10;
}





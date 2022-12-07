// RTTI1.cpp
#include <iostream>

class Animal
{
public:
	virtual void Cry() {}
};

class Dog : public Animal
{
public:
	virtual void Cry() override {}

	void Run() {}
};

void foo(Animal* p)
{
	// 1. foo 는 모든 동물객체의 주소를 받을수 있습니다.
	// 2. p가 Dog 라면 Run 을 호출하고 싶습니다.
	// 3. p 가 실제로 어떤 동물을 가리키는지 조사할수 있어야 합니다

	// 1. typeid() 연산자를 사용하면 type_info 객체의 참조를 얻을수
	//    있습니다.
	const std::type_info& t1 = typeid(*p); // typeid(객체)
	const std::type_info& t2 = typeid(Dog); // typeid(클래스)

	if (t1 == t2)
	{
		std::cout << "p 는 Dog 를 가리킴" << std::endl;
	}

	// 방법 2. 위처럼 하지말고 typeid() 의 반환값을 그냥 비교하면 됩니다
	if (typeid(*p) == typeid(Dog))
	{

		// p가 가리키는 곳이 Dog 라고 p로는 고유 멤버 접근 안됨
		//p->Run(); // error 

		// 캐스팅해서 사용
		Dog* pDog = static_cast<Dog*>(p);
		pDog->Run();
	}

}



int main()
{
	Animal a;
	Dog    d;

	foo(&a);
//	foo(&d);
}
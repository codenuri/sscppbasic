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
	// RTTI1.cpp 처럼 조사 하지 말고, 바로 캐스팅 하기!!

	// static_cast : 컴파일 시간 캐스팅!
	//			     downcast 를 확인할수 없다.

	// dynamic_cast : 실행시간 캐스팅
	//				  p 가 가리키는 곳에 있는 객체를 조사후 캐스팅
	//				  느립니다.! 반드시 필요한 경우아니면 사용하지 마세요
	//Dog* pdog = static_cast<Dog*>(p);

	Dog* pdog = dynamic_cast<Dog*>(p);

	std::cout << pdog << std::endl;	

	if (pdog != nullptr)
		pdog->Run();
}

int main()
{
	Animal a;
	Dog    d;

	foo(&a);
	foo(&d);
}
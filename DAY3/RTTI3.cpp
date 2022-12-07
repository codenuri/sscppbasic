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
/*
template<typename T1, typename T2>
T1* mydynamic_cast(T2* p)
{
	// 타입이 맞는지 확인하고
	if (typeid(T1) == typeid(*p))
	{
		// 맞으면 캐스팅해서 반환
		return static_cast<T1>(p);		
	}
	return nullptr;
}
*/


void foo(Animal* p)
{
	// 1. 상속 관계의 타입은 언제나 static_cast 가 가능합니다.
	// => 컴파일 에러는 나오지 않습니다.
	// => 그런데, p가 가리키는 것이 Dog 가 아니라도 주소가 나옵니다.
	//    절대 사용하면 안됩니다.
	Dog* pdog1 = static_cast<Dog*>(p);

	// 2. p 가 정말 Dog 인지 확인후 캐스팅 하려면 dynamic_cast 해야 합니다.
	// => p가 가리키는 객체가 Dog 가 아니면 0입니다.
	Dog* pdog2 = dynamic_cast<Dog*>(p);

	// 3. dynamic_cast 의 원리는 간단합니다.
	Dog* pdog3 = mydynamic_cast<Dog*>(p);
}

int main()
{
	Animal a;
	Dog    d;
	foo(&a);
	foo(&d);
}

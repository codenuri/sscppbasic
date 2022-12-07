#include <iostream>
//가상함수 원리   164page ~


//=========================================================
// 컴파일러는 클래스에 가상함수가 있으면 아래 처럼 코드를 생성/추가합니다.

// 1. Animal 의 모든 가상함수의 주소와 RTTI 정보를 담은 배열을 생성합니다.
// => 가상함수 테이블이라고 합니다.
void* Animal_vtable[] = { RTTI정보, &Animal::Cry, &Animal::Run };

class Animal
{
	void* vtptr = Animal_vtable; // 가상함수 테이블의 주소를 보관할
									// 멤버를 추가
	int age;
public: 
	virtual void Cry() {}
	virtual void Run() {}
};
//--------------------
void* Dog_vtable[] = { RTTI정보, &Dog::Cry, &Animal::Run };

class Dog : public Animal
{
	vtptr = Dog_vtable;
	int color;
public:	
	virtual void Cry() {}
};

int main()
{
	Animal a;
	Dog    d;

	Animal* p = &d;

	p->Cry();  
}






// std::cout << sizeof(a) << std::endl;
// std::cout << sizeof(d) << std::endl;



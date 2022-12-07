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
	Animal a1, a2;
	Dog    d;

	Animal* p = &d;

	p->Cry();  
	// 1. Cry 가 가상인지 아닌지 조사후
	// 2. 가상이 아니면 무조건 포인터 타입인 Animal Cry 호출
	// 3. 가상함수 라면 아래 의미의 기계어 코드 생성
	// ===> "p->vtptr[1]()"
}

// 가상함수의 오버헤드
// 1. 클래스당 한개의 가상함수 테이블!
//   => 가상함수의 갯수가 많으면 메모리 오버헤드가 크다.
// 
// 2. 객체마다 포인터 멤버 한개씩 추가

// 3. 함수 호출시, 메모리에 보관된 주소를 꺼내서 호출
// => 간접 호출되므로 약간의 지연

// 4. 가상함수는 인라인함수가 될 수 없다!













// std::cout << sizeof(a) << std::endl;
// std::cout << sizeof(d) << std::endl;



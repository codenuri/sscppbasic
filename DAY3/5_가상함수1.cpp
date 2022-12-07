// 7_가상함수1  144 page ~
#include <iostream>

class Animal
{
public:
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } // 1
};

class Dog : public Animal
{
public:
	// override    : 기반 클래스 함수를 파생클래스가 다시 만드는 것
	// overloading : square(int), square(double) 

	void Cry1() { std::cout << "Dog Cry" << std::endl; }  // 2
};

int main()
{
	Animal a; a.Cry1(); // Animal Cry1
	Dog    d; d.Cry1(); // Dog    Cry1

	Animal* p = &d;		
	
	// 실제 객체는 Dog 인데, 포인터 타입은 Animal 일때
	// 아래 코드는 어느 함수를 호출할까요 ?
	// => 실제 객체가 Dog 이므로 "Dog Cry1" 가호출되는것이
	//    논리적으로는 맞습니다.
	// C++, C# : Animal Cry1
	// java, python, kotlin, swift : Dog Cry1

//	if (사용자입력 == 1) p = &a;

	// p가 가리키는 객체는 실행시간에 변경될수 있습니다.
	// 컴파일러는 p의 타입만 알뿐 어떤 객체를 가리키는지는 알수 없습니다.
	p->Cry1();
}

// 161page

// p->Cry1() 을 어떤 함수로 연결할것인가 ?
// => "함수 바인딩 ( function binding )" 

// 1. static binding  
//    => 컴파일 시간에 컴파일러가 어느 함수를 호출할지를 결정
//	  => 컴파일 시간에는 p가 가리키는 객체가 어떤 객체인지는 알수 없다.
//    => 단지 p의 타입이 "Animal*" 라는 것만 알수 있다.
//    => 그래서, "Animal Cry1" 호출


// 2. dynamic binding  
//	=> 컴파일 시간에는 p가 가리키는 곳을 조사하는 기계어 코드 생성.
//  => 실행시, p가 가리키는 메모리를 조사후에 함수 호출 결정.
//  => 실제 객체가 Dog 였다면 "Dog Cry1" 을 호출!



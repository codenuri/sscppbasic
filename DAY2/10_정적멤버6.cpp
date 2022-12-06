#include <iostream>

// Car.h
class Car
{
	int color;
	int speed;
	static int cnt; 
public:
	Car();
	~Car();
	static int get_count();
};

// Car.cpp
#include "Car.h"

// 핵심 1. 클래스를 선언과 구현으로 분리시 static 멤버 데이타의 외부 선언은
//         소스 파일(Car.cpp)에 있어야 합니다.
int Car::cnt = 0;	

Car::Car() { ++cnt; }
Car::~Car() { --cnt; }

// 핵심 2. static 멤버 함수를 클래스 외부 구현시 "static" 을 표기하면 안됩니다.
int Car::get_count() 
{
	eturn cnt; 
}




int main()
{
	std::cout << Car::get_count() << std::endl;  

	Car c1;
	Car c2;

	std::cout << c1.get_count() << std::endl; // 2
}


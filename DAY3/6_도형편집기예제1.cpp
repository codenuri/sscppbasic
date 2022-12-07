// 예제1     152 page
#include <iostream>
#include <vector>

// 파워 포인트 같은 프로그램을 생각해 봅시다.

// 1. 모든 도형을 타입으로 설계하면 편리합니다.

// 2. 공통의 기반 클래스 있다면 모든 도형을 하나의 컨테이너에
//    같이 보관할수 있다.

class Shape
{
public:
};

class Rect : public Shape
{
public:
	void draw() { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "draw circle" << std::endl; }
};

int main()
{
//	std::vector<Rect*>   v1;
//	std::vector<Circle*> v2;

	std::vector<Shape*> v;	// 모든 도형을 보관할수 있다.
}




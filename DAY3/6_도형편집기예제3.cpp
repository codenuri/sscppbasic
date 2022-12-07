// 예제1     152 page
#include <iostream>
#include <vector>

// 3. 파생클래스(모든 도형)의 공통의 특징은 반드시 기반 클래스에도 있어야 
//    한다. 문법은 아니지만.. 디자인의 원칙
//    그래야, 기반 클래스 포인터로 파생 클래스를 묶어서 관리할때
//    해당 기능을 사용할수 있다.

// 4. 기반 클래스 함수 중에서 파생 클래스가 재정의 하게 되는 멤버 함수는
//	  반드시 가상함수로 해야 한다.

class Shape
{
	int color;
public:
	// 아래 2개의 멤버 함수는 파생 클래스가 재정의 할 필요 없습니다.
	// 가상함수로 할 필요 없습니다.
	int get_color() const { return color; }
	void set_color(int c) { color = c; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }
};

class Rect : public Shape
{
public:
	virtual void draw() override  { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
	virtual void draw() override { std::cout << "draw circle" << std::endl; }
};

int main()
{
	std::vector<Shape*> v;

	while (true)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) 	v.push_back(new Rect);
		else if (cmd == 2)	v.push_back(new Circle);
		else if (cmd == 9)
		{
			for (auto p : v)  
				p->draw();	  
		}
	}
}



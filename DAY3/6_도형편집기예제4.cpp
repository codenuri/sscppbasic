// 예제1     152 page
#include <iostream>
#include <vector>

class Shape
{
	int color;
public:

	int get_color() const { return color; }
	void set_color(int c) { color = c; }

	virtual void draw() { std::cout << "draw shape" << std::endl; }
};

class Rect : public Shape
{
public:
	virtual void draw() override { std::cout << "draw rect" << std::endl; }
};

class Circle : public Shape
{
public:
	virtual void draw() override { std::cout << "draw circle" << std::endl; }
};

class Triangle : public Shape
{
public:
	virtual void draw() override { std::cout << "draw Triangle" << std::endl; }
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
				p->draw();	// 다형성(polymorphism)
							// 동일한 표현식이 상황(실제 객체) 에 따라 다르게 동작 하는것


			// 객체 지향 언어의 3가지 특징 : 캡슐화, 상속, 다형성
		}
	}
}

// OCP 
// 기능 확장에 열려 있고(Open, 클래스가 나중에 추가 되어도 )
// 코드 수정에는 닫혀 있어야(Close, 기존 코드는 수정되지 않도록)
// 한다는 이론(Principle)

// Open Close Principle( 개방 폐쇄의 법칙 )

// => 다형성은 OCP 를 만족하는 아주 좋은 코드 입니다.



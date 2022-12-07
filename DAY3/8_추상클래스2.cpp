#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	int get_color() const { return color; }
	void set_color(int c) { color = c; }

	// 가상함수 : 파생 클래스가 반드시 override 할 필요는 없다.
	//           override 하지 않으면 기본 구현 제공해 준다는 것!!

	// 순수 가상함수 : 파생 클래스가 반드시 override 해야 한다는 것.

	// "도형" 은 추상적인 개념입니다. "도형"을 그릴수는 없습니다.
	//virtual void draw() { std::cout << "draw shape" << std::endl; }
	//virtual void draw() { std::cout << "그릴수없는 도형입니다" << std::endl; }

	virtual void draw() = 0;
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
				p->draw();	
		}
	}
}



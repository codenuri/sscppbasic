#include <iostream>
#include <vector>

class Shape
{
	int color; 
public:
	Shape(int c) : color(c) {}
	
	virtual ~Shape() {}		// Shape 는 기반 클래스 이므로 소멸자를
							// 반드시 가상으로해야 합니다.

	void setColor(int c) { color = c; }
	int getColor() const { return color; }

	virtual void Draw() = 0;
};



class Rect : public Shape
{
	int xpos, ypos, width, height;
public:
	Rect(int x, int y, int w, int h, int c)
		: Shape(c), xpos(x), ypos(y), width(w), height(h) {}

	void Draw() override { std::cout << "Draw Rect" << std::endl; }
};
class Circle : public Shape
{
	int xpos, ypos, radius;
public:
	Circle(int x, int y, int r, int c)
		: Shape(c), xpos(x), ypos(y), radius(r) {}

	void Draw() override { std::cout << "Draw Circle" << std::endl; }
};
int main()
{
	std::vector<Shape*> v;

	while (1)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) v.push_back(new Rect(0, 0, 10, 10, 5));
		else if (cmd == 2) v.push_back(new Circle(0, 0, 10, 5));
		else if (cmd == 9)
		{
			for (auto p : v)
				p->Draw();
		}
	}
}




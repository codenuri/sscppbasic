#include <iostream>
#include <vector>

class Shape
{
	int color;
public:
	int get_color() const { return color; }
	void set_color(int c) { color = c; }

	// �����Լ� : �Ļ� Ŭ������ �ݵ�� override �� �ʿ�� ����.
	//           override ���� ������ �⺻ ���� ������ �شٴ� ��!!

	// ���� �����Լ� : �Ļ� Ŭ������ �ݵ�� override �ؾ� �Ѵٴ� ��.

	// "����" �� �߻����� �����Դϴ�. "����"�� �׸����� �����ϴ�.
	//virtual void draw() { std::cout << "draw shape" << std::endl; }
	//virtual void draw() { std::cout << "�׸������� �����Դϴ�" << std::endl; }

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



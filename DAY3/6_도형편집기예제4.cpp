// ����1     152 page
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
				p->draw();	// ������(polymorphism)
							// ������ ǥ������ ��Ȳ(���� ��ü) �� ���� �ٸ��� ���� �ϴ°�


			// ��ü ���� ����� 3���� Ư¡ : ĸ��ȭ, ���, ������
		}
	}
}

// OCP 
// ��� Ȯ�忡 ���� �ְ�(Open, Ŭ������ ���߿� �߰� �Ǿ )
// �ڵ� �������� ���� �־��(Close, ���� �ڵ�� �������� �ʵ���)
// �Ѵٴ� �̷�(Principle)

// Open Close Principle( ���� ����� ��Ģ )

// => �������� OCP �� �����ϴ� ���� ���� �ڵ� �Դϴ�.



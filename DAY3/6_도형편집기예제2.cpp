// ����1     152 page
#include <iostream>
#include <vector>

// 3. 

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
	std::vector<Shape*> v;

	while (true)
	{
		int cmd;
		std::cin >> cmd;

		if (cmd == 1)
		{
			v.push_back(new Rect);
		}
		else if (cmd == 2)
		{
			v.push_back(new Circle);
		}
		else if (cmd == 9)
		{
			// �����̳ʿ� �ִ� ��� ������ �׸���.
			for (auto p : v)
				p->draw();
		}
	}
}
// �� �ڵ�� ��?? �����ϱ��?
// �ذ�å�� ����� ?



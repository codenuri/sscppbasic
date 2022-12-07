// 예제1     152 page
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
			// 컨테이너에 있는 모든 도형을 그린다.
			for (auto p : v)
				p->draw();
		}
	}
}
// 위 코드는 왜?? 에러일까요?
// 해결책은 뭘까요 ?



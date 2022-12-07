// ����1     152 page
#include <iostream>
#include <vector>

// 3. �Ļ�Ŭ����(��� ����)�� ������ Ư¡�� �ݵ�� ��� Ŭ�������� �־�� 
//    �Ѵ�. ������ �ƴ�����.. �������� ��Ģ
//    �׷���, ��� Ŭ���� �����ͷ� �Ļ� Ŭ������ ��� �����Ҷ�
//    �ش� ����� ����Ҽ� �ִ�.

// 4. ��� Ŭ���� �Լ� �߿��� �Ļ� Ŭ������ ������ �ϰ� �Ǵ� ��� �Լ���
//	  �ݵ�� �����Լ��� �ؾ� �Ѵ�.

class Shape
{
	int color;
public:
	// �Ʒ� 2���� ��� �Լ��� �Ļ� Ŭ������ ������ �� �ʿ� �����ϴ�.
	// �����Լ��� �� �ʿ� �����ϴ�.
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



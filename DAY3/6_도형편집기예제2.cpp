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

		if      (cmd == 1) 	v.push_back(new Rect);
		else if (cmd == 2)	v.push_back(new Circle);
		else if (cmd == 9)
		{
			// 컨테이너에 있는 모든 도형을 그린다.
			for (auto p : v)  // 여기서 p 는 "Shape*" 입니다.
				p->draw();	  // error.  Shape 에는 draw 함수가 없습니다.
		}
	}
}
// 위 코드는 왜?? 에러일까요?
// => 실제 객체는 Rect, Circle 이지만
// => p의 타입은 Shape* 인데 Shape 에는 draw() 가 없다.
// 
// 해결책은 뭘까요 ?
// 1. p 를 Rect* 나 Circle* 로 캐스팅해서 사용하자
// 2. Shape 에도  draw() 만들자 => 정답.. 



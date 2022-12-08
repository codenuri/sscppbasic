
#include <iostream>

class Point
{
public:
	int x, y;

	Point(int a, int b) { std::cout << "Point()" << std::endl; }
	~Point() { std::cout << "~Point()" << std::endl; }
};

//======================================
// 함수 인자로 
// non-const reference : 인자로 받는 객체의 상태를 변경하겠다는 의도
//						 => 임시객체를 받을수 없다.
void reset(Point& pt) { pt.x = 0; pt.y = 0; }

// const-reference : 인자로 받은 객체를 읽기만 하겠다는 의도
//						=> 임시객체도 받을수 있게 해야 한다.
//						=> 그래서, const reference 는 임시객체를 받을수 있다.
void draw_line(const Point& pt1, const Point& pt2) {}

int main()
{
//	reset( Point(10, 20) );
//	draw_line(Point(0, 0), Point(10, 10));

	// 왜 임시객체를 사용하나요 ?
	// draw_line 함수를 사용해서 (1,1)~(10,10) 사이의 선을 그려 봅시다.

	// 방법 1. 객체를 만들어서 전달
//	Point p1(1, 1);
//	Point p2(10, 10);

//	draw_line(p1, p2);	// p1, p2 는 이함수의 인자로만 사용할건데...
						// 이 함수의 호출이 종료되어도 파괴 되지 않습니다.
						// 이름 있는 객체이므로 {}을 벗어나야 파괴 됩니다.

	// 방법 2. 함수 인자를 임시객체 형태로 전달
	// => 좋은 코드. 함수 호출이 종료되면 인자로 사용된 객체를 즉시 파괴
	// => 결론 : 함수 인자로만 사용할 객체는 임시객체로 전달하는 것이
	//           좋습니다.
	draw_line(Point(1, 1), Point(10, 10));

	std::cout << "-----" << std::endl;
}






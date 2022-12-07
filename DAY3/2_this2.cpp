#include <iostream>

// this
// 1. 멤버 함수의 호출 원리이므로 학습차원에서 중요합니다.
// 2. 아래와 같이 활용되기도 합니다.

class Point
{
	int x, y;
public:
	void set(int x, int y) 
	{
	//	x = x;	// 2개 모두 인자의 x 입니다.
	//	y = y;

		// 이름이 충돌난 경우, 멤버를 가리키고 싶을때
		// this를 사용하면 됩니다.
		this->x = x;
		this->y = y;
	}

	Point* foo() { return this; }
	Point goo() { return *this; }
};
int main()
{
	Point p1;
	p1.set(10, 20);

	// 멤버 함수가 this를 반환하면 함수호출을 연속적으로 할수 있습니다.
	p1.foo()->foo()->foo()->foo();
	p1.goo().goo().goo().goo();

	// 위 코드가 결국 cout 이 실행되는 원리 입니다.
	std::cout << "A" << "B" << "C";
//	std::cout.operator<<("A").operator<<("B").operator<<("C");
}

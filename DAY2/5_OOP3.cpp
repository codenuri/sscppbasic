#include <iostream>

// 객체 지향 프로그래밍 : 필요한 데이타 타입을 먼저 설계 하자.

// 타입을 설계할때 "상태를 나타내는 데이타와 상태를 가지고 연산을 수행하는
// 함수를 묶어서 설계 한다."
// C 구조체 : 함수를 포함할수 없다
// C++구조체 : 함수를 포함할수 있다.

// 함수를 구조체 안에 넣어서 얻는 장점은 뭔가요 ?
// => 다양한 객체지향 문법을 통해서 
//    보다 안전하고 사용하기 쉬운 타입을 설계 할수 있습니다.

struct Rect
{
	// 멤버 데이타(필드)
	int left;
	int top;
	int right;
	int bottom;

	// 멤버 함수(메소드)
	int getArea()
	{
		return (right - left) * (bottom - top);
	}
	void draw()
	{
		std::cout << "draw rect" << std::endl;
	}
};
int main()
{
	Rect rc = { 1, 1, 10, 10 };

//	int n1 = getRectArea(rc);	// 함수가 중심.
//	drawRect(rc);

	int n2 = rc.getArea();		// rc가 중심!
	rc.draw();
}


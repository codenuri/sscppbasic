#include <iostream>

class Point
{
public:
	int x, y;
	Point(int a, int b) : x(a), y(b) {}

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
};
int main()
{
	// 실행 결과를 보고 "문법을 예측" 하지 마세요
	// 반드시 "표준 문서"나 cppreference.com 에서 확인하세요.!!
	//Point(1, 2).x = 10; // error 가 나오는 것을 보고
						// "임시객체는 상수"라고 예상하는 경우가 너무 많습니다.

	Point(1, 2).set(10, 20); // ok.. 
							// 임시객체는 멤버 함수를 통해서 상태 변경은
							// 가능합니다.
							// 상수 아닙니다.
							// 단지, 문법상 왼쪽에 올수 없을 뿐 입니다.

	// 그런데.. 왜.. 임시객체를 상태를 변경하나요 ?
	// => 고급 기법에서 가끔 사용합니다.
}
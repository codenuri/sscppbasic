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
	Point(1, 2).x = 10; // error 가 나오는 것을 보고
						// "임시객체는 상수"라고 예상하는 경우가 너무 많습니다.
}
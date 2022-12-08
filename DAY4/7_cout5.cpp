// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}
};

int main()
{
	Point p(1, 2);

	// cout 장점 : "%d" 등이 없어도 << 뒤에 있는 요소를 출력!!
	// 그렇다면, 사용자 정의 타입의 객체는 ??

	std::cout << p;  // cout.operator<<(Point) 가 필요
					// 1. Point 는 사용자가 만든 타입이므로 위 함수는 없다
					// 2. 이미 만들어진 C++ 표준의 ostream 클래스에
					//    멤버함수를 추가할수도 없다.
					
					// 해결책 : 멤버 함수가 아닌 일반 함수로 만들면된다.
					// => operator<<(cout, p)

					
}



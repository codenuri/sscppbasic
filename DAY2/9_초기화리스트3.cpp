#include <iostream>

class Point
{
public:
	int x, y;
//	int y, x;

	// 초기화 리스트는 "대입"이 아닌 "초기화" 입니다.
	// 코드의 순서대로 실행되지 않고, 멤버가 놓인 순서로 실행됩니다.
	//         (2)   (1)	<<== 실행순서 
	Point() : y(0), x(y)
	{
	}
};
int main()
{
	Point pt;

	// 아래코드 결과 예측해 보세요.
	std::cout << pt.x << std::endl; // ?
	std::cout << pt.y << std::endl; // ?
}





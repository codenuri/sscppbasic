// 6_초기화리스트1    85page ~
#include <iostream>

// 생성자에서 멤버 데이타를 초기화하는 2가지 방법
// 
// 1.{} 안에서 대입으로 값 넣기 <<=== bad
// 2. 초기화 리스트 사용    <<======= good 

class Point
{
	int x, y;
public:
	// 멤버 초기화 리스트(member initalizer list)
	// => 생성자 () 뒤에 : 을 적고 멤버를 초기화 하는 것. 
	Point(int a  = 0, int b = 0) : x(a), y(b)  // 방법 2. good!!
	{
		// 방법 1. bad
		x = a; 
		y = b; 
	}
};
int main()
{
	Point pt(0, 0);
}





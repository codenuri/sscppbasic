#include <iostream>

struct Point
{
	int x, y;
};
int main()
{
	// 20page - 중요한 변화.!
	int n1 = 10;
	int x1[3] = { 1,2,3 };
	Point p1 = { 1,2 };

	// C++11 부터 모든 종류의 변수는 "동일한 방법 {}" 로 초기화
	// 할수 있습니다.
	// "일관된 초기화(uniform initialization)"
	int n2    = { 10 };
	int x2[3] = { 1,2,3 };
	Point p2  = { 1,2 };

	// = 이 없어도 됩니다.
	int n3 { 10 };
	int x3[3] { 1,2,3 };
	Point p3 { 1,2 };

	// direct initialization(직접 초기화) : = 없는 경우
	// copy   initialization(복사 초기화) : = 있는 경우
	//		=> 거의 유사하지만, 약간의 차이점이 있습니다.
	//===================================================

	int n4 = 3.4;	// 경고는 나올수 있지만, 에러는 아님.
					// 대부분의 언어는 에러입니다.
					// 허용하는 것이 잘못된 문법!!

	int n5 = { 3.4 };// error

	char c1{ 500 };	// error
}




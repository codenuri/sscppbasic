// 3_변수1
#include <iostream>

// C++ 은 C언어의 변수 관련 문법을 더욱 발전시켰습니다.
// 교재 18 page ~

struct Point 
{
	// C++11 부터 구조체 멤버를 초기화 할수 있습니다. 
	int x = 0, y = 0; 
};

int main()
{
	int n1 = 0b1; // C++11 부터 2진수 표기법 가능합니다.

	int n2 = 1'000'000; // C++11 부터 자릿수 표기법 가능합니다.
						// 정확한 의미 : 리터럴 사이의 ' 는 컴파일러가
						//				무시하게 됩니다.

	struct Point p1;	// C언어는 구조체 변수 만들때 struct 필요
	Point p2;			// C++언어는 "struct" 필요 없습니다.

}

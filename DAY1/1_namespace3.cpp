// 1_namespace3.cpp - 9page 내용
// 
#include <algorithm>
using namespace std;

// 핵심 : 모든 C++ 표준(함수, 클래스)은 "std::" 라는 이름 공간안에
//       있습니다.

int count = 10;

int main()
{
	int ret = count; // 왜?? 에러일까요 ?

	int n1 = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
	int n2 = std::min(3, 2); // ok. 
}

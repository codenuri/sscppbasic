// 10 page 내용입니다.

//#include <stdio.h>  // C 언어 헤더. printf 가 전역에만 있습니다.
#include <cstdio>	  // C++에서 새롭게 만든 C용헤더
					  // 모든 표준함수가 "전역 + std" 안에 있습니다.

// 핵심 : C++ 은 모든 C언어 헤더를 C++용으로 새롭게 제공합니다.
// => 단, 기존 헤더도 계속 사용가능합니다.

// C헤더				C++ 헤더(c가 붙고, .h 가 없습니다)
// <xxxx.h>	====>	<cxxxx>
// <stdlib.h> ==>   <cstdlib>
// <math.h>   ==>   <cmath>
// <string.h> ==>   <cstring>

int main()
{
	// printf 는 "C언어" 표준 이지만 "C++"언어 표준이기도 합니다.
	printf("hello\n"); // ok

	std::printf("hello\n"); // ??
}
// 원리
/*
int printf(const char* fmt, ...) {} // 구현은 전역에 있고

namespace std
{
	using printf; // 이렇게 하면
}
printf("AA"); // 이렇게 해도 되고
std::printf("AA"); // 이렇게 해도 됩니다.
*/
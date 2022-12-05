// 2_namespace.cpp - 교재 7 page
#include <stdio.h>
// 1. 프로그램을 기능 별로 분리할수 있다
// 2. 함수 이름 충돌등도 막을수 있다.
// 3. C++ 뿐 아니라 거의 모든 객체지향 언어가 제공하는 문법

namespace Audio
{
	void init() { printf("Audio init\n"); }
}

namespace Video
{
	void init() { printf("Video init\n"); }

	// Video 관련 모든 것(함수, 구조체, 전역변수등)을
	// 이 공간에서 만들게 된다.
}

int main()
{
	Audio::init();
	Video::init();
}

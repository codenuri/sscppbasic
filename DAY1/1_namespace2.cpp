#include <stdio.h>

// 핵심 : namespace 에 있는 요소를 접근하는 3가지 방법

namespace Audio
{
	void init() { printf("Audio init\n"); }
}
namespace Video
{
	void init() { printf("Video init\n"); }
}

// 전역(global) 이름 공간 : 어떠한 namespace 에도 포함되지 않은공간
void init() { printf("global init\n"); }

using Video::init; // global using 선언

int main()
{
	// 1. 완전한 이름을 사용(qualified name)
	Video::init();

	// 2. using 선언(declaration)
	//using Video::init; // Video::init 은 Video 없이 사용가능..!
	init();
	::init(); // 항상 global init
			  // :: : scope resolution 연산자

	// 3. using 지시어(directive)
	using namespace Video;// Video 의 모든 요소를 Video 없이..
	init();
}

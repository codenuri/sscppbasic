#include <iostream>

// Point 타입을 사용할때는 "헤더만 include" 하면 됩니다.
// 단, VC에서는 Point.cpp 가 빌드 포함되어 있어야 합니다.
#include "Point.h"

int main()
{
	Point pt(1, 2);
}

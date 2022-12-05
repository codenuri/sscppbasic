// 8_nullptr3
#include <iostream>

int main()
{
	// C/C++에서 모든 것은 타입이 있습니다.
	// 리터럴도 타입이 있습니다.
	0;		// int
	2;		// int
	3.4;	// double
	3.3f;	// float

	nullptr;// 리터럴입니다. std::nullptr_t 라는 타입입니다.
			// std::nullptr_t 타입은 모든 종류의 포인터로 암시적
			// 형변환 된다는 문법이 있습니다.

	std::nullptr_t null = nullptr;	

	int* p1 = nullptr;
	int* p2 = null;
}
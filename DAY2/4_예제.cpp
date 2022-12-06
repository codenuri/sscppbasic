#include <iostream>

// Swap를 만들어 봅시다.
// 1. C 버전
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 2. C++ 버전
// => 1. 포인터 대신 reference 사용
// => 2. 함수 대신 함수 템플릿으로
// => 3. inline 함수로!
// => 4. namespace 안에 제공
namespace Utils
{
	template<typename T>
	inline void Swap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}
}

int main()
{
	int x = 3, y = 2;
//	Swap(&x, &y);
//	Utils::Swap(x, y);
	std::swap(x, y); // 이미 C++ 표준에 swap 이 있습니다.
					 // <algorithm> 헤더!

	std::cout << x << std::endl;
	std::cout << y << std::endl;
}




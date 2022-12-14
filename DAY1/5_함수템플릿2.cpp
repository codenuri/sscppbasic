#include <iostream>

template<typename T1, typename T2>
? Add(T1 a, T2 b)		// ? 를 어떻게 표기해야 할까요 ???
{
	return a + b;
}

int main()
{
	// 아래 표기법이 정확한 표기법이지만
	std::cout << Add<int, double>(3,  2.1) << std::endl;

	// T1=int 즉, 전달한 타입사용
	// T2는 2.1을 보고 추론! (double)
	std::cout << Add<int>(3, 2.1) << std::endl;

	// 타입 인자는 생략가능합니다.
	std::cout << Add(3, 2.1) << std::endl;
}


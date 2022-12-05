#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1,   2 )  << std::endl;
	std::cout << Add(3.1, 2.1) << std::endl;

	std::cout << Add(3, 2.1) << std::endl; // error
								// 함수 인자로 T의 타입을 결정할수 없다
								// error

	std::cout << Add<double>(3, 2.1) << std::endl; // ok..
}


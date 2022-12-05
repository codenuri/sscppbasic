#include <iostream>

template<typename T>
T Add(T a, T b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1,   2 )    << std::endl;
	std::cout << Add(3.1, 2.1) << std::endl;
}


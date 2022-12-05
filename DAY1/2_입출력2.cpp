// 3_입출력2.cpp - 15 page아래 부분
#include <iostream>
#include <iomanip> // 입출력 조정자 함수를 사용하기 위해!
					// std::setw(), std::setfill()등.. 
int main()
{
	int n = 10;
	std::cout << n << std::endl; // 10진수

	std::cout << std::hex << n << std::endl; // 16진수 출력

	std::cout << std::dec << n << std::endl; // 

	std::cout << std::setw(10) << n << std::endl; // 

	std::cout << std::setw(10) << std::setfill('#') << n << std::endl; // 


	double d = 3.141592;

	std::cout << std::setprecision(10);

	std::cout << d << std::endl; // 몇자리까지 나오는지 확인해 보세요

}
// cppreference.com 에서 "std::setw" 검색해보세요..
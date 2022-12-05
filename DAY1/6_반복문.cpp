﻿// 8_반복문 38 page
#include <iostream>

int main()
{
	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 전통적인 for 문
	for (int i = 0; i < 10; i++)
		std::cout << x[i] << std::endl;


	// C++11 의 새로운 for 문
	for (int n : x)
		std::cout << n << std::endl;
}

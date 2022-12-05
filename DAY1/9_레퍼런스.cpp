// 1_레퍼런스.cpp    41 page

#include <iostream>

int main()
{
	int n1 = 10;

	int* p1 = &n1;

	int& r1 = n1;	// 변수 n1에
					// 별명을 r1으로 부여하는 것

	r1 = 30;	// n1 = 30 과 동일

	std::cout << n1  << std::endl; // 30
		
	// 아래 2줄의 결과는 동일한 주소 입니다.
	std::cout << &r1 << std::endl;
	std::cout << &n1 << std::endl;


	// 주의 사항
	// 1. & 연산자의 의미
	// 2. 포인터 변수는 주소로 초기화 하고, 
	//    reference 는 변수 자체로 초기화 합니다.
	int* p2 = &n1; // 변수의 주소를 구하는 "주소연산자"
	int& r2 = n1;  // reference(참조) 변수를 만드는 연산자

	// 3. 포인터는 초기화 되지 않거나, nullptr 일수 있지만
	//    reference 는 반드시 유효한 변수를 가리켜야 합니다
	int* p3;			// ok
	int* p4 = nullptr;	//
	int& r3;			// error
	int& r4 = n1;		// ok

	// => 따라서, reference 는 반드시 가리키는 대상체가 존재합니다.
	// => 그래서, 포인터 보다 "안전"하다 라고도 합니다.
}




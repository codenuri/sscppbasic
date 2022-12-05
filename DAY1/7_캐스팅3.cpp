#include <iostream>

// reinterpret_cast 
// 1. 서로 다른 타입의 주소 캐스팅
// 2. 정수 <=> 주소 간의 캐스팅

int main()
{
	double d = 3.4;
	int    n =  d; 

	// 
	double* p = reinterpret_cast<double*>(&n); // ok

	*p = 3.4;	// 절대 이렇게 사용하지는 마세요..
				// 4 바이트 메모리를 8바이트로 접근!!
				// 즉, 캐스팅은 허용하지만, 
				// 조심히, 사용하는 것은 개발자 책임

	int* p1 = 1000;// error. 1000 번지를 강제로!!
	int* p2 = (int*)1000; // ok. C 캐스팅은 항상 성공.
	int* p3 = static_cast<int*>(1000); // error


	// 정수 => 주소
	int* p4 = reinterpret_cast<int*>(1000); // ok

	// 주소 => 정수
	int n4 = reinterpret_cast<int>(p4);


	// reinterpret_cast 는 위 2가지 용도로만 사용해야 합니다
	double d2 = 3.4;
	int n2 = reinterpret_cast<int>(d2); // error
						// reinterpret_cast 의 용도가 아닙니다.
}


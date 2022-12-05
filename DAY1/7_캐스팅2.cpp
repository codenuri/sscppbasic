#include <iostream>

// C++ 에서는 (C++98) 4가지의 캐스팅을 제공합니다.

// static_cast, reinterpret_cast
// const_cast,  dynamic_cast


// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//			표준 타입끼리의 값 캐스팅. 
//          void*=> 다른 타입*,
//			상속관계의 캐스팅 등.



int main()
{
	double d = 3.4;

	// 표준 타입의 값 캐스팅도 허용
	int    n = d;	// ok.. 하지만 경고
	int    n1 = static_cast<int>(d);// ok.. 경고도 없음.

	


	// 1. void* => int*
	int* p1 = (int*)malloc(100);  // ok. C 스타일 캐스팅

	int* p2 = static_cast<int*>( malloc(100) ); // ok
				// => 프로그램을 작성할때 꼭 필요한 캐스팅이다.


	//-----------------------------------------------
	// int* => double* 
	double* p3 = (double*)&n; // ok.. C 스타일 캐스팅은 항상 성공
	
	double* p4 = static_cast<double*>( &n );
					// error. 논리적이지 않다..!
					// 혹시, 실수 아닌가 ?? 
	
	double* p5 = reinterpret_cast<double*>(&n);
					// ok.. 서로 다른 타입이 주소를 위한 캐스팅


}


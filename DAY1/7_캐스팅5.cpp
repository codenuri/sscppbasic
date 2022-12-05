int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	double* p = (double*)&c; // C 스타일


	// 위코드를 C++ 스타일 캐스팅으로 해보세요

//	double* p1 = static_cast<double*>(&c); // error

//	double* p1 = reinterpret_cast<double*>(&c); // error
									// => 상수성 제거안됨

//	double* p1 = const_cast<double*>(&c); // error
									// => 다른 타입이라서 안됨

	double* p1 = reinterpret_cast<double*>( 
						const_cast<int*>(&c) ); // ok

		// const int* => int* 로 변환후
		// int* => double* 로 변환한것!

	double* p2 = const_cast<double*>(
				reinterpret_cast<const double*>(&c));
		// const int* => const double*
		// const double* => doule* 로 변경

}






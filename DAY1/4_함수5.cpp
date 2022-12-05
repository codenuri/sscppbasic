﻿// 6_함수5
// C++ 함수 특징 5. 함수 삭제. C++11에서 추가된 기능
// 35 page

// 최대 공약수를 구하는 함수를 생각해 봅시다.
int gcd(int a, int b)
{
	return 0;
}

//double gcd(double a, double b); // 핵심. 선언부만 제공합니다.
								// gcd(실수, 실수)로 사용하면 
								// 구현이 없다는 링크 에러
								// => 의도적으로 gcd(실수)를 사용할수
								//    없게하는 것!

//double gcd(double a, double b) = delete; // C++11 의 함수 삭제라는 문법
							// 삭제된 함수를 사용하면 "컴파일에러 발생"

// 아래 처럼 하면
// 1. gcd(int, int) 는 위에 있으므로 사용시 에러 아닙니다.
// 2. 나머지 모든 버전은 삭제됩니다.
template<typename T> T gcd(T, T) = delete;

// 그런데, 함수 삭제 문법은 "일반 함수" 보다는
// 컴파일러가 자동으로 만드는 클래스의 멤버 함수를 삭제할때 주로 사용합니다.

int main()
{
	gcd(1, 2);

	gcd(2.3, 3.2);  // error를 나오게 하고 싶습니다..
}



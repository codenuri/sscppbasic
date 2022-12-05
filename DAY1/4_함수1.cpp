// 6_함수1.cpp  28 page ~
// C++함수의 특징 1. 디폴트 파라미터

// 주의사항
// 1. 함수를 선언과 구현으로 분리할때는 선언에만 표기해야 합니다.
// 2. 마지막 인자부터 차례대로만 지정할수 있습니다.

void f1(int a,     int b = 0, int c) {}		// error
void f2(int a = 0, int b,     int c = 0) {}	// error


void foo(int a = 0, int b = 0, int c = 0);

int main()
{
	foo(1, 2, 3);
	foo(1, 2);		// 1, 2, 0
	foo(1);			// 1, 0, 0
	foo();			// 0, 0, 0
}

void foo(int a /*= 0*/, int b /*= 0*/, int c /*= 0*/)
{
}

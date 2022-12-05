#include <cstdio>
// 4_함수2 

// 함수 오버로딩 : 인자의 갯수나 타입이 다르면 
//					동일이름의 함수를 여러개 만들수 있다.
//				 => 거의 모든 객체지향 언어가 지원 합니다.
//				 => C, Python 이 이 문법을 지원하지 않습니다.
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}

int main()
{
	square(3);
	square(3.4);
}

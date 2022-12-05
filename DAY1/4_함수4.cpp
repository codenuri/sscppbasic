// 4_함수4
// C++ 함수의 특징 4. 함수 템플릿 => 아주 중요합니다.!!!
/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/
// 구현이 동일(유사)한 함수가 여러개 필요하면
// 함수를 만들지 말고!!
// 함수를 만드는 "틀(template)" 을 제공합니다.

template<typename T>
T square(T a)
{
	return a * a;
}
int main()
{
	// 함수 템플릿을 사용하는 방법 1. 타입을 명시적으로 전달
//	square<int>(3);	// 1. int square(int) 함수를 생성
					// 2. 이부분은 "call 생성된 함수 주소"로 변경

//	square<double>(3.4);

	// 템플릿의 타입인자는 생략가능합니다.
	// => 이 경우 함수 인자를 보고 컴파일러가 추론합니다.
	square(3);	// 3을 보고 T=int로 추론
	square(3.4);// 3.4를 보고 T=double로 추론

}
// 4_함수6. 후위 반환 타입

// C/C++ 언어에서는 전통적으로 함수 반환 타입을 먼저 표기 합니다.
/*
int square(int a)
{
	return a * a;
}
*/
// 아래 코드가 C++11 부터 나온 "후위 반환 타입(suffix return type)"
// 이라는 문법 입니다.
// swift, rust, python, haskell 등의 언어가 이 방식 입니다.
auto square(int a) -> int
{
	return a * a;
}

int main()
{
	square(3);
}

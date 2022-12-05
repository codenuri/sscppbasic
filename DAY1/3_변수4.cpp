// 21 page ~

int main()
{
	double x[3] = { 1,2,3 };

	// auto : 우변의 표현식을 보고, 컴파일러가 타입을 결정
	//		  컴파일 시간에 결정되는것.
	//		  실행시간 성능저하는 없음
	//		  C++11
	//		  C#, java 등의 대부분의 객체지향 언어가 지원.
	auto n = x[0]; // "double n = x[0]" 로 컴파일 됩니다.

	// n의 타입을 출력하는 코드
	std::cout << typeid(n).name() << std::endl;

	// decltype() : () 안의 타입을 조사해 달라. C++11, 컴파일시간
	decltype(n) d; // double d
}

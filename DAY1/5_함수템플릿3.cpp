#include <iostream>

/*
template<typename T1, typename T2>
decltype(a + b) Add(T1 a, T2 b) // 이렇게 사용하려고 decltype()을만들었습니다
{								// 그런데 왜.. 에러일까요 ?
	return a + b;				// a, b 변수가 선언전에 사용되는 표기법.
}
*/
// 아래처럼 C++11 의 후위 반환 표기법을 사용하면 에러가 아닙니다.
// => 이런경우에 사용하려고, 후위 반환 표기법을 만들었습니다.
// => 또한, 논리적으로도 후위 반환 표기법이 맞습니다
template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}


int main()
{
	std::cout << Add(3, 2.1) << std::endl;

//	a = 10; // error. 변수를 선언전에 사용!
//	int a;
//	a = 10; // ok. 변수를 선언후 사용!!
}


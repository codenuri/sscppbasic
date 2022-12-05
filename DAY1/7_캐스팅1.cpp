// 10_캐스팅1.cpp    48 page
#include <iostream>

// C 스타일 () 캐스팅은 너무 위험합니다.
// => 개발자가 의도한 것인지, 실수인지를 코드를 보고 알수 없습니다.
// => 위험해 보이는 것도, 대부분 캐스팅 됩니다.

/*
int main()
{
	int n = 3;

//	double* p = &n; // Error. 
	double* p = (double*)&n; // ok... 

	*p = 3.4; // 이 코드를 생각해보세요..
}
*/

int main()
{
	const int c = 10;

	int* p = &c; // ??

	*p = 20;

	std::cout << c << std::endl;
	std::cout << *p << std::endl;

}
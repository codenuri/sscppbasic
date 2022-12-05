// 1_레퍼런스2
#include <iostream>
// 43 page
// 함수 인자로서의 포인터 vs reference
// 모두 원본 인자의 값을 수정할수 있다는 점은 동일합니다.
// 하지만, reference 가 사용하기 편리하고, 안전합니다.
// 포인터는 if( p != nullptr ) 의 코드가 필요하지만 reference는 없어도됩니다.

void inc1(int n)  { ++n; }
void inc2(int* p) { ++(*p); }
void inc3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	inc1( a );	// call by value, a증가안됨.
	inc2( &b );	// call by pointer, b증가됨.
	inc3( c );  // call by reference. c증가됨.

	std::cout << a << std::endl; // 1
	std::cout << b << std::endl; // 2
	std::cout << c << std::endl; // 2.
}

#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin(); 
	auto p2 = s.end();   // 마지막 다음 요소 입니다.

	*p1 = 10; 
//	*p2 = 10;	// runtime error
				// .end()로 꺼낸 반복자는 * 연산하면 안됩니다.

	// ==, != 연산을 사용해서 끝에 도달했는지 확인하는 
	// 용도로만 사용해야 합니다.
	while ( p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}
// end는 size 기준. 
// 참고 : capacity 는 vector 만 있씁니다.
//       list와 deque 은 없습니다.
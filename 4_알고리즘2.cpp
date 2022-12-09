// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
// STL 은 객체지향 라이브러리가 아닙니다.
//        Generic(일반화) 라이브러리 라고 합니다.
//        => 템플릿으로해서 한개의 함수 템플릿으로 여러개 컨테이너에 적용
//			 가능하다는 의미.

// C++ : 멀티 패러다임 언어!!
//       C의 모든 것 지원 + 객체지향 지원 + Generic 지원

int main()
{
	std::vector<int> v = { 1,2,3,4,3,6,7,3,9,10 };

	// 뒤집는 알고리즘은 std::reverse() 입니다.
	// => 대부분의 알고리즘은 인자로 반복자를 받게 됩니다.
	// => v.begin(), v.end() 
	std::reverse(v.begin(), v.end());

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// 조건에 맞는 요소를 변경하는 알고리즘은 std::replace() 입니다.
	// v 에서 3을 -1로 변경해 보세요.  
	std::replace(v.begin(), v.end(), 3, -1);
	

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;
}
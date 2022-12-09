// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너에서 3을 찾고 싶다.
	// 방법 1. 멤버함수 find를 제공하자.
	// 장점 : 사용하기 쉽다.
	// 단점 : 모든 컨테이너에 find 가 필요 하다.
//	s.find(3);
//	v.find(3);
	
	// STL의 생각!
	// => 선형 검색 방법은 동일한데, 왜.. 모든 컨테이너에 각각
	//    만드는가!!!
	// => 그냥, 일반함수 한개로 모든 컨테이너에 사용할수 있게 하자.
	// => 한개의 find 로 vector와 list에서 선형검색 가능!

	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);
	

}
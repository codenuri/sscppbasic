// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // STL 알고리즘을 사용하기 위한 헤더.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::find(first, last, 3) : [first, last) 사이 검색
	// 반환 값은 "반복자" 입니다.
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// find 는 검색 실패시 2번째 인자로 전달된 반복자를 반환 합니다.
	// 아래 처럼 조사해야 합니다.

	if (ret1 == v.end())
	{
		std::cout << "검색 실패" << std::endl;
	}
	else
	{
		std::cout << "검색 성공 : " << *ret1 << std::endl;
	}

}

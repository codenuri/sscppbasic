// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	//std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = c.begin(); 

	std::cout << *p1 << std::endl;

//	c.resize(20);	// 컨테이너 키우기.
					// c 가 vector 라면 기존에 꺼낸 반복자는 무효화 됩니다.
					// c 가 list 라면 반복자는 무효화 되지 않습니다

	c.resize(5);	// 컨테이너 줄이기
					// c가 vector 라도 미리 꺼낸 반복자는 무효화 되지 않습니다.

	std::cout << *p1 << std::endl;

//	c.shrink_to_fit(); // vector 의 경우
						// 이 순간은 반복자가 무효화 됩니다.

}

// 이미 꺼낸 반복자는
// 컨테이너의 다양한 멤버 함수 호출에 따라서.. 무효화 될 가능성이 있습니다.
// 주의 해서 사용하세요

// cppreference.com 에서 std::vector 검색해 보세요
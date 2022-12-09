// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

//	int s[10] = {1,2,3,4,5,6,7,8,9,10}; // raw array

	// 1. 반복자의 정확한 타입
	// => C++98 시절에는 이렇게 직접 코드를 작성했어야 합니다.
	// => 단점 : 컨테이너 변경시 타입도 변경되어야 합니다.
	// std::list<int>::iterator p1 = s.begin();


	// 2. 반복자 타입을 알아 두세요
	// 그런데, 사용하지는 말고, 아래 처럼 auto 로 하세요..
	// auto p1 = s.begin();	


	// 3. 멤버 함수 begin() vs 일반 함수 begin()
	auto p1 = s.begin();		// s 가 raw array 라면 에러!
	auto p2 = std::begin(s);	// s 가 raw array 라도 ok.. 


	auto sz1 = s.size();
	auto sz2 = std::size(s); // raw array 도 가능
}




/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator {};
	};
}
*/
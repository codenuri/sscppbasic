#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

// unordered_set

int main()
{
//	std::set<int> s;			// tree
	std::unordered_set<int> s;	// hash

	s.insert(50);
	s.insert(30);
	s.insert(70);	// set 이라면
					// => 70을 root 와 비교해서 왼쪽/오른쪽으로 배치
					// unordered_set 이면
					// => hash 함수에서 70을 보내서 저장할 index를 얻은후에
					//    저장

	auto ret = s.find(70);

	// tree : 검색도 빠르고, 데이타도 정렬된 상태로 보관되어 있다.
	// hash : 검색이 아주 빠르고, 데이타는 정렬되어있지 않다.

}
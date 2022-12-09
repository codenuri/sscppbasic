#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

int main()
{
	std::set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(70);

	// 핵심 1. set 은 insert(emplace)로만 넣을수 있습니다.
	// s.push_back(10);  // error


	// 핵심 2. set 의 반복자는 읽기 전용 반복자 입니다.
	auto p1 = s.begin();
	//*p1 = 200;  // error.
				

	// 핵심 3. 컨테이너(자료구조)의 특성에 맞게 사용하세요
	
	// std::find : 선형검색 알고리즘 
	//             => 모든 요소를 순차적으로 이동하면서 검색
	auto ret = std::find(s.begin(), s.end(), 70); // ?

	// std::set을 사용하는 이유를 "선형검색"이 아닌 "이진 검색"을 하기
	// 위해서 입니다. 알고리즘 "std::find" 말고 멤버 함수 find 를 
	// 사용하세요..
	auto ret2 = s.find(70);

	

}
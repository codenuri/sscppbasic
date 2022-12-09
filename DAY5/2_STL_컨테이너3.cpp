#include <iostream>

// STL 에는 5개의 선형 컨테이너가 있습니다.
// C++98 : vector, list, deque
// C++11 : forward_list, array
#include <vector>
#include <list>
#include <deque>

int main()
{
	// 핵심 1. 선형 컨테이너 3개의 메모리 구조.
	std::vector<int> v = { 1,2,3,4,5 }; // 연속된 메모리
										// 요소 순회가 빠르다.
										// 삽입 삭제가 느리다.
										// "캐쉬 적중률이 높다"!

	std::list<int>   s = { 1,2,3,4,5 }; // 모든 요소가 떨어진 메모리
										// 요소 순회가 느리다.
										// 삽입 삭제가 빠르다.										
	
	std::deque<int>  d = { 1,2,3,4,5 }; // 연속된 메모리와 유사

	// 2. 위 3개 컨테이너의 멤버 함수는 이름이 거의 동일 합니다.
	v.push_back(10);
	s.push_back(10);
	d.push_back(10);

	// 특정 함수가 없는 경우는 그 기능은 해당 컨테이너로 하지 말라는 의도!
	s.push_front(10); // ok.. 앞에 넣기
//	v.push_front(10); // error. vector 는 앞에 넣을수 없다.


	// 핵심 3. [] 연산자는 vector 와 deque 만 가능하고, list 는 안됩니다.
	v[0] = 10;
	d[0] = 10;
	s[0] = 10; // error

	// 핵심 4. 선택기준
	// 1. []를 사용하고 싶은데, 전방 삽입은 필요 없다. : vector
	// 2. []를 사용하고 싶은데, 전방 삽입이 필요 하다. : deque
	// 3. []를 사용하지 않을건데,삽입 삭제 작업이 많다. : list

	// 핵심 5. 사용법이 동일하므로 컨테이너를 변경해 가면서 테스트 할수 있습니다.
	//std::vector<int> c = { 1,2,3,4,5 };
	std::list<int> c = { 1,2,3,4,5 };


	// c를 사용하는 코드 작성
	c.push_back(10);
	c.size();

}





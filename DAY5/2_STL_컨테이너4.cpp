// 5_STL_컨테이너4
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// 핵심 1. STL 에는 제거와 반환을 동시에 하는 멤버 함수가 없습니다.
	// => 제거와 반환을 동시에 하면 "예외 안정성 의 강력 보장 을 지원할수 없다"
	//    는 연구 결과에 따라!!
	// => 안전한 라이브러리를 만들기 위한 선택


	int ret = s.back(); // 마지막 요소를 얻기.단, 제거는 안됨
	s.pop_back();		// 제거만, 반환 하지는 않음. 반환 타입 void 

	std::stack<int> st;
	st.push(10);
	st.push(20);

	std::cout << st.top() << std::endl; // 20
	
	std::cout << st.top() << std::endl; // 20
	st.pop(); // 제거만

	std::cout << st.top() << std::endl; // 10

	//======================================
	// 핵심 2. 컨테이너가 컨테이너를 보관하면 아주 유용한 코드를 만들수 있습니다.

	std::vector<int> v1(10);
	std::vector<std::list<int>> v2(10);

	v1[0] = 10;

	v2[0].push_back(1);
	v2[0].push_back(2);

	v2[1].push_back(10);
	v2[1].push_back(20);

}


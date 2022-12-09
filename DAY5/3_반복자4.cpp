// 5_반복자1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// 컨테이너 모든 요소 열거하는 방법
	// 방법 1.  C++11 이 새로운 for 문(range-for) - 권장
	// => 모든 컨테이너에 사용가능
	for (auto e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << std::endl;
	//=================================================
	// 방법 2. iterator 사용 - C++11 이전에 가장 널리 사용되던기술
	// => 모든 컨테이너에 사용가능
	auto p1 = c.begin();
	auto p2 = c.end();

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

	//=================================
	// 방법 3. [] 연산자로 요소 접근
	for (int i = 0; i < c.size(); i++)
	{
		int n = c[i];	// vector 와 deque 만 가능
						// list 는 안됨.!!
	}
}


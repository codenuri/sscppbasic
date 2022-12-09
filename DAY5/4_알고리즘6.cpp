#include <iostream>
#include <vector>

// 핵심 : 알고리즘은 컨테이너를 모른다. => 아주 중요합니다.!!
// => 알고리즘은 컨테이너의 메모리를 제거할수없습니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	std::cout << v.capacity() << ", " << v.size() << std::endl; // 10, 10


	auto p = std::remove_if(v.begin(), v.end(), [](int n) { return n % 2 == 0; });

	std::cout << v.capacity() << ", " << v.size() << std::endl;	// 10, 10


	v.erase(p, v.end());	// size 만 변경. 메모리가 줄어드는것은 아닙

	std::cout << v.capacity() << ", " << v.size() << std::endl; // 10, 5

	v.clear();	// 모든 요소 제거

	std::cout << v.capacity() << ", " << v.size() << std::endl; // 10, 0

	v.shrink_to_fit();
	std::cout << v.capacity() << ", " << v.size() << std::endl; // 0, 0
}
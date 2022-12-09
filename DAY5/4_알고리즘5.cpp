#include <iostream>
#include <vector>

// 핵심 : 알고리즘은 컨테이너를 모른다. => 아주 중요합니다.!!

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 짝수 제거.
	std::remove_if(v.begin(), v.end(), [](int n) { return n % 2 == 0});

	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl;
}
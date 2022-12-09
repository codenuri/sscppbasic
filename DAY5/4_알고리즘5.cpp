#include <iostream>
#include <vector>

// 핵심 : 알고리즘은 컨테이너를 모른다. => 아주 중요합니다.!!
// => 알고리즘은 컨테이너의 메모리를 제거할수없습니다.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// 짝수 제거.
	// => 실제로 컨테이너가 줄어드는 것은 아니라..
	// => 짝수를 만나면 뒤에 있는 요소를 앞으로 당겨 놓는것
	// => 어디까지가 유효한 요소인지는 반환 값으로 전달
	auto p = std::remove_if(v.begin(), v.end(), [](int n) { return n % 2 == 0; });

	// 실제 컨테이너를 줄이는 것은 알고리즘이 아닌 
	// 컨테이너의 멤버 함수 사용
	v.erase(p, v.end());


	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl;
}
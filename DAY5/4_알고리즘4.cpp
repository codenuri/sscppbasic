// 6_알고리즘1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };
		
	// 주어진 구간에서 3을 -1로 변경
	// std::replace(v.begin(), v.end(), 3, -1);
	 
	// v에서 "짝수"를 0으로 변경해 보세요 
	
	// std::replace_if(v.begin(), v.end(), 단항조건자, 0);

	std::replace_if(v.begin(), v.end(), 
							[](int n) { return n % 2 == 0; }, 0);

	for (auto e : v)
		std::cout << e << ", ";
}
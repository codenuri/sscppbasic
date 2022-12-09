#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	v.resize(5); // size만 5로 감소, 
				// 메모리 사용량(capacity)은 계속 10

	std::vector<int> v2 = v1; // ???

	std::cout << v2.size() << std::endl; // 5
	std::cout << v2.capacity() << std::endl; // 5 ? 10
}
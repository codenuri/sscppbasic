#include <iostream>
#include <vector>
#include <algorithm>



int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// C++98 
	// remove 한 후에 erase 해야 했습니다.
	//auto p = std::remove(v.begin(), v.end(), 3);
	//v.erase(p, v.end());

	// 위 2줄을 간결하게 하려고 아래 처럼 사용하곤 했습니다.
	// => erase-remove idioms 라는 이름을 가진 기술 입니다.
	// v.erase(std::remove(v.begin(), v.end(), 3) , v.end());


	// 위코드를 보다 간단하게 하기위해 C++20 에서 
	// std::erase() 가 나왔습니다.
	std::erase(v, 3);

	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl;

	std::cout << v.capacity() << ", " << v.size() << std::endl;
}
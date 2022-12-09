#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // 어떻게 만들었을까요 ?
				// 버퍼 자체를 줄이지는 않고, size 변수만 3으로 변경
	
	std::cout << v.size()     << std::endl;
	std::cout << v.capacity() << std::endl;

}
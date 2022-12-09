#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // 어떻게 만들었을까요 ?
				// 버퍼 자체를 줄이지는 않고, size 변수만 3으로 변경
	
	std::cout << v.size()     << std::endl; // 3
	std::cout << v.capacity() << std::endl; // 5

	v.push_back(2); // 끝에 한개 (2) 추가..
					// 현재 상태는 size < capacity 상태 입니다.
					// 즉, 메모리의 여부분이 있으므로 이 연산은
					// "not expensive" 합니다.

	std::cout << v.size()     << std::endl; // 4
	std::cout << v.capacity() << std::endl; // 5

	v.shrink_to_fit();	// 필요 없는 여분의 메모리는 제거해달라!
						// 즉, 이 순간 현재 size인 4개짜리 메모리를 
						// 재할당해서 요소 보관

	std::cout << v.size() << std::endl;		// 4
	std::cout << v.capacity() << std::endl; // 4

	v.push_back(2); // 끝에 한개 추가
					// 현재 상태는 size == capacity 이므로 
					// 여유메모리공간이 없습니다.
					// 메모리 재할당이 필요 합니다.
					// 이 연산은 "expensive" 합니다.

	// 여유 메모리가 없을때 v.push_back 으로 요소가 들어 오면
	// g++ : 기존 메모리 크기의 2배로 키운다
	// vc  : 기존 메모리 크기의 1.5배로 키운다
	// 단, 버전에 따라 달라 질수 있습니다.

	std::cout << v.size() << std::endl;		// 5
	std::cout << v.capacity() << std::endl; // 6

}
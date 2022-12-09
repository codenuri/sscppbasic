#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	v1.resize(5); // size만 5로 감소, 
				// 메모리 사용량(capacity)은 계속 10

	std::vector<int> v2 = v1; // v1의 capacity 는 10이지만 
							  //      size 가 5이므로   
							  // v2는 5개의 메모리만 할당해서 복사 합니다.

	std::cout << v2.size() << std::endl; // 5
	std::cout << v2.capacity() << std::endl; // 5 

	//----------------------------------
	// shrink_to_fit() 이 없던 시절에 사용했던 기술
	std::vector<int> v3 = { 1,2,3,4,5,6,7,8,9,10 };
	v3.resize(5);

	// 아래 한줄 잘 생각해보세요..
	std::vector<int>(v3).swap(v3);  // v3.shrink_to_fit() 과 동일


	std::vector<int>().swap(v3); // 버퍼 메모리 완전제거 기술
}
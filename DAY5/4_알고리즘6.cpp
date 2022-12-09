#include <iostream>
#include <vector>

// �ٽ� : �˰����� �����̳ʸ� �𸥴�. => ���� �߿��մϴ�.!!
// => �˰����� �����̳��� �޸𸮸� �����Ҽ������ϴ�.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	std::cout << v.capacity() << ", " << v.size() << std::endl; // 10, 10


	auto p = std::remove_if(v.begin(), v.end(), [](int n) { return n % 2 == 0; });

	std::cout << v.capacity() << ", " << v.size() << std::endl;	// 10, 10


	v.erase(p, v.end());	// size �� ����. �޸𸮰� �پ��°��� �ƴ�

	std::cout << v.capacity() << ", " << v.size() << std::endl; // 10, 5

	v.clear();	// ��� ��� ����

	std::cout << v.capacity() << ", " << v.size() << std::endl; // 10, 0

	v.shrink_to_fit();
	std::cout << v.capacity() << ", " << v.size() << std::endl; // 0, 0
}
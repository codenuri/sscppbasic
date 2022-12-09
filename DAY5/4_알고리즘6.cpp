#include <iostream>
#include <vector>

// �ٽ� : �˰����� �����̳ʸ� �𸥴�. => ���� �߿��մϴ�.!!
// => �˰����� �����̳��� �޸𸮸� �����Ҽ������ϴ�.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	std::cout << v.capacity() << ", " << v.size() << std::endl;

	auto p = std::remove_if(v.begin(), v.end(), [](int n) { return n % 2 == 0; });


	std::cout << v.capacity() << ", " << v.size() << std::endl;

	v.erase(p, v.end());

	std::cout << v.capacity() << ", " << v.size() << std::endl;
}
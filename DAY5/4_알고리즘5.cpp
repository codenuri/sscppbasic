#include <iostream>
#include <vector>

// �ٽ� : �˰����� �����̳ʸ� �𸥴�. => ���� �߿��մϴ�.!!

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// ¦�� ����.
	std::remove_if(v.begin(), v.end(), [](int n) { return n % 2 == 0});

	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl;
}
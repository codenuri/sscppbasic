#include <iostream>
#include <vector>
#include <algorithm>



int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// C++98 
	// remove �� �Ŀ� erase �ؾ� �߽��ϴ�.
	//auto p = std::remove(v.begin(), v.end(), 3);
	//v.erase(p, v.end());

	// �� 2���� �����ϰ� �Ϸ��� �Ʒ� ó�� ����ϰ� �߽��ϴ�.
	// => erase-remove idioms ��� �̸��� ���� ��� �Դϴ�.
	// v.erase(std::remove(v.begin(), v.end(), 3) , v.end());


	// ���ڵ带 ���� �����ϰ� �ϱ����� C++20 ���� 
	// std::erase() �� ���Խ��ϴ�.
	std::erase(v, 3);

	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl;

	std::cout << v.capacity() << ", " << v.size() << std::endl;
}
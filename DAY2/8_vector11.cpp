// 3번 복사
#include <iostream>
#include <vector>

int main()
{
	// 4. 사용자가 -1을 입력할때 까지 계속 입력 받고 싶습니다.
	//   단, 입력된 모든 값은 보관되어 있어야 합니다.

	std::vector<int> v;

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		v.push_back(n);
	}
	std::cout << "입력된 갯수 : " << v.size() << std::endl;

	for ( int e : v)
	{
		std::cout << e << std::endl;
	}

}


// 3�� ����
#include <iostream>
#include <vector>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �ް� �ͽ��ϴ�.
	//   ��, �Էµ� ��� ���� �����Ǿ� �־�� �մϴ�.

	std::vector<int> v;

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		v.push_back(n);
	}
	std::cout << "�Էµ� ���� : " << v.size() << std::endl;

	for ( int e : v)
	{
		std::cout << e << std::endl;
	}

}


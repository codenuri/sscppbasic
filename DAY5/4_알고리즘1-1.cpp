// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // STL �˰����� ����ϱ� ���� ���.

int main()
{
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// std::find(first, last, 3) : [first, last) ���� �˻�
	// ��ȯ ���� "�ݺ���" �Դϴ�.
	auto ret1 = std::find(v.begin(), v.end(), 3);

	// find �� �˻� ���н� 2��° ���ڷ� ���޵� �ݺ��ڸ� ��ȯ �մϴ�.
	// �Ʒ� ó�� �����ؾ� �մϴ�.

	if (ret1 == v.end())
	{
		std::cout << "�˻� ����" << std::endl;
	}
	else
	{
		std::cout << "�˻� ���� : " << *ret1 << std::endl;
	}

}

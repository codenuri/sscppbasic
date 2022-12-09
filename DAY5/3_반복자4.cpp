// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳� ��� ��� �����ϴ� ���
	// ��� 1.  C++11 �� ���ο� for ��(range-for) - ����
	// => ��� �����̳ʿ� ��밡��
	for (auto e : c)
	{
		std::cout << e << ", ";
	}
	std::cout << std::endl;
	//=================================================
	// ��� 2. iterator ��� - C++11 ������ ���� �θ� ���Ǵ����
	// => ��� �����̳ʿ� ��밡��
	auto p1 = c.begin();
	auto p2 = c.end();

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

	//=================================
	// ��� 3. [] �����ڷ� ��� ����
	for (int i = 0; i < c.size(); i++)
	{
		int n = c[i];	// vector �� deque �� ����
						// list �� �ȵ�.!!
	}
}


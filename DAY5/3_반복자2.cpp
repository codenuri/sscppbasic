// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
//	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };

//	int s[10] = {1,2,3,4,5,6,7,8,9,10}; // raw array

	// 1. �ݺ����� ��Ȯ�� Ÿ��
	// => C++98 �������� �̷��� ���� �ڵ带 �ۼ��߾�� �մϴ�.
	// => ���� : �����̳� ����� Ÿ�Ե� ����Ǿ�� �մϴ�.
	// std::list<int>::iterator p1 = s.begin();


	// 2. �ݺ��� Ÿ���� �˾� �μ���
	// �׷���, ��������� ����, �Ʒ� ó�� auto �� �ϼ���..
	// auto p1 = s.begin();	


	// 3. ��� �Լ� begin() vs �Ϲ� �Լ� begin()
	auto p1 = s.begin();		// s �� raw array ��� ����!
	auto p2 = std::begin(s);	// s �� raw array �� ok.. 


	auto sz1 = s.size();
	auto sz2 = std::size(s); // raw array �� ����
}




/*
namespace std
{
	template<typename T>
	class list
	{
	public:
		class iterator {};
	};
}
*/
// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };

	// �����̳ʿ��� 3�� ã�� �ʹ�.
	// ��� 1. ����Լ� find�� ��������.
	// ���� : ����ϱ� ����.
	// ���� : ��� �����̳ʿ� find �� �ʿ� �ϴ�.
//	s.find(3);
//	v.find(3);
	
	// STL�� ����!
	// => ���� �˻� ����� �����ѵ�, ��.. ��� �����̳ʿ� ����
	//    ����°�!!!
	// => �׳�, �Ϲ��Լ� �Ѱ��� ��� �����̳ʿ� ����Ҽ� �ְ� ����.
	// => �Ѱ��� find �� vector�� list���� �����˻� ����!

	auto ret1 = std::find(s.begin(), s.end(), 3);
	auto ret2 = std::find(v.begin(), v.end(), 3);
	

}
#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

// unordered_set

int main()
{
//	std::set<int> s;			// tree
	std::unordered_set<int> s;	// hash

	s.insert(50);
	s.insert(30);
	s.insert(70);	// set �̶��
					// => 70�� root �� ���ؼ� ����/���������� ��ġ
					// unordered_set �̸�
					// => hash �Լ����� 70�� ������ ������ index�� �����Ŀ�
					//    ����

	auto ret = s.find(70);

	// tree : �˻��� ������, ����Ÿ�� ���ĵ� ���·� �����Ǿ� �ִ�.
	// hash : �˻��� ���� ������, ����Ÿ�� ���ĵǾ����� �ʴ�.

}
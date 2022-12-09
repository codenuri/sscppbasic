#include <iostream>
#include <algorithm>

#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

int main()
{
	std::set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(70);

	// �ٽ� 1. set �� insert(emplace)�θ� ������ �ֽ��ϴ�.
	// s.push_back(10);  // error


	// �ٽ� 2. set �� �ݺ��ڴ� �б� ���� �ݺ��� �Դϴ�.
	auto p1 = s.begin();
	//*p1 = 200;  // error.
				

	// �ٽ� 3. �����̳�(�ڷᱸ��)�� Ư���� �°� ����ϼ���
	
	// std::find : �����˻� �˰��� 
	//             => ��� ��Ҹ� ���������� �̵��ϸ鼭 �˻�
	auto ret = std::find(s.begin(), s.end(), 70); // ?

	// std::set�� ����ϴ� ������ "�����˻�"�� �ƴ� "���� �˻�"�� �ϱ�
	// ���ؼ� �Դϴ�. �˰��� "std::find" ���� ��� �Լ� find �� 
	// ����ϼ���..
	auto ret2 = s.find(70);

	

}
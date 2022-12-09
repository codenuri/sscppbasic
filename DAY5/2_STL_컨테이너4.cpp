// 5_STL_�����̳�4
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::list<int>   s = { 1,2,3,4,5 };

	// �ٽ� 1. STL ���� ���ſ� ��ȯ�� ���ÿ� �ϴ� ��� �Լ��� �����ϴ�.
	// => ���ſ� ��ȯ�� ���ÿ� �ϸ� "���� ������ �� ���� ���� �� �����Ҽ� ����"
	//    �� ���� ����� ����!!
	// => ������ ���̺귯���� ����� ���� ����


	int ret = s.back(); // ������ ��Ҹ� ���.��, ���Ŵ� �ȵ�
	s.pop_back();		// ���Ÿ�, ��ȯ ������ ����. ��ȯ Ÿ�� void 

	std::stack<int> st;
	st.push(10);
	st.push(20);

	std::cout << st.top() << std::endl; // 20
	
	std::cout << st.top() << std::endl; // 20
	st.pop(); // ���Ÿ�

	std::cout << st.top() << std::endl; // 10

	//======================================
	// �ٽ� 2. �����̳ʰ� �����̳ʸ� �����ϸ� ���� ������ �ڵ带 ����� �ֽ��ϴ�.

	std::vector<int> v1(10);
	std::vector<std::list<int>> v2(10);

	v1[0] = 10;

	v2[0].push_back(1);
	v2[0].push_back(2);

	v2[1].push_back(10);
	v2[1].push_back(20);

}


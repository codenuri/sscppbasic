// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
	//std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

	auto p1 = c.begin(); 

	std::cout << *p1 << std::endl;

//	c.resize(20);	// �����̳� Ű���.
					// c �� vector ��� ������ ���� �ݺ��ڴ� ��ȿȭ �˴ϴ�.
					// c �� list ��� �ݺ��ڴ� ��ȿȭ ���� �ʽ��ϴ�

	c.resize(5);	// �����̳� ���̱�
					// c�� vector �� �̸� ���� �ݺ��ڴ� ��ȿȭ ���� �ʽ��ϴ�.

	std::cout << *p1 << std::endl;

//	c.shrink_to_fit(); // vector �� ���
						// �� ������ �ݺ��ڰ� ��ȿȭ �˴ϴ�.

}

// �̹� ���� �ݺ��ڴ�
// �����̳��� �پ��� ��� �Լ� ȣ�⿡ ����.. ��ȿȭ �� ���ɼ��� �ֽ��ϴ�.
// ���� �ؼ� ����ϼ���

// cppreference.com ���� std::vector �˻��� ������
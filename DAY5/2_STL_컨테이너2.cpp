#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // ��� ���������� ?
				// ���� ��ü�� �������� �ʰ�, size ������ 3���� ����
	
	std::cout << v.size()     << std::endl;
	std::cout << v.capacity() << std::endl;

}
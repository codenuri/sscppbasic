#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1 = { 1,2,3,4,5,6,7,8,9,10 };

	v1.resize(5); // size�� 5�� ����, 
				// �޸� ��뷮(capacity)�� ��� 10

	std::vector<int> v2 = v1; // v1�� capacity �� 10������ 
							  //      size �� 5�̹Ƿ�   
							  // v2�� 5���� �޸𸮸� �Ҵ��ؼ� ���� �մϴ�.

	std::cout << v2.size() << std::endl; // 5
	std::cout << v2.capacity() << std::endl; // 5 

	//----------------------------------
	// shrink_to_fit() �� ���� ������ ����ߴ� ���
	std::vector<int> v3 = { 1,2,3,4,5,6,7,8,9,10 };
	v3.resize(5);

	// �Ʒ� ���� �� �����غ�����..
	std::vector<int>(v3).swap(v3);  // v3.shrink_to_fit() �� ����


	std::vector<int>().swap(v3); // ���� �޸� �������� ���
}
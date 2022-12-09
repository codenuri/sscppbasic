#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // ��� ���������� ?
				// ���� ��ü�� �������� �ʰ�, size ������ 3���� ����
	
	std::cout << v.size()     << std::endl; // 3
	std::cout << v.capacity() << std::endl; // 5

	v.push_back(2); // ���� �Ѱ� (2) �߰�..
					// ���� ���´� size < capacity ���� �Դϴ�.
					// ��, �޸��� ���κ��� �����Ƿ� �� ������
					// "not expensive" �մϴ�.

	std::cout << v.size()     << std::endl; // 4
	std::cout << v.capacity() << std::endl; // 5

	v.shrink_to_fit();	// �ʿ� ���� ������ �޸𸮴� �����ش޶�!
						// ��, �� ���� ���� size�� 4��¥�� �޸𸮸� 
						// ���Ҵ��ؼ� ��� ����

	std::cout << v.size() << std::endl;		// 4
	std::cout << v.capacity() << std::endl; // 4

	v.push_back(2); // ���� �Ѱ� �߰�
					// ���� ���´� size == capacity �̹Ƿ� 
					// �����޸𸮰����� �����ϴ�.
					// �޸� ���Ҵ��� �ʿ� �մϴ�.
					// �� ������ "expensive" �մϴ�.

	// ���� �޸𸮰� ������ v.push_back ���� ��Ұ� ��� ����
	// g++ : ���� �޸� ũ���� 2��� Ű���
	// vc  : ���� �޸� ũ���� 1.5��� Ű���
	// ��, ������ ���� �޶� ���� �ֽ��ϴ�.

	std::cout << v.size() << std::endl;		// 5
	std::cout << v.capacity() << std::endl; // 6

}
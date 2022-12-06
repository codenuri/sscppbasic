#include <iostream>
#include <vector> // �̹� C++ ǥ�ؿ� vector�� �ֽ��ϴ�.

// C++ �� ���� ��!
// 1. vector ���� Ŭ������ ���鶧 �ʿ��� ������ ���°�!
// 2. �̹� ������� vector ���� ���̺귯���� ������ ���� ��

int main()
{
	std::vector<int> v(10);

	v.at(0) = 10;	// at �� ������
	v[0] = 20;		// �̷��� �ص� �˴ϴ�.

	v.resize(20);	// ũ�� ���浵 ����
	//===========================================
	std::vector<int> v2; // ũ�Ⱑ 0�� ���� �迭(vector)

	v2.push_back(1); // �̷��� ������ ũ�Ⱑ �ڵ� ����
	v2.push_back(1);
	v2.push_back(1);
	std::cout << v2.size() << std::endl; // 3
}
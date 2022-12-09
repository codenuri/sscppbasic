// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
// STL �� ��ü���� ���̺귯���� �ƴմϴ�.
//        Generic(�Ϲ�ȭ) ���̺귯�� ��� �մϴ�.
//        => ���ø������ؼ� �Ѱ��� �Լ� ���ø����� ������ �����̳ʿ� ����
//			 �����ϴٴ� �ǹ�.

// C++ : ��Ƽ �з����� ���!!
//       C�� ��� �� ���� + ��ü���� ���� + Generic ����

int main()
{
	std::vector<int> v = { 1,2,3,4,3,6,7,3,9,10 };

	// ������ �˰����� std::reverse() �Դϴ�.
	// => ��κ��� �˰����� ���ڷ� �ݺ��ڸ� �ް� �˴ϴ�.
	// => v.begin(), v.end() 
	std::reverse(v.begin(), v.end());

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;

	// ���ǿ� �´� ��Ҹ� �����ϴ� �˰����� std::replace() �Դϴ�.
	// v ���� 3�� -1�� ������ ������.  
	std::replace(v.begin(), v.end(), 3, -1);
	

	for (auto e : v)
		std::cout << e << ", ";
	std::cout << std::endl;
}
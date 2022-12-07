#include <iostream>
#include <string>
#include <vector>

void f1(std::string s) {}
void f2(std::vector<int> v) {}

int main()
{
	f1("hello");	// ������ �ʴ�!! �Ǿ� �Ѵ�!!
					// �ȴ�.!!
					// std::string s = "Hello" �� �ȴٴ°�
	f2(10);		// �ȵǴ� ���� ����.!!
				// �ȵȴ�.!!
				// std::vector<int> v = 10 �� �ȵȴٴ� ��!!

	// string(const char*) �����ڴ� explicit �� �ƴմϴ�.
	std::string s1("hello");	// ok
	std::string s2 = "hello";	// ok

	// vector(int) �����ڴ� explicit �Դϴ�.
	std::vector<int> v1(10); // ok
	std::vector<int> v2 = 10; // error	
}
// �ٽ�
// => ���ڰ� �Ѱ��� �����ڸ� ���鶧�� explicit �� ������ ������
//    �� �Ǵ��ϼ���
// => ������ ��κ� ���̴� ��찡 �����ϴ�.
// => C++ ǥ�� ���̺귯�� ���ÿ��� �� string �� vector ó��
//    = �ʱ�ȭ�� �ȵǴ� ��쵵 �ְ�, �Ǵ� ��쵵 ������ 
//    ����Ҷ� ���� �ϼ���..

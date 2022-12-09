#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	
	// 1. past the end

	auto p1 = s.begin(); 
	auto p2 = s.end();   // ������ ���� ��� �Դϴ�.

	*p1 = 10; 
//	*p2 = 10;	// runtime error
				// .end()�� ���� �ݺ��ڴ� * �����ϸ� �ȵ˴ϴ�.

	// ==, != ������ ����ؼ� ���� �����ߴ��� Ȯ���ϴ� 
	// �뵵�θ� ����ؾ� �մϴ�.
	while ( p1 != p2)
	{
		std::cout << *p1 << std::endl;
		++p1;
	}
}
// end�� size ����. 
// ���� : capacity �� vector �� �־��ϴ�.
//       list�� deque �� �����ϴ�.
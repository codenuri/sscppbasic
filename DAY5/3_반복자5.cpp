// 5_¹İº¹ÀÚ1
#include <iostream>
#include <vector>
#include <list>

// reverse_iterator

int main()
{
//	std::list<int>   c = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> c = { 1,2,3,4,5,6,7,8,9,10 };

//	auto p1 = c.begin(); 
//	auto p2 = c.end();

	auto p1 = c.rbegin();	// reverse begin
	auto p2 = c.rend();

	while (p1 != p2)
	{
		std::cout << *p1 << ", ";
		++p1;
	}
	std::cout << std::endl;

}


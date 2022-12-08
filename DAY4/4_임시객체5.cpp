// 4_ÀÓ½Ã°´Ã¼5
#include <iostream>

class Counter
{
	int cnt = 0;
public:
	~Counter() { std::cout << "~Counter" << std::endl; }
	Counter Increment()
	{
		++cnt;
		return *this;
	}
	int get() const { return cnt; }
};
int main()
{
	Counter c;
//	c.Increment();
//	c.Increment();
//	c.Increment();
	std::cout << "========================" << std::endl;
	c.Increment().Increment().Increment();
	std::cout << "========================" << std::endl;
	std::cout << c.get() << std::endl;
}
// 4_¿”Ω√∞¥√º5
#include <iostream>

class Counter
{
	int cnt = 0;
public:
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
	c.Increment().Increment().Increment();

	std::cout << c.get() << std::endl;
}
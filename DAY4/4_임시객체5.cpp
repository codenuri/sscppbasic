// 4_임시객체5
#include <iostream>

class Counter
{
	int cnt = 0;
public:
	~Counter() { std::cout << "~Counter" << std::endl; }

	//Counter Increment()
	Counter& Increment()
	{
		++cnt;
		return *this;	// *this 를 반환할때는 거의 참조 반환해야 합니다.
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
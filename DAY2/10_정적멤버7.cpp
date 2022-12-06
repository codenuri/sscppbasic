// 10_정적멤버7
#include <iostream>

// 프로그램에서 날짜를 다루는 경우가 많다.
// => "날짜(Date)" 타입을 먼저 만들자..

class Date
{
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	void set_month(int m)
	{
		if (m <= 12 && m >= 1)
			month = m;
	}
	int get_month() { return month; }

	// year, day 에 대해서도 getter/setter 제공하세요..
};

int main()
{
	Date d1(2022, 12, 6);
}
#include <iostream>


class Date
{
private:
	int year;
	int month;
	int day;
	
	static const int days[12];
public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	void set_month(int m)
	{
		if (m <= 12 && m >= 1)
			month = m;
	}
	int get_month() { return month; }


	Date after_days(int ds)
	{
		Date temp(year, month, day + ds);	
		return temp;
	}

	static int how_many_days(int m, int y = -1)
	{
		if (m == 2 && y != -1)
		{
			// 윤년 여부를 계산해야 합니다.
		}
		return days[m - 1];
	}
};
const int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date d1(2022, 12, 6);

	Date d2 = d1.after_days(1000);

	// 5월이 몇일까지 있는지 알고 싶다.
	// => 특정월의 날짜수를 얻는 것은 특정 날짜와는 상관없습니다
	// => 객체없이 호출가능해야 합니다.
	int ds = Date::how_many_days(5);

	// 내일의 날짜를 구하고 싶다.!!
	// => 내일의 날짜는 "특정일" 이 있어야 합니다.
	// => static 멤버 함수로 하면 안됩니다.
//	Date d3 = d1.tomorrow(); // 구현해 보세요!! 
}
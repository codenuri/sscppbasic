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
			// ���� ���θ� ����ؾ� �մϴ�.
		}
		return days[m - 1];
	}
};
const int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date d1(2022, 12, 6);

	Date d2 = d1.after_days(1000);

	// 5���� ���ϱ��� �ִ��� �˰� �ʹ�.
	// => Ư������ ��¥���� ��� ���� Ư�� ��¥�ʹ� ��������ϴ�
	// => ��ü���� ȣ�Ⱑ���ؾ� �մϴ�.
	int ds = Date::how_many_days(5);

	// ������ ��¥�� ���ϰ� �ʹ�.!!
	// => ������ ��¥�� "Ư����" �� �־�� �մϴ�.
	// => static ��� �Լ��� �ϸ� �ȵ˴ϴ�.
//	Date d3 = d1.tomorrow(); // ������ ������!! 
}
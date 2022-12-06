#include <iostream>


class Date
{
private:
	int year;
	int month;
	int day;

	// ���� ��¥��
	static const int days[12];

public:
	Date(int y, int m, int d) : year(y), month(m), day(d) {}

	void set_month(int m)
	{
		if (m <= 12 && m >= 1)
			month = m;
	}
	int get_month() { return month; }

	// ����ڵ鿡�� ������ �Ǵ� �پ��� ��� �Լ��� �����ϼ���..

	Date after_days(int ds)
	{
		Date temp(year, month, day + ds);	// �߸��� ����!!

		return temp;
	}
};
const int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	Date d1(2022, 12, 6);

	Date d2 = d1.after_days(1000); 
}
// 10_�������7
#include <iostream>

// ���α׷����� ��¥�� �ٷ�� ��찡 ����.
// => "��¥(Date)" Ÿ���� ���� ������..

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

	// year, day �� ���ؼ��� getter/setter �����ϼ���..
};

int main()
{
	Date d1(2022, 12, 6);
}
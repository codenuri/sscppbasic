#include <iostream>

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }

	// friend �Լ� ����
	// => ��� �Լ��� �ƴ����� private ����� �����Ҽ� �ְ� �ش޶�� ��û.
	// => �ٸ� ��ü���� ���� ���� "C++ ���� Ư¡"

	// 1. ��� �Լ��� �ϸ� �Ǵµ�.. �� �Ϲ��Լ��� ���峪�� ?
	// => ��� �Լ��� ����� �������� �ֽ��ϴ�.(������ ������ ���� ���ϴ�.)

	// 2. set_gear() ���� �������� �ʳ��� ?
	// => setter �� �ִٴ� ���� ������ ���� �����ϴٴ� �ǹ�..!!
	// => fixBike()�� gear �� �����Ҽ� �ְ� �Ϸ��� friend ���
	friend void fixBike();
};

void fixBike()
{
	Bike b;
	b.gear = 10;
}

int main()
{
	fixBike();
}
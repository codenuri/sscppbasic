#include <iostream>

// C++11 ���� C++ ǥ�ؿ��� ����Ʈ������ �����մϴ�.
#include <iostream>

class Car
{
public:
	void Go() { std::cout << "Go" << std::endl; }
	~Car() { std::cout << "~Car" << std::endl; }
};

int main()
{
//	std::shared_ptr<Car> sp1 = new Car; // error. explicit ������
	std::shared_ptr<Car> sp1(new Car);  // ok

	// sp1 �� �����ʹ� �ƴ����� Car* ó�� �����ϰ� ����ϼ���
	sp1->Go();

	// ��ü�� new�� ��������� delete �� ������ �� �ʿ� �����ϴ�
	// �ڵ����� ���� �˴ϴ�.
}

// ����Ʈ �����ʹ� "�������� ��ü���� ������"�� �ƴ�����
// C++ ������ ���� ������ ����Դϴ�.!!
#include <iostream>
#include <string>

// ���ܸ� ���� Ŭ������ ���� �մϴ�.
class file_not_found
{
	std::string filename;
	std::string directory;
	// ������.. ���п� ���� �پ��� ������ �˷� �ټ� �ֵ���
	// �پ��� ���(����Ÿ, �Լ�)�� �����մϴ�.
public:
	file_not_found(const std::string& s) : filename(s) {}
};
class stack_overflow { };
class invalid_url {};

// �Ʒ� �Լ��� ����
// => 3���� ������ ���� �Ҽ� �ֽ��ϴ�.
int db_backup()
{
	if (1)
	{
		throw file_not_found("a.txt"); // �ӽð�ü���·� ����
	}
	else if (2)
	{
		throw stack_overflow();
	}
	else if (3)
	{
		throw invalid_url();
	}
	return 100;
}

int main()
{
	try
	{
		int ret = db_backup(); 

	}
	catch (const file_not_found& e)
	{
		std::cout << "���� ����" << std::endl;
	}
	catch (const stack_overflow& e)
	{
		std::cout << "���� ����" << std::endl;
	}
	catch (...) // ������ ó������ ���� ��� ����
	{
		std::cout << "�˼� ���� ���� �߻�" << std::endl;
	}


	std::cout << "main ��� ����" << std::endl;
}

// ���ܸ� ����ϸ� 
// => ���� ó���� ��� �ϱ����� �߰��� ����� �ڵ尡 �����˴ϴ�.
// => �� ������尡 �ֽ��ϴ�.

// �Ϲ� ���� C++ ����
// ������ ���� : ������ ��ȯ������ ����
// �ɰ��� ���� : ���� ���

// �Ӻ���� �о�
// => ���ܸ� ������� �ʴ� ��찡 �� �����ϴ�.

// ���ܷ� �Լ� ���и� �˸��� ����� ����
// 1. ��ȯ���� ������ ������ �Ϻ��� �и� �ȴ�.
// 2. ȣ���ڰ� �ݵ�� ������ ���ܸ� ó���ϵ��� ���� �Ҽ� �ִ�.
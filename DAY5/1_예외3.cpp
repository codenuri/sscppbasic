#include <iostream>

// ������ ���ܸ� ��� ���
// => try, catch

int db_backup()
{
	if (1)		
	{
		throw 1;
	}
	return 100;
}

int main()
{
	try
	{
		int ret = db_backup(); // ���ܹ߻���, catch �������� �̵�

		// .. ���������� �ڵ�.. 
	}
	catch (int e)
	{
		// �߻��� ���� Ȯ����..
		// 1. �ذ��Ҽ� ���ٸ�, ����ڿ��� �˸��� ���α׷� ���� : std::exit(-1)
		// 2. ������ ������ �ذ��ߴٸ�(���α׷��� �����Ű�� ������),
		//    ���α׷��� ��� ����ɼ� �ֽ��ϴ�.
		std::cout << "catch..." << std::endl;
	}

	std::cout << "main ��� ����" << std::endl;
}

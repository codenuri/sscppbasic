#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "�л����� >> ";
	std::cin >> cnt;

	// 3. �Էµ� �л��� ��ŭ �ٽ� ������ �Է� �޾ƾ� �մϴ�.
	// int score[cnt]; // error. �迭�� ũ��� ������ ����Ҽ� ����.!

	// ����ð��� ������ �� ��ŭ�� �޸𸮸� �Ҵ��Ϸ���
	// => ���� �޸� �Ҵ� �ۿ� ����.
	int* score = new int[cnt]; // ok.. 

	for (int i = 0; i < cnt; i++)
	{
		std::cin >> score[i];
	}

	// ����Ŀ��� �ݵ�� ����
	delete[] score;

}
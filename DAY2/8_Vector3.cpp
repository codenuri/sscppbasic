#include <iostream>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �ް� �ͽ��ϴ�.
	//   ��, �Էµ� ��� ���� �����Ǿ� �־�� �մϴ�.

//	int score[4]; // �̷��� ����� �ʿ������ �����Ҽ� �����ϴ�.
				  // ���������� ���� ��Ģ�� ������ �ֽ��ϴ�.
				  // ���Ҷ� �����Ӱ� ���Ű� �ȵ˴ϴ�.

	int size = 4;	// ���� ũ��
	int count = 0;	// �Էµ� ����

	int* score = new int[size];

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		score[count++] = n;

		if (size == count)
		{
			int* tmp = new int[size + 4];

			// score �� �ִ� �ּҰ� ����Ű�� �޸𸮸�
			// tmp   �� �ִ� �ּ��� �޸𸮿� ����
			memcpy(tmp, score, sizeof(int) * size);

			// ���� ���۴� ����
			delete[] score;

			score = tmp;

			size = size + 4;
		}
	}

	std::cout << "�Էµ� ���� : " << count << std::endl;
	std::cout << "������ ũ�� : " << size << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << std::endl;
	}

	// ����Ŀ��� �ݵ�� ����!!
	delete[] score;

}
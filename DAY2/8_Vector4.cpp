#include <iostream>

// �Ʒ��� ���� ���۸� ��� Ű���� ����ϴ� �ڵ�� 
// ���� �θ� ���˴ϴ�.

// �׷���, C ���� �ֿ� �ڵ带 �����ϱ� �����մϴ�
// => �Լ��� �и��ϸ� data �� ���ڷ� ���޵Ǿ�� �ϴµ�..
//    �Ϻ��� �и����� �ʾƼ� �ʹ� �����մϴ�.

void resize(int** score, int* size)
{
	int* tmp = new int[*size + 4];

	memcpy(tmp, *score, sizeof(int) * *size);

	delete[] *score;

	*score = tmp;

	*size = *size + 4;
}

int main()
{
	int size = 4;	
	int count = 0;	

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
			resize(&score, &size);
		}
	}

	std::cout << "�Էµ� ���� : " << count << std::endl;
	std::cout << "������ ũ�� : " << size << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << std::endl;
	}


	delete[] score;

}
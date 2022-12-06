#include <iostream>

int main()
{
	// 4. 사용자가 -1을 입력할때 까지 계속 입력 받고 싶습니다.
	//   단, 입력된 모든 값은 보관되어 있어야 합니다.

//	int score[4]; // 이렇게 만들면 필요없을때 제거할수 없습니다.
				  // 지역변수의 수명 규칙은 정해져 있습니다.
				  // 원할때 자유롭게 제거가 안됩니다.

	int size = 4;	// 버퍼 크기
	int count = 0;	// 입력된 갯수

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

			// score 에 있는 주소가 가리키는 메모리를
			// tmp   에 있는 주소의 메모리에 복사
			memcpy(tmp, score, sizeof(int) * size);

			// 기존 버퍼는 제거
			delete[] score;

			score = tmp;

			size = size + 4;
		}
	}

	std::cout << "입력된 갯수 : " << count << std::endl;
	std::cout << "버퍼의 크기 : " << size << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << std::endl;
	}

	// 사용후에는 반드시 제거!!
	delete[] score;

}
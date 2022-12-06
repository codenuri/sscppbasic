#include <iostream>

// 아래와 같이 버퍼를 계속 키워서 사용하는 코드는 
// 아주 널리 사용됩니다.

// 그런데, C 언어는 주요 코드를 재사용하기 불편합니다
// => 함수로 분리하면 data 는 인자로 전달되어야 하는데..
//    완벽히 분리되지 않아서 너무 불편합니다.

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

	std::cout << "입력된 갯수 : " << count << std::endl;
	std::cout << "버퍼의 크기 : " << size << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << score[i] << std::endl;
	}


	delete[] score;

}
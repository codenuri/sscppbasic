#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "학생수는 >> ";
	std::cin >> cnt;

	// 3. 입력된 학생수 만큼 다시 점수를 입력 받아야 합니다.
	// int score[cnt]; // error. 배열의 크기로 변수를 사용할수 없다.!

	// 실행시간에 결정된 값 만큼의 메모리를 할당하려면
	// => 동적 메모리 할당 밖에 없다.
	int* score = new int[cnt]; // ok.. 

	for (int i = 0; i < cnt; i++)
	{
		std::cin >> score[i];
	}

	// 사용후에는 반드시 제거
	delete[] score;

}
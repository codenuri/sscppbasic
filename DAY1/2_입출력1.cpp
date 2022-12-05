#include <cstdio>
#include <iostream> 

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style
	scanf_s("%d", &n);	   // 입력

	// C++ style

	// 출력
	// 1. << 를 연속적으로 여러개 출력 가능
	// 2. 변수 출력시 "%d" 등이 필요 없다.
	// 3. std::endl 은 개행('\n') 을 의미 합니다.

	// printf    : 함수 입니다.
	// std::cout : 객체 입니다.( 지금은 사용법만 알아두세요 
	//						    금요일에 자세히 배웁니다.)
	std::cout << "n = " << n << std::endl;

	// 표준 입력
	// 1. 꺽쉬 방향 주의 하세요.. 
	// 2. &n 이 아니라 그냥 "n" 입니다.
	std::cin >> n; 
}

// printf    : 빠릅니다.
// std::cout : 느립니다. .. 그래서!!!
// std::print, std::println  : C++23에서 새롭게 등장합니다.
//								새로운 표준 입출력

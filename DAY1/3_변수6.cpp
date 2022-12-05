// 3_변수6.cpp   25 page 

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	// 구조체의 각 항목에 값을 꺼내는 일반 적인 방법
	int x = pt.x;
	int y = pt.y;

	// C++17 부터 아래처럼 가능합니다.
	auto [a1, a2] = pt;		// auto a1 = pt.x;
							// auto a2 = pt.y; 의 의미.. 

	int[a3, a4] = pt; // error. auto 로만 해야 합니다.

	auto [a5, a6, a7] = pt; // error

	// 배열도 가능합니다.
	int arr[3] = { 1,2,3,4 };

	auto [b1, b2, b3] = arr; // ok
}

// 3_정적멤버1 - 110 page
#include <iostream>

// 방법 2. 전역변수 cnt 사용
int cnt = 0;

class Car
{
	int color;
	int speed;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }
};
int main()
{
	Car c1;
	Car c2;

	std::cout << cnt << std::endl;  // 2
}



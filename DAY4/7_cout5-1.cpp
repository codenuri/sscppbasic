// 7_cout5-1
// 189(138)page
#include <iostream>

class Point
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) {}

	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

// QA1. Point 앞에는 왜?? const 를 붙이나요 ?
// 1. 인자를 받은 p 를 수정하지 않겠다는 의도
// 2. 임시객체도 받겠다는 의도!

// QA2. 그럼!! std::ostream& 앞에는 왜 const 가 없나요 ??
// => main 함수 아래 코드 참고.. 

std::ostream& operator<<(std::ostream& os, const Point& p)
{
	// 현재 os 는 cout 의 별명입니다.
	os << p.x << ", " << p.y;

	return os;
}

int main()
{
	Point p(1, 2);

	std::cout << p ; // operator<<(cout, p);

	std::cout << Point(1, 2); // 되는게 좋으세요 ?? 안되는게 좋으세요
								// operator<<(cout, Point(1,2));
}



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
	//----------------------------------------------------------

	// std::cout 의 별명을 만들어 봅시다.
	int n = 10;

	std::ostream&       os1 = std::cout; // 상수가 아닌 별명
	const std::ostream& os2 = std::cout; // 상수 별명

	os1 << n; // os1.operator<<(n);   ok...
	os2 << n; // os2.operator<<(n);   error. 
				// => 상수객체는 상수 멤버함수 만 호출가능합니다.
				// => 그런데, operator<<() 함수는 상수 멤버 함수가 아닙니다.
				// => operator<<() 안에서는 자신이 관리하는 버퍼에 쓰기 때문에
				//    버퍼를 수정하는 작업을 하고 있습니다.

	// 결론 : std::cout 의 별명을 만들때, 
	//		 "상수 별명을 만들면 <<  연산자로 출력이 안됩니다."
	//		 std::cout 을 함수 인자로 받아서 << 연산자를 사용하려면
	//       const-reference 로 하지말고, 그냥 referece로 하세요!
}



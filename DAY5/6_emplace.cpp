// 6_emplace
#include <iostream>
#include <vector>

class Point
{
	int x, y;
public:
	Point(int a, int b) : x(a), y(b) { std::cout << "Point(int,int)" << std::endl; }

	Point(const Point& pt) : x(pt.x), y(pt.y) { std::cout << "Point(const Point&)" << std::endl; }

	~Point() { std::cout << "~Point()" << std::endl; }
};

int main()
{
	std::vector<Point> v;

	// vector 에 요소를 넣는 방법
	// 1. Point 객체를 생성해서 push_back 으로 넣는 경우.
	
//	Point pt(1, 2);
//	v.push_back(pt);

	// 2. 임시객체 형태로 전달
//	v.push_back( Point(1, 2) );


	// 3. 객체를 전달하지 말고, 객체를 만들기 위한
	//    생성자 인자를 전달하자 - emplace_back
	v.emplace_back(1, 2); // 내부적으로 new Point(1,2) 해서 보관


//	Point pt(1, 2);
//	v.emplace_back(pt);	// new Point(pt)

	std::cout << "=============" << std::endl;
}
// 결론. STL 컨테이너가
// 1. primitive 타입을 보관하는 경우 : std::vector<int>
// => push_back(), emplace_back()  성능차이 없습니다.

// 2. user define type 의 포인터를 보관하는 경우 : std::vector<Point*>
// => push_back(), emplace_back()  성능차이 없습니다.

// 3. user define type 을 값타입으로 보관하는 경우 : std::vector<Point>
// => v.push_back(Point(1,2));  // 객체를 만든후 전달
// => v.emplace_back(1,2);      // 객체를 만들기 위한 생성자 인자 전달



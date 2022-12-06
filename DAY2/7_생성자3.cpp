// 5_생성자3 - 78page ~
#include <iostream>

class Point
{
	int x;
	int y;
public:
	// 핵심 1. 사용자가 생성자를 한개도 만들지 않으면
	//        컴파일러가 인자 없는 생성자를 제공합니다.
	// => "디폴트 생성자" 라고 합니다.

	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};
int main()
{
	Point p1;		
	Point p2(1, 2); 

	// 핵심 2. C++11 부터는 객체 생성시 {} 초기화 가능합니다.
	Point p3{ 1,2 };   
	Point p4 = { 1,2 };


	// 핵심 3. 객체를 생성하면 "반드시 생성자가 호출" 되어야 합니다.
	Point arr1[5];					// 인자 없는 생성자 5회 호출
	Point arr2[5] = { {1,2},{2,3} };// 인자 2개 생성자 2회, 
									// 인자 없는 생성자 3회

	// 핵심 3. malloc vs new 차이점
	Point* p;	// 객체 생성이 아닌 포인터 변수 만든것
				// 생성자 호출 안됨.

	p = (Point*)malloc( sizeof(Point) ); 
				// => Point 객체를 만드는 것이 아니라
				// => Point 타입의 크기를 구한후 ( 8 바이트 )
				// => 그 크기만큼의 메모리를 할당 한것.
				// => 생성자 호출 안됨.

	free(p);	// 이경우도 소멸자가 있어도 호출은 안됨.						


	p = new Point; // Point 객체를 힙에 생성해 달라는 것
					// 1. sizeof(Point) 의 메모리 할당후
					// 2. 생성자 호출
	delete p;

	p = new Point(1, 1); // 인자가 2개인 생성자 호출
	delete p;

	p = new Point[10];  // 인자가 없는 생성자가 10회 호출.
	delete[] p;
}
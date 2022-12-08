class Point
{
	int x;
	int y;
public:
	// C++11 이후에는 인자가 1개뿐 아니라 
	// 모든 생성자 앞에 explicit 를 붙일수 있게 되었습니다.
	explicit Point() : x(0), y(0) {}
	explicit Point(int x) : x(x), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
};
void foo(Point pt) {}

int main()
{
	// C++11 부터는 {} 초기화 때문에 아래 코드가 모두 가능합니다.
//	foo( {} );	// Point pt = {}
//	foo( 1 );	// Point pt = 1;
//	foo( {1} );	// Point pt = {1};
	foo( {1,2} );// Point pt = {1,2};

	Point pt;
}
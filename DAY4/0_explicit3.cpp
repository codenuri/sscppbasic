class Point
{
	int x;
	int y;
public:
	// C++11 ���Ŀ��� ���ڰ� 1���� �ƴ϶� 
	// ��� ������ �տ� explicit �� ���ϼ� �ְ� �Ǿ����ϴ�.
	explicit Point() : x(0), y(0) {}
	explicit Point(int x) : x(x), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
};
void foo(Point pt) {}

int main()
{
	// C++11 ���ʹ� {} �ʱ�ȭ ������ �Ʒ� �ڵ尡 ��� �����մϴ�.
//	foo( {} );	// Point pt = {}
//	foo( 1 );	// Point pt = 1;
//	foo( {1} );	// Point pt = {1};
	foo( {1,2} );// Point pt = {1,2};

	Point pt;
}
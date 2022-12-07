class Point
{
	int x;
	int y;
public:
	// C++11 ���Ŀ��� ���ڰ� 1���� �ƴ϶� 
	// ��� ������ �տ� explicit �� ���ϼ� �ְ� �Ǿ����ϴ�.
	Point() : x(0), y(0) {}
	Point(int x) : x(x), y(0) {}
	Point(int x, int y) : x(x), y(y) {}
};
void foo(Point pt) {}

int main()
{
	// C++11 ���ʹ� {} �ʱ�ȭ ������ �Ʒ� �ڵ尡 ��� �����մϴ�.
	foo({});
	foo(1);
	foo({1});
	foo({1,2});
}
#include <iostream>

class Vector
{
	int* ptr;
	int  sz;
public:
	Vector(int s)
	{
		sz = s;
		ptr = new int[sz];
	}
	// 생성자에서 자원(메모리)를 할당한 경우
	// 관례적으로 소멸자를 만들어서 메모리 해지를 하면됩니다.
	~Vector()
	{
		delete[] ptr;
	}
};

int main()
{
	Vector v(4);

}
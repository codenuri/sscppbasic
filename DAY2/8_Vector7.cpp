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
	~Vector() {	delete[] ptr;}

	// ptr 은 포인터 인데. 포인터는 배열저럼 접근 가능합니다.
	int& at(int idx) { return ptr[idx]; }
};

int main()
{
	Vector v(4); // 결국 "크기 변경이 가능한 4개 짜리 배열"

	v.at(0) = 10;  // v[0] = 10 의 의도!
	v.at(1) = 20;

//	v[0] = 10; // 이렇게 되게 하려면 "연산자 재정의" 문법을 배워야합니다.

	std::cout << v.at(0) << std::endl;

}
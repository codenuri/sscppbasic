// 상수멤버함수3-1
// 어제 소스중 - vector7 번 복사해 보세요
#include <iostream>

class Vector
{
	int* ptr;
	int  sz;
public:
	Vector(int s, int value = 0)
	{
		sz = s;
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	~Vector() { delete[] ptr; }

	int& at(int idx) { return ptr[idx]; }
};

int main()
{
	Vector vv(4, 0);
	const Vector cv(4, 0);

	int n;
	// 아래 4줄을 잘 생각해 보세요. 
	//			// 원하는 것		// 현재 상태
	vv.at(0) = 10;	// O		// O	
	cv.at(0) = 10;	// X		// X

	n = vv.at(0);	// O		// O
	n = cv.at(0);	// O		// X
	
}
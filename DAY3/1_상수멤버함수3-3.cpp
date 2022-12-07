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

	// 동일한 이름의 멤버 함수가
	// 상수객체와 상수객체가 아닐때 다르게 동작하도록 만들고 싶을때가
	// 있습니다.
	// 이 경우에 아래 처럼 2개를 만들어서 다르게 구현하면 됩니다.
	int& at(int idx)             { return ptr[idx]; }
	const int& at(int idx) const { return ptr[idx]; }
};

int main()
{
	Vector vv(4, 0);			// int vv[4] = {0,0,0,0} 의 의도
	const Vector cv(4, 0);		// const int cv[4] = {0,0,0,0} 의 의도
					
								// vv[0] = 10; // 되야 합니다.
								// cv[0] = 10;	// 안되야 합니다.
		
	int n;

	//			// 원하는 것		// 현재 상태
	vv.at(0) = 10;	// O		// O	
	cv.at(0) = 10;	// X		// X

	n = vv.at(0);	// O		// O
	n = cv.at(0);	// O		// O

}
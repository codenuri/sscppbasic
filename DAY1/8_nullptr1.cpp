// 11_nullptr1.cpp    54 page

int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok

//	int* p2 = 10; // error. 10도 정수지만 error
					// 0 만 포인터로 변환 가능
//	int* p3 = n1;	// error. 리터럴 0만 포인터로 변환가능하고
					//        0을 가진 변수는 포인터로 변환안됩니다.

	// C++11 부터는 포인터를 초기화 할때 0을 사용하지 말고
	// 아래 처럼하세요
	int* p4 = nullptr; // ok.. 
	int  n5 = nullptr; // error. nullptr 은 포인터 초기화만
						// 가능합니다.
}

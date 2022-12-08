// 3_예외1
#include <iostream>

// C 언어에서 함수가 실패 했을때..
// => 실패로 약속한 값을 반환 한다.

// 단점 1. -1이 연산의 결과인지, 실패를 의미하는지가 모호 하다.
// 단점 2. 호출자가 함수의 실패를 무시할수 있다.

#define ERROR -1
int f1()
{
	if (실패)
		return -1;

	return 100;
}

int main()
{
	int ret = f1();
//	if (ret == -1) {} 
	if (ret == ERROR) {}
}

#include <iostream>

void foo(void* p) { std::cout << "void*" << std::endl;}
void foo(int n)   { std::cout << "int" << std::endl; }

void goo(char* p) { std::cout << "goo" << std::endl; }

int main()
{
	foo(0);			// int, 0 은 정수(int) 타입이므로..
	foo((void*)0);	// void*
/*
#ifdef __cplusplus
#define NULL 0
#else 
#define NULL (void*)0
#endif 
*/
	foo(NULL);	// int..  

	goo(NULL);	// void* => char* 로의 암시적 형변환 필요!
				// C언어   : 허용
				// C++언어 : 에러, 명시적 변환 필요!

	foo(nullptr);
	goo(nullptr);
}

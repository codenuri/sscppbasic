// C++ 함수 특징 3. inline   .. 32page


       int add1(int a, int b) { return a + b; }
inline int add2(int a, int b) { return a + b; }

// 핵심 1. 함수 호출이 아닌 함수 의 기계어 코드를 치환하는 것
// 장점 : 빠르다.
// 단점 : 크기가 큰 함수를 여러번 치환하면 목적코드가 커질수 있다.
int main()
{
	int n1 = add1(1, 2);	// 호출
							// mov edi, 2
							// mov edi, 1	2개의 인자를 약속된곳에넣고
							// call add1
		
	int n2 = add2(1, 2);	// add2의 기계어 코드를 이 위치에복사	
							// mov eax, 2
							// add eax, 1
							// mov n, eax
}

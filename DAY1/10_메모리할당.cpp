// 2_메모리할당 - 52 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일
	int* p1 = new int;
	delete p1;

	int* p2 = new int[10];
	delete[] p2;		// 주의! 배열로 할당한 경우는	
						// 배열 delete 로 해야 합니다.

	int* p3 = new int[3][2]; // ok..
	delete[] p3;	// delete는 이렇게 하면 됩니다.


	int* p4 = new int[3]; // 배열로 할당했는데
	delete p4;	// 이렇게 하면 어떻게 되나요 ?
				// "미정의 동작(undefined) 발생"
				// => 컴파일러마다 달라집니다.
				// => 결국은 잘못된 코드 입니다.
				//    사용하면 안됩니다.


}


//				malloc					new
// 정체			함수						키워드. 
// 인자			크기(정수)				타입
// 반환타입		void*					인자로 전달된 타입*
//				일반적으로 캐스팅해서사용	캐스팅 필요없음
// 결정적차이	생성자 호출안됨			생성자 호출됨.


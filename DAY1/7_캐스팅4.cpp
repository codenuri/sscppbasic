// const_cast : 

int main()
{
	const int c = 10;

	// 상수의 주소 => 상수가 아닌것을 가리키는 포인터에 담기
	int* p1 = &c;       // error
	int* p2 = (int*)&c; // ok...

	int* p3 = static_cast<int*>( &c ); // error 

	int* p4 = reinterpret_cast<int*>(&c); // error 

	int* p5 = const_cast<int*>(&c); // ok. 
				// 동일 타입의 "상수성 제거"를 위한 캐스팅!

}
// C++ 에서는 용도에 맞는 캐스팅을 사용해야 합니다.
// static_cast
// reinterpret_cast
// const_cast
// dynamic_cast : RTTI를 위한 캐스팅(상속 배울때 설명)
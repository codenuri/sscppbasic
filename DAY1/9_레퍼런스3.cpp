// 1_레퍼런스3. 45 page
struct Rect
{
	int left, top, right, bottom;
};

void foo(int n)	// call by value : 원본 인자를 수정하지 않겠다는 약속
{				//				
}

//void goo(Rect r)// call by value : 복사본 생성에 따른 메모리 오버헤드 발생
//void goo(Rect& r) // call by reference : 복사본 없지만, 원본변수 변경가능
void goo(const Rect& r) // call by const reference
{						// => C++ 진영에서 가장 널리 사용하는 코드!
						// => 복사본의 오버헤드 없이 원본을 변경하지 않겠다는 의도!
}

int main()
{
	int x = 100;

	// 어떤 함수에서 인자의 값을 절대 수정하면 안된다면
	foo(x);

	Rect r = { 0, 0, 10, 10 };
	goo(r);
}



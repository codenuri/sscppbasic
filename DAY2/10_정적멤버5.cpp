class Car
{
	int color;
	static int cnt;
public:
	// 아래 문제 시험에 나옵니다.
	// 다음중 에러를 모두 골라 보세요

	// 핵심 1. static 멤버 데이타는 객체가 없어도 메모리에 있다.
	//     2. static 멤버 함수는 객체없이도 호출가능하다.
	void foo()	
	{
		// foo() 가 호출되었다는 것은 "객체를 생성했다" 는 것
		// Car c;
		// c.foo();

		color = 0;	// 1.
		cnt = 0;	// 2.
		goo();		// 3
	}
	static void goo()	
	{
		color = 0;	// 4. error. 객체가 있어야만 메모리에 놓이는 멤버
		cnt = 0;	// 5. ok.  객체가 없어도 메모리에 존재.
		foo();		// 6. error. static 멤버 함수가 아니므로 객체가 있어야
					//    호출가능.`
	}
};
int Car::cnt;

int main()
{
	Car::goo(); // goo 는 static 멤버 함수 이므로
				// 객체없어도 호출 가능.
}

// 핵심 : static 멤버 함수 안에서는
//        static 멤버(데이타, 함수) 만 접근 가능합니다.

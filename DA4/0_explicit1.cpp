// explicit1.cpp

class Vector
{
public:
	// explicit 생성자 : 직접 초기화만 사용가능하고 
	//				    복사 초기화는 사용할수 없게 하는 문법
	//				    C++98 시절 부터 있는 오래된 문법.
	explicit Vector(int size) {}
};

void foo(Vector v) {}


int main()
{
	// 핵심 1. 인자가 int 한개인 생성자가 있다면 아래처럼 객체를 만들수 있습니다
	Vector v1(10);		// 직접 초기화 ( direct initialization )
	Vector v2 = 10;		// 복사 초기화 ( copy initialization )
	Vector v3{ 10 };	// C++11 직접 초기화 ( direct initialization ) 
	Vector v4 = { 10 };	// C++11 복사 초기화 ( copy initialization )

	// 핵심 2. 함수의 인자 전달은 "복사 초기화" 형태로 초기화 됩니다.
	foo(v1); // ok.. "Vector v = v1"  => "복사 생성자 호출" 인데
			 //						      복사 생성자는 explicit 아닙니다.		  
	foo(10); // ok   "Vector v = 10"
			 // explicit 라면 에러!!
}


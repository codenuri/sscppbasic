// 상수 멤버 함수는 "필수" 문법입니다.

// 객체의 상태를 변경하지 않은 모든 멤버 함수(getxxxx)는
// 반드시 "상수 멤버 함수" 로 해야 합니다.

// 아래 Rect 에서 getArea() 에 const 를 붙이지 않으면 틀린 코드입니다.

class Rect
{
	int x, y, w, h;
public:
	Rect(int a, int b, int c, int d)
		: x(a), y(b), w(c), h(d) {}

	int getArea() const { return w * h; }
};

// 인자를 받을때 const & 가 아닌 & 로만 하면 어떤가요 ?
// => 원본 객체를 수정할수 있으므로 안정성이 좋지 않고
// => 임시객체 라는 것을 받을수 없다는 특징이 있고
// => 멀티 스레드 환경에서도 동기화가 필요하게 됩니다.

// 그래서, 인자를 받을때는 수정하지 않으려면 "반드시 const&"를 붙이세요!!
//void foo(Rect r)	// call by value.. 복사본 생성..
void foo( const Rect& r)
{
	int n = r.getArea(); // getArea() 함수가 상수 멤버 함수가 아니면	
						 // 에러 입니다.
}

int main()
{
	Rect r(1, 1, 10, 10);	// 상수 객체 아님.

	int n = r.getArea();	// ok. 
	
	foo(r);
}




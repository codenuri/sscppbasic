// 5_상속2
// C++ 접근지정자는 3개 입니다.

class Base
{
private:   int a;	// 자신의 멤버 함수만 접근 가능	
protected: int b;	// 자신의 멤버 함수 + 파생 클래스 멤버 함수접근가능
public:    int c;	// 어디서도 접근 가능
};
class Derived : public Base  
{
public:
	void foo()
	{
		a = 0;	// error. a를 물려받긴 하지만, 접근은 안됨
				//        접근하려면 Base의 멤버 함수 사용
		b = 0;	// ok.   Base의 protected는 접근 가능
		c = 0;  // ok
	}
};
int main()
{
	Base base;
	base.a = 0; // error
	base.b = 0; // error
	base.c = 0; // ok. 
}

#include <iostream>

// 아래 예제는 아주 나쁜 코드 입니다.
// 절대 사용하면 안됩니다.
// => 단지, 가상함수 원리를 학습하는 차원에서!!!!

class A
{
	int a;
public:
	void foo() { std::cout << "foo" << std::endl; }  // 1
};
class B   // 주의 상속관계 아닙니다.
{
	int b;
public:
	virtual void goo() { std::cout << "goo" << std::endl; } // 2
};
int main()
{
	A aaa;
	B* p = reinterpret_cast<B*>(&aaa);
	p->goo();  // p->vtptr[1]() 라는 기계어 생성
	
	// "p->goo()" 를 호출하므로 "goo()" 가 가상함수인지 조사
	// p가 B* 이므로 클래스 B에서 goo 가 가상인지 조사
}
// foo, goo 모두 비가상 : goo
// foo, goo 모두 가상  : foo
// foo 가상, goo 비가상 :goo 
// foo 비가상, goo 가상 : 실행시간 에러!!
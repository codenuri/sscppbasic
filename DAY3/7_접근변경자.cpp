// 7_접근변경자
// => 다른 객체지향 언어에는 없는 C++ 언어 만의 특징!!

class Base
{
public: 
	int data;
};

// 접근 변경자
// => 기반 클래스의 멤버의 보호속성을 축소 하면서 상속 받을때 사용

// protected 상속 : 기반 클래스의 public 멤버를 protected로 변경해서 상속
// private 상속   : 기반 클래스의 public, protected 멤버를 private 로 변경해서 상속

// public 상속 : 기반 클래스의 모든 멤버의 접근지정자를 동일하게 유지.

//class Derived : public Base
class Derived : protected Base   
{
};

int main()
{
	Derived d;
	d.data = 10; // error
}
#include <iostream>


// 용어 정리
// 추상 클래스 : 지켜야 하는 규칙(순수가상함수) + 다른 멤버 도 있는 경우 
// 인터 페이스 : 지켜야 하는 규칙(순수가상함수) 만 있는 경우. 

// C#, java, swift : "interface, abstract" 라는 별도의 키워드가 존재
// C++ : 순수 가상함수(=0) 문법만 존재.
// Ex) C# 코드
/*
interface ICamera
{
	void take();
};
*/


// 카메라와 카메라 사용자가 지켜야 하는 규칙(인터페이스)를 먼저 설계 합니다.

// 규칙 : "모든 카메라는 아래 클래스로 부터 파생 되어야 한다." 라고 표현하지 말고
//        "모든 카메라는 아래 인터페이스를 구현해야 한다." 라고 표현하는 것이 좋습니다. 
//       => 모든 카메라는 반드시 "take()" 함수를 만들라는 의미!

// swift 에서는 "모든 카메라는 ICamera 프로토콜을 채택(Conform)해야 한다." 라고 표현

// 인터페이스는 결국 모든 멤버가 public 입니다.
// 그래서, class 로 해도 되지만, struct 로하는 경우가 더 많습니다.
struct ICamera
{
	virtual void take() = 0;

	virtual ~ICamera() {}  // 인터페이스도 결국 기반 클래스입니다.
						// 모든 기반 클랫의 소멸자는 가상함수이어야합니다.
						// => 내일 오전에 배우게 됩니다.
};








// 진짜 카메라는 아직 없지만, 명확한 규칙(인터페이스)가 있습니다.
// 사용자는 규칙 대로만 사용하면 됩니다.
class Person
{
public:
	void use_camera(ICamera* p) { p->take(); }
};

// 이제 모든 카메라는 규칙을 지켜야 합니다
class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	Person p;
	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ??

	UHDCamera uhc;
	p.use_camera(&uhc);
}


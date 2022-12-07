#include <iostream>


// 카메라와 카메라 사용자가 지켜야 하는 규칙(인터페이스)를 먼저 설계 합니다.

// 규칙 : 모든 카메라는 아래 클래스로 부터 파생 되어야 한다.
//       => 모든 카메라는 반드시 "take()" 함수를 만들라는 의미!
class ICamera
{
public:
	virtual void take() = 0;
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

int main()
{
	Person p;
	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ??
}


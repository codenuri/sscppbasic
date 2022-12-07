// 4_인터페이스 - 171(219) page
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class Person
{
public:
	void use_camera(Camera* p) { p->take(); }
	void use_camera(HDCamera* p) { p->take(); }
};
int main()
{
	Person p;
	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ??
}


#include <iostream>


// ī�޶�� ī�޶� ����ڰ� ���Ѿ� �ϴ� ��Ģ(�������̽�)�� ���� ���� �մϴ�.

// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�.
class ICamera
{
public:
	virtual void take() = 0;
};












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


#include <iostream>


// ī�޶�� ī�޶� ����ڰ� ���Ѿ� �ϴ� ��Ģ(�������̽�)�� ���� ���� �մϴ�.

// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�.
//       => ��� ī�޶�� �ݵ�� "take()" �Լ��� ������ �ǹ�!
class ICamera
{
public:
	virtual void take() = 0;
};
// ��¥ ī�޶�� ���� ������, ��Ȯ�� ��Ģ(�������̽�)�� �ֽ��ϴ�.
// ����ڴ� ��Ģ ��θ� ����ϸ� �˴ϴ�.

class Person
{
public:
	void use_camera(ICamera* p) { p->take(); }
};

// ���� ��� ī�޶�� ��Ģ�� ���Ѿ� �մϴ�
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


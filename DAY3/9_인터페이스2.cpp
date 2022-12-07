#include <iostream>


// ��� ����
// �߻� Ŭ���� : ���Ѿ� �ϴ� ��Ģ(���������Լ�) + �ٸ� ��� �� �ִ� ��� 
// ���� ���̽� : ���Ѿ� �ϴ� ��Ģ(���������Լ�) �� �ִ� ���. 

// C#, java, swift : "interface, abstract" ��� ������ Ű���尡 ����
// C++ : ���� �����Լ�(=0) ������ ����.
// Ex) C# �ڵ�
/*
interface ICamera
{
	void take();
};
*/


// ī�޶�� ī�޶� ����ڰ� ���Ѿ� �ϴ� ��Ģ(�������̽�)�� ���� ���� �մϴ�.

// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�." ��� ǥ������ ����
//        "��� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�." ��� ǥ���ϴ� ���� �����ϴ�. 
//       => ��� ī�޶�� �ݵ�� "take()" �Լ��� ������ �ǹ�!

// swift ������ "��� ī�޶�� ICamera ���������� ä��(Conform)�ؾ� �Ѵ�." ��� ǥ��

// �������̽��� �ᱹ ��� ����� public �Դϴ�.
// �׷���, class �� �ص� ������, struct ���ϴ� ��찡 �� �����ϴ�.
struct ICamera
{
	virtual void take() = 0;

	virtual ~ICamera() {}  // �������̽��� �ᱹ ��� Ŭ�����Դϴ�.
						// ��� ��� Ŭ���� �Ҹ��ڴ� �����Լ��̾���մϴ�.
						// => ���� ������ ���� �˴ϴ�.
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


// 7_���ٺ�����
// => �ٸ� ��ü���� ���� ���� C++ ��� ���� Ư¡!!

class Base
{
public: 
	int data;
};

// ���� ������
// => ��� Ŭ������ ����� ��ȣ�Ӽ��� ��� �ϸ鼭 ��� ������ ���

// protected ��� : ��� Ŭ������ public ����� protected�� �����ؼ� ���
// private ���   : ��� Ŭ������ public, protected ����� private �� �����ؼ� ���

// public ��� : ��� Ŭ������ ��� ����� ���������ڸ� �����ϰ� ����.

//class Derived : public Base
class Derived : protected Base   
{
};

int main()
{
	Derived d;
	d.data = 10; // error
}
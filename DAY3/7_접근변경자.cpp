// 7_���ٺ�����

class Base
{
public: 
	int data;
};

class Derived : public Base
{
};

int main()
{
	Derived d;
	d.data = 10;
}